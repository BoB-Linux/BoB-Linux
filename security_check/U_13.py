# U-13 상
# 2.9 SUID, SGID, sticky bit 설정 및 권한 설정
from os import path
from os import stat

import printModule as pm

def U13():
    report = pm.openReport('U-13.txt')
    pm.printTitle(report, '[U-13] SUID, SGID, sticky bit 설정 및 권한 설정')

    SUID = 0o4000
    SGID = 0o2000

    isSafe = True

    # 불필요한 SUID/SGID 목록
    files = ['/sbin/dump',        \
             '/sbin/restore',     \
             '/sbin/unix_chkpwd', \
             '/usr/bin/at',       \
             '/usr/bin/lpq',      \
             '/usr/bin/lpq-lpd',  \
             '/usr/bin/lprm',     \
             '/usr/bin/lprm-lpd', \
             '/usr/bin/newgrp',   \
             '/usr/sbin/lpc',     \
             '/usr/sbin/lpc-lpd', \
             '/usr/sbin/traceroute']

    for file in files:
        if not path.isfile(file):
            continue

        status = stat(file)
        perm = int(oct(status.st_mode)[-4:])

        if perm & SUID:
            pm.printWarning(report, file + ' 파일에 SUID가 설정되어 있습니다.')
            isSafe = False
        if perm & SGID:
            pm.printWarning(report, file + ' 파일에 SGID가 설정되어 있습니다.')
            isSafe = False

    if isSafe:
        pm.printSafe(report)
    else:
        pm.printNotsafe(report)
        pm.printSolution(report, '[U-13] 조치 방법')
        pm.printSolution(report, '\t주요 파일에 불필요한 SUID/SGID가 설정된 경우 SUID/SGID를 제거하세요.')
        pm.printSolution(report, '\t제거 시 OS 및 응용 프로그램 등 서비스가 정상작동 하는지 확인이 필요합니다.')
        pm.printSolution(report, '\t\t#chmod -s <file_name>\n')

    report.close()

U13()
