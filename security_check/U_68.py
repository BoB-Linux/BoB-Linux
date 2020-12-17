#!/usr/bin/env python3
#3.31 SNMP 서비스 Community String의 복잡성 설정
import sys
import re
import subprocess
C_END       = "\033[0m"
C_RED       = "\033[31m"
C_GREEN     = "\033[32m"
C_YELLOW    = "\033[33m"
def U_68(): 
    sys.stdout = open('./U-68.txt', mode='w', encoding='utf-8')
    print("[U-68] SNMP 서비스 Community String의 복잡성 설정")
    report = False
    #sudo 사용하지 않고 파일 조회
    out = subprocess.getoutput('sudo cat /etc/snmp/snmpd.conf')

    #rocommunity public
    index = -1
    newindex=0
    while True:
        index = out.find("rocommunity", index + 1)
        if index == -1:
            break
        #print(out[newindex:index+20])
        out2=out[newindex:index+20]
        newindex = index

        if re.search('#rocommunity', out2) or re.search('#\s+rocommunity', out2):
            index = out.find("rocommunity", index + 1)
            if index == -1:
                break
            #print(out[newindex:index+20])
            out2=out[newindex:index+20]
            newindex = index
            continue

        if re.search('rocommunity\s+public', out2) :
            report = True
            break

        if re.search('rocommunity6\s+public', out2) :
            report = True
            break

    if (report) :
        print(C_RED + "\t[검사 결과] 보안 조치가 필요합니다." + C_END)
    else :
        print(C_GREEN + "\t[검사 결과] 안전합니다." + C_END)

###########################################################################################
    if (report) :
        print("[U-68] 조치 방법")
        print("\t1. vi 편집기를 이용하여 SNMP 설정파일을 엽니다.")
        print("\t\t#vi /etc/snmp/snmpd.conf")
        print("\t2. Community String 값 설정을 추측하기 어려운 값으로 설정합니다.")
        print("\t\t(수정 전) rocommunity public  default    -V systemonly")
        print("\t\t(수정 후) rocommunity <변경 값>  default    -V systemonly")
        print("\t3. 서비스를 재구동합니다.")
        print("\t\t#service snmpd restert")
        # rocommunity public  default    -V systemonly
        # rocommunity6 public  default   -V systemonly
    sys.stdout.close()
    subprocess.call('cat ./U-68.txt', shell=True)
U_68()