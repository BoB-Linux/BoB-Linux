#!/usr/bin/env python3
#3.25 ftp 서비스 확인
import sys
import subprocess
C_END       = "\033[0m"
C_RED       = "\033[31m"
C_GREEN     = "\033[32m"
C_YELLOW    = "\033[33m"
def U_62(): 
    sys.stdout = open('./U-62.txt', mode='w', encoding='utf-8')
    print("[U-62] ftp 서비스 확인")
    out = subprocess.getoutput('ps -ef | grep ftp & ps -ef | egrep "vsftpd|proftp"')
    
    if ('ftp' in out) or ('vsftpd' in out) or ('proftp' in out) :
        print(C_RED + "\t[검사 결과] 보안 조치가 필요합니다." + C_END)
        report = True

    else : 
        print(C_GREEN + "\t[검사 결과] 안전합니다." + C_END)
        report = False
###########################################################################################
    if (report) :
        print("[U-62] 조치 방법")
        print("\t1. 서비스 활성화 여부를 확인합니다.")
        print("\t\t#ps -ef | egrep \"vsftpd|proftpd\"")
        print("\t2. vsftp 또는 ProFTP 서비스 데몬을 중지합니다.")
        print("\t\t#service vsftpd(proftp) stop")
        print("\t\t또는 /etc/rc.d/init.d/vsftpd(proftp) stop")
        print("\t\t또는 kill -i [PID]")
    sys.stdout.close()
    subprocess.call('cat ./U-62.txt', shell=True)
U_62()