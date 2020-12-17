#!/usr/bin/env python3
#4.1 최신 보안패치 및 벤더 권고사항 적용
import sys
import subprocess
C_END       = "\033[0m"
C_RED       = "\033[31m"
C_GREEN     = "\033[32m"
C_YELLOW    = "\033[33m"
def U_42(): 
    sys.stdout = open('./U-42.txt', mode='w', encoding='utf-8')
    print("[U-42] 최신 보안패치 및 벤더 권고사항 적용")
    report = True

    print(C_YELLOW + "\t[검사 결과] 주기적인 최신 보안패치 적용을 통해, 이미 알려진 취약점에 의한\n\t시스템 침해사고 발생 가능성을 줄일 수 있습니다." + C_END)

###########################################################################################
    if (report) :
        print("[U-42] 조치 방법")
        print("\tUbuntu 보안 업데이트는 다음과 같은 방법으로 수행할 수 있습니다.")
        print("\n\t<Ubuntu Desktop의 경우>")
        print("\t1. \"Alt+F2\"를 누른 후 \"update-manager\"를 입력합니다.")
        print("\t2. Update Manager가 열리면 보류중인 업데이트를 검토하거나,\n\t새로운 업데이트를 확인할 수 있습니다.")
        print("\t3. \"Install Updates\" 버튼을 눌러 업데이트를 수행합니다.")
        print("\n\t<Ubuntu Server의 경우>")
        print("\t1. 콘솔 창에 다음 명령을 입력해 새로운 업데이트를 확인하고 적용합니다.")
        print("\t\t#sudo apt-get update")
        print("\t\t#sudo apt-get dist-upgrade")
        print("\t2. 업데이트를 자동으로 적용하고 싶다면 unattended-upgrades 패키지가\n\t설치되어있는지 확인한 후 다음 명령을 실행합니다.")
        print("\t\t#sudo dpkg-reconfigure unattended-upgrades")
        print("\t패키지가 설치되어있지 않다면 다음 명령으로 설치할 수 있습니다.")
        print("\t\t#sudo apt-get install unattended-upgrades")
        #http://www.ubuntu.com/usn
    sys.stdout.close()
    subprocess.call('cat ./U-42.txt', shell=True)
U_42()