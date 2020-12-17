#!/usr/bin/env python3
#3.22 Apache 파일 업로드 및 다운로드 제한
import sys
import re
import subprocess
C_END       = "\033[0m"
C_RED       = "\033[31m"
C_GREEN     = "\033[32m"
C_YELLOW    = "\033[33m"
def U_40(): 
    sys.stdout = open('./U-40.txt', mode='w', encoding='utf-8')
    print("[U-40] Apache 파일 업로드 및 다운로드 제한")
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
        # print(apacheHome)

        out = subprocess.getoutput('cat ' + apacheHome)

        #Directory 설정 개수 검색
        count = out.count('<Directory')

        index = 0
        for i in range(0, count) :
            #<Directory /> </Directory> 사이에 포함된 옵션
            index1 = out.find('<Directory', index)

            #주석 처리가 되어있다면 건너뜀
            if re.search('#<Directory', out[index:index1+10]) or re.search('#\s+<Directory', out[index:index1+10]):
                index = out.find('</Directory>', index1+13)
                continue

            index2 = out.find('</Directory>', index1+13)
            out1 = out[index1+10:index2]
            index = index1+10

            if 'LimitRequestBody' in out1 :

                # 숫자 추출
                num = re.findall("LimitRequestBody\s+\d+", out1)
                num[0] = re.findall("\d+", num[0])
                num = list(map(int, num[0]))
                #print(num[0])
                
                # 5M 이하면 안전
                if (num[0] > 5000000) :
                    report = True
                    break
                else :
                    continue
            
        if (report) :
            print(C_RED + "\t[검사 결과] 보안 조치가 필요합니다." + C_END)
        else :
            print(C_GREEN + "\t[검사 결과] 안전합니다." + C_END)

    else : 
        print(C_YELLOW + "\tApache 서비스를 사용하고 있지 않습니다." + C_END) 
        print(C_GREEN + "\t[검사 결과] 안전합니다." + C_END)
        report = False
###########################################################################################
    if (report) :
        print("[U-40] 조치 방법")
        print("\t1. vi 편집기를 이용하여 " + apacheHome + "파일을 엽니다.")
        print("\t\t#vi " + apacheHome)
        print("\t2. 설정된 모든 디렉터리의 LimitRequestBody 지시자에서 파일 사이즈 용량 제한을 설정합니다.")
        print("\t\t<Directory />")
        print("\t\t\tLimitRequestBody 5000000")
        print("\t\t</Directory>")
        print("\t(업로드 및 다운로드 파일이 5M를 넘지 않도록 설정하는 것을 권고합니다.)")
    sys.stdout.close()
    subprocess.call('cat ./U-40.txt', shell=True)
U_40()