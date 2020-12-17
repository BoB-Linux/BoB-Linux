# [U-14] 공통 환경 변수 파일 검사
# 2020/11/17~18 : 노무승
#   1. 매뉴얼에 나오지 않은 환경 변수 파일 추가
#   2. 다른 사용자 뿐 만 아니라 그룹 유저도 검사
#   3. ls 명령어 옵션과 문자열 파싱을 이용하여 구현

import subprocess
import os.path

C_END     = "\033[0m"
C_RED    = "\033[31m"
C_GREEN  = "\033[32m"
C_YELLOW = "\033[33m"

def U14():
    output = ""
    f_output = ""
    chk_user = ["root","user"]
    for user in chk_user:
        flag = False
        if (user == "root"):
            path = "/etc/"
            user = ["root"]
            list = "environment bash.bashrc profile bashrc profile.d"
            list = list.split()
            f_output = f_output + "[U-14] 공통 환경 변수 검사\n"
        elif (user == "user"):   
            user = subprocess.getoutput("ls /home")
            user = user.split() # User Count
            list = ".bashrc .bash_profile .bash_login .bash_logout .profile .kshrc .cshrc .login .exrc .netrc"
            list = list.split()
            f_output = f_output + "[U-14] 사용자별 환경 변수 검사\n"

        for i in user:
            if (i != "root"):
                path = "/home/" + i + "/"
            for j in list:
                if os.path.exists(path + j) :  # if setting file exist
                    output = subprocess.getoutput("ls -aldGQ " + path + j)
                    if (output[5] == 'w'): # GID write able check
                        f_output = f_output + C_YELLOW + "\t[경고] " + path + j + " : 그룹에 소속된 사용자(GID)가 해당 파일을 쓸 수 있습니다.\n" + C_END
                        flag = True
                    if (output[8] == 'w'): # Other User write able check
                        f_output = f_output + C_YELLOW + "\t[경고] " + path + j + " : 다른 모든 사용자가 해당 파일을 쓸 수 있습니다.\n" + C_END
                        flag = True
                    output = output.split("\"")
                    if (output[0].find("root")==-1) : # File Owner check
                        if (output[0].find(i)==-1) :
                            f_output = f_output + C_YELLOW + "\t[경고] " + path + j + " : 파일의 소유권(UID)이 '" + i + "'계정이 아닙니다.\n" + C_END
                            flag = True
    
        if (flag) :
            f_output = f_output + C_RED + "\t[검사 결과] 보안 조치가 필요합니다.\n" + C_END  
            f_output = f_output + "\n"
            if (f_output.find("조치 방법") == -1):
                f_output = f_output + "[U-14] 조치 방법\n"
                f_output = f_output + "\t1. 'chmod og-w [파일명]'으로 소유자외 다른 유저의 파일 실행을 막을 수 있습니다.\n"
                f_output = f_output + "\t2. 'chown [소유자] [파일명]'으로 소유자를 변경할 수 있습니다.\n"
                f_output = f_output + "\n"
        else :
            f_output = f_output + C_GREEN + "\t[검사 결과] 안전합니다.\n" + C_END
            f_output = f_output + "\n"

    print(f_output,end='')
    handle = open("./U-14.txt", mode='w', encoding='utf-8')
    handle.write(f_output)
    handle.close()

U14()
