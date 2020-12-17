# [U-55] host.lpd 파일 소유자 및 권한 설정 검사
# 2020/11/27 : 노무승

import subprocess
import os.path
C_END     = "\033[0m"
C_RED    = "\033[31m"
C_GREEN  = "\033[32m"
C_YELLOW = "\033[33m"
C_NUM = "U-55"

def U55() :
    f_output = ""
    f_output = f_output + "[" + C_NUM + "] host.lpd 파일 소유자 및 권한 설정 검사" + "\n"
    flag = False

    if (os.path.isfile("/etc/hosts.lpd")) :
        f_output = f_output + "\t[알림] /etc/hosts.lpd : 파일이 존재합니다.\n"
        temp = subprocess.getoutput("ls -l /etc/hosts.lpd")
        temp = temp.split()
        if (temp[0] != "-rw-------"):
            f_output = f_output + C_YELLOW + "\t[경고] /etc/hosts.lpd : 파일의 권한이 600(-rw-------)이 아닙니다.\n" + C_END 
            flag = True
        if (temp[2] != "root"):
            f_output = f_output + C_YELLOW + "\t[경고] /etc/hosts.lpd : 파일의 소유자가 root 계정이 아닙니다. \n" + C_END 
            flag = True

    if (flag) :
        f_output = f_output + C_RED + "\t[검사 결과] 보안 조치가 필요합니다.\n" + C_END  
        f_output = f_output + "\n"
        f_output = f_output + "[" + C_NUM + "] 조치 방법\n"
        f_output = f_output + "\t1. 로컬 프린트 서버를 사용하지 않는다면 해당 파일을 삭제하십시오.\n"
        f_output = f_output + "\t\t(rm -rf /etc/hosts.lpd)\n"
        f_output = f_output + "\t2. 해당 파일의 권한을 600(-rw-------)을 설정하십시오..\n"
        f_output = f_output + "\t\t(chmod 600 /etc/hosts.lpd)\n"
        f_output = f_output + "\t2. 해당 파일의 소유자를 root 계정으로 설정하십시오..\n"
        f_output = f_output + "\t\t(chown root /etc/hosts.lpd)\n"
    else :
        f_output = f_output + C_GREEN + "\t[검사 결과] 안전합니다.\n" + C_END
        f_output = f_output + "\n"

    print(f_output,end='')
    handle = open("./" + C_NUM + ".txt", mode='w', encoding='utf-8')
    handle.write(f_output)
    handle.close()

U55()
