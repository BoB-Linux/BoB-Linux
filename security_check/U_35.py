#!/usr/bin/env python3
#3.17 Apache 디렉토리 리스팅 제거
import sys
import re
import subprocess
C_END       = "\033[0m"
C_RED       = "\033[31m"
C_GREEN     = "\033[32m"
C_YELLOW    = "\033[33m"
def U_35(): 
    sys.stdout = open('./U-35.txt', mode='w', encoding='utf-8')
    print("[U-35] Apache 디렉토리 리스팅 제거")
    report = False
    #Apache의 홈 디렉토리를 확인
    out = subprocess.getoutput('apache2 -V | egrep "(HTTPD\_ROOT|SERVER\_CONFIG\_FILE)"')

    if 'HTTPD_ROOT=' in out :
        #사용자의 Apache 홈 디렉토리를 추출
        index1 = out.find('HTTPD_ROOT="') 
        index2 = out.find('"', index1+13)
        apacheHome = out[index1+12:index2]

        index1 = out.find('SERVER_CONFIG_FILE="')
        index2 = out.find('"', index1+21)
        apacheHome = apacheHome + "/" + out[index1+20:index2]
        #print(apacheHome)

        out = subprocess.getoutput('cat ' + apacheHome)

        #Directory 설정 개수 검색
        count = out.count('<Directory')

        index = 0
        for i in range(0, count) :

            #<Directory /> </Directory> 사이에 포함된 옵션
            index1 = out.find('<Directory', index)

            #주석 처리가 되어있다면 건너뜀
            #if out[index1-1] == '#':
            if re.search('#<Directory', out[index:index1+10]) or re.search('#\s+<Directory', out[index:index1+10]):
                index = out.find('</Directory>', index1+13)
                continue

            index2 = out.find('</Directory>', index1+13)
            out1 = out[index1+10:index2]
            index = index1+10

            if 'Indexes' in out1 :
                report = True
                break
            
        if (report) :
            print(C_RED + "\t[검사 결과] 보안 조치가 필요합니다.\n" + C_END)
        else :
            print(C_GREEN + "\t[검사 결과] 안전합니다.\n" + C_END)

    #Apache가 없음
    else :
        print(C_YELLOW + "\tApache 서비스를 사용하고 있지 않습니다." + C_END)
        print(C_GREEN + "\t[검사 결과] 안전합니다." + C_END)
        return False
###########################################################################################
    if (report) :
        print("[U-35] 조치 방법")
        print("\t1. vi 편집기를 이용하여 '" + apacheHome + "' 파일 열기")
        print("\t\t vi "+apacheHome)
        print("\t2. 설정된 모든 디렉터리의 Options 지시자에서 Indexes 옵션 제거")
        print("\t\t (수정 전) Option 지시자에 Indexes 옵션이 설정되어 있음")
        print("\n\t\t <Directory />")
        print("\t\t\t Options Indexes FollowSymLinks")
        print("\t\t\t AllowOverride None")
        print("\t\t\t Order allow, deny")
        print("\t\t\t Allow from all")
        print("\t\t </Direcotry>")
        print("\n\t\t (수정 후) Option 지시자에 None 변경 후 저장")
        print("\t\t <Directory />")
        print("\t\t\t Options None")
        print("\t\t\t AllowOverride None")
        print("\t\t\t Order allow, deny")
        print("\t\t\t Allow from all")
        print("\t\t </Direcotry>")
    sys.stdout.close()
    subprocess.call('cat ./U-35.txt', shell=True)
U_35()