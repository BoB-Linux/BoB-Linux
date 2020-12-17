# U-50 하
# 1.11 관리자 그룹에 최소한의 계정 포함
import printModule as pm

def U50():
    report = pm.openReport('U-50.txt')
    pm.printTitle(report, '[U-50] 관리자 그룹에 최소한의 계정 포함')

    isSafe = True
    f = open('/etc/group', 'r')
    for line in f:
        splitLine = line.split(':')
        group = splitLine[0]
        # KISA 매뉴얼에는 root 그룹만 검사함
        # 난 sudo 그룹도 추가하였다.
        if group == 'root':
            users = splitLine[3].split(',')
            numOfUsers = len(users)
            if '\n' in users:
                numOfUsers -= 1
            if 'root' in users:
                numOfUsers -= 1
            if numOfUsers > 0:
                pm.printWarning(report, 'root 그룹에 불필요한 계정이 존재합니다.')
                isSafe = False
        elif group == 'sudo':
            users = splitLine[3].split(',')
            numOfUsers = len(users)
            if '\n' in users:
                numOfUsers -= 1
            if 'sudo' in users:
                numOfUsers -= 1
            if numOfUsers > 0:
                pm.printNotice(report, 'sudo 그룹에 ' + str(numOfUsers) + '개의 계정이 존재합니다.')
                pm.printNotice(report, '사용자가 직접 계정 현황 확인 후 조치 바랍니다.')
    f.close

    if isSafe:
        pm.printSafe(report)
    else:
        pm.printNotsafe(report)
        pm.printSolution(report, '[U-50] 조치 방법')
        pm.printSolution(report, '\t관리자 그룹에 불필요한 계정은 제거하세요.')
        pm.printSolution(report, '\t\t# deluser <user_name> root\n')

    report.close()

U50()
