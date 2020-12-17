#!/usr/bin/env python3
#3.16 DNS Zone Transfer 설정
import sys
import subprocess
C_END       = "\033[0m"
C_RED       = "\033[31m"
C_GREEN     = "\033[32m"
C_YELLOW    = "\033[33m"
def U_34(): 
    sys.stdout = open('./U-34.txt', mode='w', encoding='utf-8')
    print("[U-34] DNS Zone Transfer 설정")
    report = False
    out = subprocess.getoutput('ps -ef | grep named | grep -v "grep"')

    if 'named' in out :
        out = subprocess.getoutput('cat /etc/bind/named.conf');
        if 'allow-transfer"' in out :
            report = True

        if 'xfrents' in out :
            report = True

        if (report) :
            print(C_RED + "\t[검사 결과] 보안 조치가 필요합니다." + C_END)
        else :
            print(C_GREEN + "\t[검사 결과] 안전합니다." + C_END)
            

    #DNS서비스를 사용하지 않으면 점검을 수행하지 않음
    else : 
        print(C_YELLOW + "\tDNS 서비스를 사용하고 있지 않습니다." + C_END)
        print(C_GREEN + "\t[검사 결과] 안전합니다." + C_END)
        report = False
###########################################################################################
    if (report) :
        print("[U-34] 조치 방법")
        print("\tDNS 서비스 사용 시 제시된 파일의 DNS 설정을 아래의 보안설정방법에 따라 수정합니다.")
        print("\tBIND8 DNS 설정(named.conf) 수정 예")
        print("\t\tOptions {")
        print("\t\t\tallow-transfer (zone 파일 전송을 허용하고자 하는 IP;);")
        print("\t\t}; \n")
        print("\tBIND4.9 DNS 설정(named.conf) 수정 예")
        print("\t\tOptions")
        print("\t\t\txfrnets 허용하고자 하는 IP\n")
        print("\tDNS서비스를 사용하지 않는 경우")
        print("\t\tDNS 서비스를 사용하지 않는 경우에는 서비스 데몬을 중지합니다.")
        print("\t\t")
    sys.stdout.close()
    subprocess.call('cat ./U-34.txt', shell=True)
U_34()