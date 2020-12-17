#!/usr/bin/env python3
#3.23 Apache 웹 서비스 영역의 분리
import sys
import subprocess
C_END       = "\033[0m"
C_RED       = "\033[31m"
C_GREEN     = "\033[32m"
C_YELLOW    = "\033[33m"
def U_41(): 
    sys.stdout = open('./U-41.txt', mode='w', encoding='utf-8')
    print("[U-41] Apache 웹 서비스 영역의 분리")
    #grep -i "DocumentRoot" /etc/apache2/sites-available/000-default.conf
    #grep -i "DocumentRoot" /etc/apache2/sites-available/default-ssl.conf
    out = subprocess.getoutput('grep -i "DocumentRoot" /etc/apache2/sites-available/000-default.conf ; grep -i "DocumentRoot" /etc/apache2/sites-available/default-ssl.conf')

    if 'DocumentRoot' in out :
        
        if ('/usr/local/apache/htdocs' in out) or ('/usr/local/apache2/htdocs' in out) or ('/var/www/html' in out) :
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
        out = subprocess.getoutput('apache2 -V | egrep "(HTTPD\_ROOT|SERVER\_CONFIG\_FILE)"')
        index1 = out.find('HTTPD_ROOT="') 
        index2 = out.find('"', index1+13)
        apacheHome = out[index1+12:index2]

        index1 = out.find('SERVER_CONFIG_FILE="')
        index2 = out.find('"', index1+21)
        apacheHome = apacheHome + "/" + out[index1+20:index2]

        print("[U-41] 조치 방법")
        print("\t1. vi 편집기를 이용하여 " + apacheHome + "파일을 엽니다.")
        print("\t\t#vi " + apacheHome)
        print("\t2. DocumentRoot 설정 부분을 \"/usr/local/apache/htdocs\", \n\t\"/usr/local/apache2/htdocs\", \n\t\"/var/www/html\" 셋 중 하나가 아닌 별도의 디렉토리로 변경합니다.")
        print("\t\tDocumentRoot \"디렉토리\"")
    sys.stdout.close()
    subprocess.call('cat ./U-41.txt', shell=True)
U_41()