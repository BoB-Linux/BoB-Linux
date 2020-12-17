#!/usr/bin/env python3
#5.1 로그의 정기적 검토 및 보고

import getpass
import subprocess
import sys
import os
C_END       = "\033[0m"
C_RED       = "\033[31m"
C_GREEN     = "\033[32m"
C_YELLOW    = "\033[33m"
def U_43(): 
    sys.stdout = open('./U-43.txt', mode='w', encoding='utf-8')
    print("[U-43] 로그의 정기적 검토 및 보고")
    #out = subprocess.getoutput('')
    report = True

    user = getpass.getuser()
    cpath = "/home/" + user + "/LOG"
    if not os.path.exists(cpath):
        os.makedirs(cpath)

    subprocess.call('last > ~/LOG/wtmp_log.txt', shell=True)
    subprocess.call('sudo lastb > ~/LOG/btmp_log.txt', shell=True)
    subprocess.call('w > ~/LOG/utmp_log.txt', shell=True)

    if os.path.exists('/var/log/sulog'):
        subprocess.call('cat /var/log/sulog > ~/LOG/sulog.txt', shell=True)

    if os.path.exists('/var/log/xferlog'):
        subprocess.call('cat /var/log/xferlog > ~/LOG/xferlog.txt', shell=True)

    print(C_YELLOW + "\t[검사 결과] \"/home/" + user + "/LOG\" 폴더 위치에 log 파일이 저장되었습니다." + C_END)
    print(C_YELLOW + "\t파일을 확인하여 조치 방법에 따라 정기적인 로그 점검 수행을 권장합니다." + C_END)

###########################################################################################
    if (report) :
        print("[U-43] 조치 방법")
        # wtmp : last 명령어 사용 : 사용자의 로그인/로그아웃 기록
        # btmp : lastb 명령어 사용 : 로그인 실패 기록
        # utmp : w : 현재 로그인 사용자 정보
        # sulog
        # xferlog
        print("\t정기적인 로그 점검을 통해 안정적인 시스템 상태를 유지하고 \n\t외부 공격 여부를 파악할 수 있습니다.")
        print("\n\t정기적인 로그 분석을 위해 아래와 같은 절차를 수행합니다.")
        print("\t1. 정기적인 로그 검토 및 분석 주기를 수립합니다.")
        print("\t2. 로그 분석에 대한 결과 보고서를 작성합니다.")
        print("\t3. 로그 분석 결과보고서의 보고 체계를 수립합니다.")
        print("\n\t다음의 로그 파일을 점검합니다.")
        print("\t1. wtmp : ")
        print("\t\t사용자의 로그인/로그아웃 기록을 점검합니다.")
        print("\t\t\"/var/log\" 위치에 저장되며 \"last\" 명령어를 통해 확인할 수 있습니다.")
        print("\t2. btmp : ")
        print("\t\t로그인 실패 기록을 점검합니다.")
        print("\t\t\"/var/log\" 위치에 저장되며 \"lastb\" 명령어를 통해 확인할 수 있습니다.")
        print("\t3. utmp : ")
        print("\t\t현재 로그인된 사용자 정보를 점검합니다.")
        print("\t\t\"w\" 명령어를 통해 확인할 수 있습니다.")
        print("\t4. sulog")
        print("\t\t허용된 계정 외의 계정이 su 명령어를 통해 \n\t\t권한상승을 시도하였는지 점검합니다.")
        print("\t5. xferlog")
        print("\t\t비인가자의 ftp 접근 여부를 점검합니다.")
    sys.stdout.close()
    subprocess.call('cat ./U-43.txt', shell=True)
U_43()