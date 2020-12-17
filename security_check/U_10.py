# U-10 상
# 2.6 /etc/(x)inetd.conf 파일 소유자 및 권한 설정
# 우분투는 inetd가 기본으로 깔려 있지 않다.
# systemd 가 한다고 하는데???
from os import path
from os import stat

import printModule as pm

def U10():
    report = pm.openReport('U-10.txt')
    pm.printTitle(report, '[U-10] /etc/(x)inetd.conf 파일 소유자 및 권한 설정')

    filename = ''
    
    isInetd = path.isfile('/etc/inetd.conf')
    if not isInetd:
        pm.printNotice(report, '/etc/inetd.conf 파일이 없습니다.\n')
    else:
        filename = '/etc/inetd.conf'

    isXinetd = path.isfile('/etc/xinetd.conf')
    if not isXinetd:
        pm.printNotice(report, '/etc/xinetd.conf 파일이 없습니다.\n')
    else:
        filename = '/etc/xinetd.conf'

    if (not isInetd) or (not isXinetd):
        report.close()
        return

    status = stat(filename)

    isRightOwner = False
    owner = status.st_uid
    if owner == 0:
        isRightOwner = True
        pm.printNotice(report, filename + ' 파일의 소유자가 root 입니다.')
    else:
        pm.printWarning(report, filename + ' 파일의 소유자가 root가 아닙니다.')

    isRightPerm = False
    perm = int(oct(status.st_mode)[-3:])
    if perm == 600:
        isRightPerm = True
        pm.printNotice(report, filename + ' 파일의 권한이 600 입니다.')
    else:
        pm.printWarning(report, filename + ' 파일의 권한이 600이 아닙니다.')

    if isRightOwner and isRightPerm:
        pm.printSafe(report)
    else:
        pm.printNotsafe(report)
        pm.printSolution(report, '[U-10] 조치 방법')
        pm.printSolution(report, '\t' + filename + ' 파일의 소유자를 root로 권한을 600으로 변경하세요.')
        pm.printSolution(report, '\t\t#chown root ' + filename)
        pm.printSolution(report, '\t\t#chmod 600 ' + filename)

    # xinetd.d 의 하위도 검사하도록 수정 필요
    if isXinetd:
        pm.printSolution(report, '\t/etc/xinetd.d 디렉터리 하위의 취약한 파일도 동일한 방법으로 조치하세요.')

    report.close()

U10()