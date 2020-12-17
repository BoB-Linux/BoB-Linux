#!/usr/bin/env python3
#3.26 ftp 계정 shell 제한
import sys
import subprocess
C_END       = "\033[0m"
C_RED       = "\033[31m"
C_GREEN     = "\033[32m"
C_YELLOW    = "\033[33m"
def U_63(): 
    sys.stdout = open('./U-63.txt', mode='w', encoding='utf-8')
    print("[U-63] ftp 계정 shell 제한")
    out = subprocess.getoutput('cat /etc/passwd | grep "ftp"')

    if 'ftp:/bin/false' in out :
            
        print(C_GREEN + "\t[검사 결과] 안전합니다." + C_END)
        report = False

    else : 
        print(C_RED + "\t[검사 결과] 보안 조치가 필요합니다." + C_END)
        report = True
        
###########################################################################################
    if (report) :
        print("[U-63] 조치 방법")
        print("\t1. vi 편집기를 이용하여 \"/etc/passwd\"파일을 엽니다.")
        print("\t2. ftp 계정의 로그인 쉘 부분인 계정 맨 마지막에 /bin/false를 부여하여 변경합니다.")
        print("\t\t(수정 전) ftp:x:500:100:Anonymous FTP USER:/var/ftp:/sbin/bash")
        print("\t\t(수정 후) ftp:x:500:100:Anonymous FTP USER:/var/ftp:/bin/flase")
        print("\t3. 위의 방법이 적용되지 않을 경우 usermod 명령을 사용하여 쉘을 변경할 수 있습니다.")
        print("\t\t#usermod -s /bin/flase [계정ID]")
    sys.stdout.close()
    subprocess.call('cat ./U-63.txt', shell=True)
U_63()