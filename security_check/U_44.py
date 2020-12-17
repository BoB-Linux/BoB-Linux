# U-44 중
# 1.5 root 이외의 UID가 '0' 금지
import printModule as pm

def U44():
    report = pm.openReport('U-44.txt')
    pm.printTitle(report, '[U-44] root 이외의 UID가 \'0\' 금지')

    f = open('/etc/passwd', 'r')
    isSafe = True

    for line in f:
        splitLine = line.split(':')
        name = splitLine[0]
        uid = splitLine[2]
        if (name != 'root') and (uid == '0'):
            isSafe = False
            pm.printWarning(report, name + '의 UID가 \'0\'입니다.')

    if isSafe:
        pm.printSafe(report)
    else:
        pm.printNotsafe(report)
        pm.printSolution(report, '[U-44] 조치 방법')
        # KISA 매뉴얼은 500 이상
        pm.printSolution(report, '\tUID가 0인 일반 계정의 UID를 1000 이상으로 수정하세요.')
        pm.printSolution(report, '\t\t#usermod -u <변경할 UID> <user_name>\n')

    report.close()

U44()
