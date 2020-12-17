#!/usr/bin/env python3
#3.28 ftpusers 파일 설정
import sys
import re
import subprocess
C_END       = "\033[0m"
C_RED       = "\033[31m"
C_GREEN     = "\033[32m"
C_YELLOW    = "\033[33m"
def U_65(): 
    sys.stdout = open('./U-65.txt', mode='w', encoding='utf-8')
    report = False
    print("[U-65] ftpusers 파일 설정")
    out = subprocess.getoutput('cat /etc/ftpusers 2>/dev/null')
    out + subprocess.getoutput('cat /etc/ftpd/ftpusers 2>/dev/null')
    #print(out)
    
    index = -1
    while True:
        index = out.find('root', index+1)
        #print(index)
        #print("--------------------------------------------")
        #print(out[index-2:index+5])

        if 'root' in out :
            if ('#root' in out) or re.search('#\s+root', out):
                report = False
            else :
                print(C_RED + "\t[검사 결과] 보안 조치가 필요합니다." + C_END)
                report = True
                break
        out = out[index:-1]
        if index == -1:
            break

    if not (report) : 
        print(C_GREEN + "\t[검사 결과] 안전합니다." + C_END)

###########################################################################################
    if (report) :
        print("[U-65] 조치 방법")
        print("\t1. vi 편집기를 이용하여 ftpuser파일을 엽니다.")
        print("\t\t#vi etc/ftpusers 또는 /etc/ftpd/ftpdusers")
        print("\t2. ftpusers 파일에 root 계정 추가 또는, 주석 제거")
        print("\t\t(수정 전) #root 또는 root 계정 미등록")
        print("\t\t(수정 후) root")
    sys.stdout.close()
    subprocess.call('cat ./U-65.txt', shell=True)

U_65()