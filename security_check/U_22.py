# [U-22] Cron 관련 설정 파일 점검
# 2020/11/22 : 노무승
#   /etc/cron.allow, corn.deny 파일의 권한, 소유자, 존재 유무 등으로 취약을 판단함.

import os.path
import subprocess
C_END     = "\033[0m"
C_RED    = "\033[31m"
C_GREEN  = "\033[32m"
C_YELLOW = "\033[33m"

def U22() :
    f_output = ""
    f_output = f_output + "[U-22] Cron 관련 설정 파일 점검" + "\n"
    flag = False
    list = ["/etc/cron.allow","/etc/cron.deny"]

    for i in list:
        if(os.path.isfile(i)):
            temp = subprocess.getoutput("ls -l " + i)
            temp = temp.split()
            if (temp[0] != "-rw-r-----") and ((temp[0] != "-rw-------")):
                f_output = f_output + C_YELLOW + "\t[경고] " + i + " : 파일의 권한 값(" + temp[0] + ")이 취약합니다.\n" + C_END
                flag = True
            if (temp[2] != "root"):
                f_output = f_output + C_YELLOW + "\t[경고] " + i + " : 파일의 소유자가 root 계정이 아닙니다.\n" + C_END
                flag = True
        
    if (os.path.isfile(list[1]) == True) and (os.path.isfile(list[0]) == False):
        f_output = f_output + C_YELLOW + "\t[경고] /etc/cron.deny : 해당 파일만 존재하면 취약합니다.\n" + C_END
        flag = True

    if (flag) :
        f_output = f_output + C_RED + "\t[검사 결과] 보안 조치가 필요합니다.\n" + C_END  
        f_output = f_output + "\n"
        f_output = f_output + "[U-22] 조치 방법\n"
        f_output = f_output + "\t1. 설정 파일의 소유자를 root 계정으로 해주세요.\n"
        f_output = f_output + "\t\t(ex. chown root [경로])\n"
        f_output = f_output + "\t2. 설정 파일의 권한을 640(-rw-r-----) 이나 600(-rw-------) 으로 해주세요.\n"
        f_output = f_output + "\t\t(ex. chmod 640 [경로])\n"
        f_output = f_output + "\t3. '/etc/cron.deny' 파일만 있으면 블랙 리스트 기반이라 취약합니다.\n"
        f_output = f_output + "\t'/etc/cron.allow' 파일이 같이 있으면 allow 파일이 우선 적용되어 안전해집니다.\n"
        f_output = f_output + "\t\t(ex. touch /etc/cron.allow)\n"
    else :
        f_output = f_output + C_GREEN + "\t[검사 결과] 안전합니다.\n" + C_END
        f_output = f_output + "\n"

    print(f_output,end='')
    handle = open("./U-22.txt", mode='w', encoding='utf-8')
    handle.write(f_output)
    handle.close()

U22()
