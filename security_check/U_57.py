# [U-57] UMASK 설정 값 점검
# 2020/11/27 : 노무승
#   1. 매뉴얼에 나와 있는 UMASK 설정 파일 리스트에
#	    추가로 조사해 설정 파일 여러 개 추가함.
#   2. 기본적인 UMASK 설정 값은 /etc/login.defs에 저장 됨.
#   3. /etc/pam.d/common-session, common-session-noninteractive 파일 내부에 설정을 추가해 시스템 전체 UMASK를 지정 가능함.
#   4. /etc/bashrc, /etc/bash.bashrc에 설정을 추가해 UMASK를 지정하는 것도 가능함.


import getpass
import os.path

C_END     = "\033[0m"
C_RED    = "\033[31m"
C_GREEN  = "\033[32m"
C_YELLOW = "\033[33m"
C_NUM = "U-57"

def U57() :
    f_output = ""
    f_output = f_output + "[" + C_NUM + "] UMASK 설정 값 점검" + "\n"
    flag = False

    list = "/etc/profile /etc/default /etc/bashrc /etc/bash.bashrc /etc/login.defs /etc/pam.d/common-session /etc/pam.d/common-session-noninteractive .cshrc .kshrc .bashrc .login .profile"
    list = list.split()
    path = "/home/" + getpass.getuser() + "/"

    for i in list:
        if (i.find("/etc/") == -1) :
            i = path + i
        if (os.path.isfile(i)):
            handle = open(i, mode="r", encoding="utf-8")
            temp = handle.readline()

            while temp:
                if (temp[0] != "#"):
                    temp = temp.upper()
                    if (temp.find("UMASK") != -1):
                        temp = temp.replace(" ", "")
                        temp = temp.replace("\t", "")
                        temp = temp.replace("\n", "")
                        temp = temp.replace("=", "")
                        temp = temp.replace(":", "")
                        temp = temp[temp.find("UMASK")+5:len(temp)]
                        if (temp.isdecimal()):
                            if (int(temp) < 22) :
                                f_output = f_output + C_YELLOW + "\t[경고] " + i + " : 설정된 UMASK 값이 22 미만 입니다.\n" + C_END 
                                f_output = f_output + C_YELLOW + "\t\t(설정된 UMASK 값 : " + str(int(temp)) + ")\n" + C_END 
                                flag = True
                temp = handle.readline()
            handle.close()

    if (flag) :
        f_output = f_output + C_RED + "\t[검사 결과] 보안 조치가 필요합니다.\n" + C_END  
        f_output = f_output + "\n"
        f_output = f_output + "[" + C_NUM + "] 조치 방법\n"
        f_output = f_output + "\t텍스트 편집기로 해당 파일을 열어 UMASK 값을 22로 설정해주세요.\n"
    else :
        f_output = f_output + C_GREEN + "\t[검사 결과] 안전합니다.\n" + C_END
        f_output = f_output + "\n"

    print(f_output,end='')
    handle = open("./" + C_NUM + ".txt", mode='w', encoding='utf-8')
    handle.write(f_output)
    handle.close()

U57()
