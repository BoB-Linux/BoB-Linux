# U-45 하
# 1.6 root 계정 su 제한
import printModule as pm

def U45():
    report = pm.openReport('U-45.txt')
    pm.printTitle(report, '[U-45] root 계정 su 제한')

    isSafe = False
    tocheck = 'auth required pam_wheel.so'
    tocheck = ''.join(tocheck.split())
    f = open('/etc/pam.d/su', 'r')
    for line in f:
        line = ''.join(line.split())
        if tocheck in line:
            # 주석인지 확인
            if not ('#' in line):
                isSafe = True
    f.close()

    if isSafe:
        pm.printNotice(report, '특정 그룹만 su 명령어를 사용할 수 있습니다.')
        pm.printSafe(report)
    else:
        pm.printWarning(report, '모든 사용자가 su 명령어를 사용할 수 있습니다.')
        pm.printNotsafe(report)
        pm.printSolution(report, '[U-45] 조치 방법')
        pm.printSolution(report, '\t특정 그룹의 사용자만 su 명령어를 사용하도록 제한시키세요.')
        pm.printSolution(report, '\t\twheel 그룹이 존재하지 않을 시 wheel 그룹을 생성하세요.')
        pm.printSolution(report, '\t\t  # groupadd wheel')
        pm.printSolution(report, '\t\twheel 그룹에 su 명령어를 사용할 사용자를 추가하세요.')
        pm.printSolution(report, '\t\t  usermod -G wheel <user_name>')
        pm.printSolution(report, '\t\t텍스트 에디터를 이용하여 \"/etc/pam.d/su\" 파일을 엽니다.')
        pm.printSolution(report, '\t\t아래와 같이 주석을 제거하거나 설정하세요.')
        pm.printSolution(report, '\t\t  auth  sufficient  pam_rootok.so')
        pm.printSolution(report, '\t\t  auth  required    pam_wheel.so  debug group=wheel\n')

    report.close()

U45()
