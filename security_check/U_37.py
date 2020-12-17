#!/usr/bin/env python3
#3.19 Apache 상위 디렉토리 접근 금지
import sys
import subprocess
C_END       = "\033[0m"
C_RED       = "\033[31m"
C_GREEN     = "\033[32m"
C_YELLOW    = "\033[33m"
def U_37(): 
    sys.stdout = open('./U-37.txt', mode='w', encoding='utf-8')
    print("[U-37] Apache 상위 디렉토리 접근 금지")
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

        if 'AllowOverride None' in out :
            print(C_RED + "\t[검사 결과] 보안 조치가 필요합니다." + C_END)
            report = True

        else :
            print(C_GREEN + "\t[검사 결과] 안전합니다." + C_END)
            report = False
            
    else :
        print(C_YELLOW + "\tApache 서비스를 사용하고 있지 않습니다." + C_END) 
        print(C_GREEN + "\t[검사 결과] 안전합니다." + C_END)
        report = False
###########################################################################################
    if (report) :
        print("[U-37] 조치 방법")
        print("\t1. vi 편집기를 이용하여" + apacheHome + " 파일을 엽니다.")
        print("\t\t#vi " + apacheHome)
        print("\t2. 설정된 모든 디렉토리의 AllowOverride 지시자에서 AuthConfig 옵션을 설정합니다.")
        print("\t\t(수정 전) AllowOverride 지시자에 None 옵션이 설정되어 있습니다.")
        print("\t\t<Directory \"/usr/local/apache2/htdocs\" ")
        print("\t\t\tAllowOverride None")
        print("\t\t\tAllow from all")
        print("\t\t</Directory>\n")
        print("\t\t(수정 후) AllowOverride 지시자에 AuthConfig 옵션을 설정합니다.")
        print("\t\t<Directory \"/usr/local/apache2/htdocs\" ")
        print("\t\t\tAllowOverride AuthConfig")
        print("\t\t\tAllow from all")
        print("\t\t</Directory>\n")
        print("\t3. 사용자 인증을 설정할 디렉토리에 .htaccess 파일을 생성합니다.")
        print("\t\tAuthName \"디렉토리 사용자 인증\"")
        print("\t\tAuthType Basic")
        print("\t\tAuthUserFile /usr/local/apache/test/.auth")
        print("\t\tRequire vaild-user")
    sys.stdout.close()
    subprocess.call('cat ./U-37.txt', shell=True)
U_37()