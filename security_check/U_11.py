# U-11 상
# 2.7 /etc/syslog.conf 파일 소유자 및 권한 설정
# 우분투는 rsyslog
from os import path
from os import stat

import printModule as pm

def U11():
    report = pm.openReport('U-11.txt')
    pm.printTitle(report, '[U-11] /etc/(r)syslog.conf 파일 소유자 및 권한 설정')

    filename = ''
    
    isSyslog = path.isfile('/etc/syslog.conf')
    if not isSyslog:
        pm.printNotice(report, '/etc/syslog.conf 파일이 없습니다.')
    else:
        filename = '/etc/syslog.conf'

    isRsyslog = path.isfile('/etc/rsyslog.conf')
    if not isRsyslog:
        pm.printNotice(report, '/etc/rsyslog.conf 파일이 없습니다.')
    else:
        filename = '/etc/rsyslog.conf'

    if (not isSyslog) or (not isRsyslog):
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
    if perm == 644:
        isRightPerm = True
        pm.printNotice(report, filename + ' 파일의 권한이 644 입니다.')
    else:
        pm.printWarning(report, filename + ' 파일의 권한이 644가 아닙니다.')

    if isRightOwner and isRightPerm:
        pm.printSafe(report)
    else:
        pm.printNotsafe(report)
        pm.printSolution(report, '[U-11] 조치 방법')
        pm.printSolution(report, '\t' + filename + ' 파일의 소유자를 root로 권한을 644로 변경하세요.')
        pm.printSolution(report, '\t\t#chown root ' + filename)
        pm.printSolution(report, '\t\t#chmod 644 ' + filename + '\n')

    report.close()

U11()