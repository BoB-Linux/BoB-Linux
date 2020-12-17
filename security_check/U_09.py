# U-09 상
# 2.5 /etc/hosts 파일 소유자 및 권한 설정
# kisa에는 600이지만 우분투는 644으로 설정되어 있다.
from os import stat

import printModule as pm

def U09():
    report = pm.openReport('U-09.txt')
    pm.printTitle(report, '[U-09] /etc/hosts 파일 소유자 및 권한 설정')

    status = stat('/etc/hosts')

    isRightOwner = False
    owner = status.st_uid
    if owner == 0:
        isRightOwner = True
        pm.printNotice(report, '/etc/hosts 파일의 소유자가 root 입니다.')
    else:
        pm.printWarning(report, '/etc/hosts 파일의 소유자가 root가 아닙니다.')

    isRightPerm = False
    perm = int(oct(status.st_mode)[-3:])
    if perm == 600:
        isRightPerm = True
        pm.printNotice(report, '/etc/hosts 파일의 권한이 600 입니다.')
    else:
        pm.printWarning(report, '/etc/hosts 파일의 권한이 600이 아닙니다.')

    if isRightOwner and isRightPerm:
        pm.printSafe(report)
    else:
        pm.printNotsafe(report)
        pm.printSolution(report, '[U-09] 조치 방법')
        pm.printSolution(report, '\t/etc/hosts 파일의 소유자를 root로 권한을 600으로 변경하세요.')
        pm.printSolution(report, '\t\t#chown root /etc/hosts')
        pm.printSolution(report, '\t\t#chmod 600 /etc/hosts\n')

    report.close()

U09()