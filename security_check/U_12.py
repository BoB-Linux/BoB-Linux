# U-12 상
# 2.8 /etc/services 파일 소유자 및 권한 설정
from os import stat

import printModule as pm

def U12():
    report = pm.openReport('U-12.txt')
    pm.printTitle(report, '[U-12] /etc/services 파일 소유자 및 권한 설정')

    status = stat('/etc/services')

    isRightOwner = False
    owner = status.st_uid
    if owner == 0:
        isRightOwner = True
        pm.printNotice(report, '/etc/services 파일의 소유자가 root 입니다.')
    else:
        pm.printWarning(report, '/etc/services 파일의 소유자가 root가 아닙니다.')

    isRightPerm = False
    perm = int(oct(status.st_mode)[-3:])
    if perm <= 644:
        isRightPerm = True
        pm.printNotice(report, '/etc/services 파일의 권한이 644 이하입니다.')
    else:
        pm.printWarning(report, '/etc/services 파일의 권한이 644 이하가 아닙니다.')

    if isRightOwner and isRightPerm:
        pm.printSafe(report)
    else:
        pm.printNotsafe(report)
        pm.printSolution(report, '[U-12] 조치 방법')
        pm.printSolution(report, '\t/etc/services 파일의 소유자를 root로 권한을 644로 변경하세요.')
        pm.printSolution(report, '\t\t#chown root /etc/services')
        pm.printSolution(report, '\t\t#chmod 644 /etc/services\n')

    report.close()

U12()