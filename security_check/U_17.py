# [U-17] 'r' command 원격 접속 파일 검사
# 2020/11/19 : 노무승
#   1. 2>/dev/null 문구로 권한 에러를 뜨지 않게 함

import subprocess
import os.path
import getpass

C_END     = "\033[0m"
C_RED    = "\033[31m"
C_GREEN  = "\033[32m"
C_YELLOW = "\033[33m"

def U17():
    f_output = ""
    f_output = f_output + "[U-17] 'r' command 원격 접속 파일 검사\n"

    # File List
    list = ["/etc/hosts.equiv","$HOME/.rhosts"]
    list[1] = subprocess.getoutput("echo $HOME") + "/.rhosts"
    flag = False

    # Sec Check
    for i in list :
        if (os.path.isfile(i)):
            output = subprocess.getoutput("ls -l " + i + " 2>/dev/null")
            output = output.split()
            if (output[2] != "root") and (output[2] != getpass.getuser()):
                f_output = f_output + C_YELLOW + "\t[경고] " + i + " : 파일의 소유권이 root 또는 현재 계정이 아닙니다.\n" + C_END
                flag = True
            if (output[0] != "-rw-------"):
                f_output = f_output + C_YELLOW + "\t[경고] " + i + " : 파일의 권한이 600(-rw-------)이 아닙니다.\n" + C_END
                flag = True
            output = subprocess.getoutput("cat " + i + " 2>/dev/null")
            if (output.find("+") != -1) :
                f_output = f_output + C_YELLOW + "\t[경고] " + i + " : 파일 내부에 + (무분별 허용) 문자가 포함되어 있습니다.\n" + C_END
                flag = True
    
    if (flag) :
        f_output = f_output + C_RED + "\t[검사 결과] 보안 조치가 필요합니다.\n" + C_END  
        f_output = f_output + "\n"
        f_output = f_output + "[U-17] 조치 방법\n"
        f_output = f_output + "\t1. 'chmod 600 [파일명]'으로 설정 파일 권한을 변경하십시오.\n"
        f_output = f_output + "\t2. 'chown [유저명] [파일명]'으로 파일의 소유권을 root 또는 현재 계정으로 변경하십시오.\n"
        f_output = f_output + "\t3.  텍스트 편집기(vi, vim, nano 등)로 설정 파일 내부의 + (무분별 허용) 문자를 변경하십시오.\n"
    else :
        f_output = f_output + C_GREEN + "\t[검사 결과] 안전합니다.\n" + C_END
        f_output = f_output + "\n"

    print(f_output,end='')
    handle = open("./U-17.txt", mode='w', encoding='utf-8')
    handle.write(f_output)
    handle.close()

U17()
