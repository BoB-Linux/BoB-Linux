# [U-19] finger 서비스 설치 여부 검사
# 2020/11/19 : 노무승
#   1. 명령어 설치 여부를 dpkg 명령어와 finger 명령어로 확인
#   2. 데비안 계열 뿐만 아니라 레드햇 계열도 검사/방안 제시

import subprocess

C_END = "\033[0m"
C_RED= "\033[31m"
C_GREEN  = "\033[32m"
C_YELLOW = "\033[33m"

def U19():
    f_output = ""
    f_output = f_output + "[U-19] finger 서비스 설치 여부 검사\n"
    flag = False

    # if install dpkg (exam. Debian Base (Ubuntu/Mint))
    output = subprocess.getoutput("dpkg --get-selections | grep finger")
    output = output.split()
    if (output == ['finger','install']) :
        f_output = f_output + C_YELLOW + "\t[경고] finger 서비스가 설치되어 있습니다.\n" + C_END
        flag = True

    # if not install dpkg (exam. Redhat Base)
    else : 
        output = subprocess.getoutput("finger")
        output = output.split()
        if (output[0]=="Login") and (output[1]=="Name") and (output[2]=="Tty") :
            f_output = f_output + C_YELLOW + "\t[경고] finger 서비스가 설치되어 있습니다.n" + C_END
            flag = True
    
    if (flag) :
        f_output = f_output + C_RED + "\t[검사 결과] 보안 조치가 필요합니다.\n" + C_END  
        f_output = f_output + "\n"
        f_output = f_output + "[U-19] 조치 방법\n"
        f_output = f_output + "\t1. Debian 계열 (Ubuntu, Mint 등)의 경우,\n"
        f_output = f_output + "\t\t'apt remove finger -y'로 패키지를 삭제하십시오.\n"
        f_output = f_output + "\t2. Redhat 계열 (Redhat, CentOS 등)의 경우,\n"
        f_output = f_output + "\t\t'yum remove finger -y'로 패키지를 삭제하십시오.\n"
    else :
        f_output = f_output + "\t[알림] finger 서비스가 설치되어 있지 않습니다.\n"
        f_output = f_output + C_GREEN + "\t[검사 결과] 안전합니다.\n" + C_END
        f_output = f_output + "\n"

    print(f_output,end='')
    handle = open("./U-19.txt", mode='w', encoding='utf-8')
    handle.write(f_output)
    handle.close()

U19()
