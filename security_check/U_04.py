# U-04 상
# 1.4 패스워드 파일 보호
# pwconv 명령어: passwd를 shadow로 변환
from os import path

import printModule as pm

def U04():
    report = pm.openReport('U-04.txt')
    pm.printTitle(report, '[U-04] 패스워드 파일 보호')

    isShadow = path.isfile("/etc/shadow")
    if not isShadow:
        pm.printWarning('/etc/shadow 파일이 없습니다.')

    isCrypto = False
    if isShadow:
        f = open('/etc/passwd', 'r')
        line = f.readline().split(':')
        if line[1] == 'x':
            isCrypto = True
        else:
            isCrypto = False
            pm.printWarning(report, '패스워드가 shadow를 통해 암호화가 되어있지 않습니다.')
        f.close()

    if isShadow and isCrypto:
        pm.printSafe(report)
    else:
        pm.printNotsafe(report)
        pm.printSolution(report, '[U-04] 조치 방법')
        pm.printSolution(report, '\tshadow 패스워드를 사용하거나 패스워드를 암호화하여 저장하세요.')
        pm.printSolution(report, '\t\t#pwconv\n')

    report.close()

U04()
