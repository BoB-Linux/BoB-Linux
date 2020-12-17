#!/usr/bin/env python3
#3.14 일반 사용자의 Sandmail 실행 방지

import sys
import subprocess
C_END       = "\033[0m"
C_RED       = "\033[31m"
C_GREEN     = "\033[32m"
C_YELLOW    = "\033[33m"

def U_32(): 
    sys.stdout = open('./U-32.txt', mode='w', encoding='utf-8')
    print("[U-32] 일반 사용자의 Sandmail 실행 방지")
    out = subprocess.getoutput('ps -ef | grep sendmail | grep -v "grep"')

    if 'sendmail' in out :
        out = subprocess.getoutput('grep -v "^ *#" /etc/mail/sendmail.cf | grep PrivacyOptions');

        if 'restrictqrun' in out :
            print(C_GREEN + "\t[검사 결과] 안전합니다.\n" + C_END)
            report = False
        else :
            print("")
            print(C_RED + "\t[검사 결과] 보안 조치가 필요합니다.\n" + C_END)
            report = True

    #sendmail이 없으면 점검을 수행하지 않음
    else : 
        print(C_YELLOW + "\tSMTP 서비스를 사용하고 있지 않습니다." + C_END)
        print(C_GREEN + "\t[검사 결과] 안전합니다.\n" + C_END)
        report = False

###########################################################################################
    if (report) :
        print("[U-32] 조치 방법")
        print("\t1. vi 편집기를 이용하여 sendmail.cf 설정 파일을 엽니다.")
        print("\t2. 'O PrivacyOptions=' 설정 부분에 'restrictqrun' 옵션을 추가합니다.")
        print("\t\t (수정 전) O PrivacyOptions=authwarnings, novrfy, noexpn")
        print("\t\t (수정 후) O PrivacyOptions=authwarnings, novrfy, noexpn, restrictqrun")
        print("\t3. 설정 후 Sendmail 서비스를 재시작합니다.")
    sys.stdout.close()
    subprocess.call('cat ./U-32.txt', shell=True)
U_32()