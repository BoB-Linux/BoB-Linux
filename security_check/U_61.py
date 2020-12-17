#!/usr/bin/env python3
#3.24 ssh 원격접속 허용
import sys
import subprocess
C_END       = "\033[0m"
C_RED       = "\033[31m"
C_GREEN     = "\033[32m"
C_YELLOW    = "\033[33m"
def U_61(): 
    sys.stdout = open('./U-61.txt', mode='w', encoding='utf-8')
    print("[U-61] ssh 원격접속 허용")
    out = subprocess.getoutput('service ssh status')
    
    if ('not be found' in out) or ('not found' in out) or ('unrecognized' in out) :
        print(C_RED + "\t[검사 결과] 보안 조치가 필요합니다." + C_END)
        report = True

    else : 
        print(C_GREEN + "\t[검사 결과] 안전합니다." + C_END)
        report = False
###########################################################################################
    if (report) :
        print("[U-61] 조치 방법")
        print("\t원격 접속 시 스니핑 등 아이디/패스워드의 누출 방지를 위해\n\t SSH 프로토콜 사용을 권장합니다.")
        print("\t1. SSH 서비스 활성화 명령어를 실행합니다.")
        print("\t\t#service sshd start 또는 service ssh start")
        print("\t2. SSH 설치가 필요한 경우 설치합니다.")
        print("\t\t#sudo apt-get install openssh-server")
        print("\t\t#service ssh restart")
        print("\t3. 설치가 잘 되었는지 확인합니다.")
        print("\t\t#service ssh status")
    sys.stdout.close()
    subprocess.call('cat ./U-61.txt', shell=True)
U_61()