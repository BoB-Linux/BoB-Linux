#!/usr/bin/env python3
#3.29 at 파일 소유자 및 권한 설정
import sys
import subprocess
import os
from os import stat
from pwd import getpwuid
C_END       = "\033[0m"
C_RED       = "\033[31m"
C_GREEN     = "\033[32m"
C_YELLOW    = "\033[33m"
def U_66(): 
    sys.stdout = open('./U-66.txt', mode='w', encoding='utf-8')
    print("[U-66] at 파일 소유자 및 권한 설정")
    report1 = False
    report2 = False
    def check_mod(out) :
        st = os.stat(out)
        perm = oct(st.st_mode)

        perm = int(perm[5:8])
        if perm > 640 :
            re1 = True
        else :
            re1 = False

        owner = getpwuid(stat(out).st_uid).pw_name
        if owner == "root" :
            re2 = True
        else :
            re2 = False

        return re1 or re2

    #ls -l /etc/at.allow
    #ls -l /etc/at.deny
    out = '/etc/at.allow'
    if os.path.exists(out):
        report1 = check_mod(out)

    out = '/etc/at.deny'
    if os.path.exists(out):
        report2 = check_mod(out)

    report = (report1) or (report2)

    if (report) :
        print(C_RED + "\t[검사 결과] 보안 조치가 필요합니다." + C_END)
    else :
        print(C_GREEN + "\t[검사 결과] 안전합니다." + C_END)
###########################################################################################
    if (report) :
        print("[U-66] 조치 방법")
        print("\t\"/etc/at.allow \"와 \"/etc/at.deny\" 파일의 소유자 및 권한을 변경합니다.")
        print("\t\t#chown root /etc/at.allow")
        print("\t\t#chmod 640 /etc/at.allow")
        print("\t\t#chown root /etc/at.deny")
        print("\t\t#chmod 640 /etc/at.deny")
    sys.stdout.close()
    subprocess.call('cat ./U-66.txt', shell=True)
U_66()