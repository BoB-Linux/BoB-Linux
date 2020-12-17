# U-05 상
# 2.1 root 홈, 패스 디렉터리 권한 및 패스 설정
import subprocess

import printModule as pm

def U05():
    report = pm.openReport('U-05.txt')
    pm.printTitle(report, '[U-05] root 홈, 패스 디렉터리 권한 및 패스 설정')
    pm.printNotice(report, 'U-05의 점검은 현재 계정의 PATH만을 점검합니다.')

    envList = subprocess.check_output('echo $PATH', shell=True)
    envList = str(envList)
    isNotDot = False
    if '.' in envList:
        pm.printNotsafe(report, 'PATH에 \".\"이 포함되어 있습니다.')
    else:
        isNotDot = True
    isNotColon = False
    if '::' in envList:
        pm.printNotsafe(report, 'PATH에 \":\"이 포함되어 있습니다.')
    else:
        isNotColon = True

    if isNotDot and isNotColon:
        pm.printSafe(report)
    else:
        pm.printNotsafe(report)
        pm.printSolution(report, '[U-05] 조치 방법')
        pm.printSolution(report, '\t환경 설정 파일을 확인 및 수정하세요.')
        pm.printSolution(report, '\t\t점검이 필요한 파일들')
        pm.printSolution(report, '\t\t/etc/environment')
        pm.printSolution(report, '\t\t/etc/profile')
        pm.printSolution(report, '\t\t/etc/profile.d/*.sh')
        pm.printSolution(report, '\t\t~/.profile')
        pm.printSolution(report, '\t\t~/.bashrc')
        #pm.printSolution(report, '\t(수정 전) PATH=\".:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games\"\n')
        #pm.printSolution(report, '\t(수정 후) PATH=\"/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games\"\n')
        pm.printSolution(report, '\t\".\" 혹은 \":\"을 제거\n')

    report.close()

U05()
