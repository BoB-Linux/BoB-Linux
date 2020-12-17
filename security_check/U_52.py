# U-52 중
# 1.13 동일한 UID 금지
import printModule as pm

def U52():
    report = pm.openReport('U-52.txt')
    pm.printTitle(report, '[U-52] 동일한 UID 금지')

    f = open('/etc/passwd', 'r')
    existUID = []
    isSafe = True

    for line in f:
        splitLine = line.split(':')
        uid = splitLine[2]
        if uid in existUID:
            isSafe = False
            pm.printWarning(report, '여러 계정이 동일한 UID: '+uid+'를 가집니다.')
        existUID.append(uid)

    if isSafe:
        pm.printSafe(report)
    else:
        pm.printNotsafe(report)
        pm.printSolution(report, '[U-52] 조치 방법')
        pm.printSolution(report, '\t동일한 UID를 가진 사용자 계정의 UID를 변경하세요.')
        pm.printSolution(report, '\t\t#usermod -u <변경할 UID> <user_name>\n')

    report.close()

U52()
