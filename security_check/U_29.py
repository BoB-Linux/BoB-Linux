# [U-29] tftp, talk 서비스 검사
# 2020/11/25 : 노무승
#   inetd.conf / xinetd.d 모두 검사.

import os.path
C_END     = "\033[0m"
C_RED    = "\033[31m"
C_GREEN  = "\033[32m"
C_YELLOW = "\033[33m"
C_NUM = "U-29"

def U29() :
    f_output = ""
    f_output = f_output + "[" + C_NUM + "] tftp, talk 서비스 검사" + "\n"
    flag = False

    list = "tftp talk ntalk"
    list = list.split()

    # use inetd
    path = "/etc/inetd.conf"
    if (os.path.isfile(path)) :
        handle = open(path, mode="r", encoding="utf-8")        
        temp = handle.readline()
        data = ""
        while temp: # file read
            temp = temp.replace(" ", "")
            temp = temp.replace("\t", "")
            temp = temp.replace("\n", "")
            temp = temp.upper()
            if (len(temp) > 0):
                if (temp[0] != "#"):
                    data = data + temp + "\n"
            temp = handle.readline()
        handle.close()

        for i in list: # check
            if (data.find(i.upper()) != -1):
                f_output = f_output + C_YELLOW + "\t[경고] " + path + " : tftp, talk 서비스(" + i + ")가 허용되어 있습니다.\n" + C_END
                flag = True

    # use xinetd
    path = "/etc/xinetd.d/"
    for i in list: 
        if (os.path.isfile(path + i)):
            handle = open(path + i, mode="r", encoding="utf-8")        
            temp = handle.readline()
            data = ""
            while temp: # file read
                temp = temp.replace(" ", "")
                temp = temp.replace("\t", "")
                temp = temp.replace("\n", "")
                temp = temp.upper()
                if (len(temp) > 0):
                    if (temp[0] != "#"):
                        data = data + temp + "\n"
                temp = handle.readline()
            handle.close()

            if (data.find("DISABLE=YES") == -1): # check
                f_output = f_output + C_YELLOW + "\t[경고] " + path + i + " : tftp, talk 서비스가 허용되어 있습니다.\n" + C_END
                flag = True

    if (flag) :
        f_output = f_output + C_RED + "\t[검사 결과] 보안 조치가 필요합니다.\n" + C_END  
        f_output = f_output + "\n"
        f_output = f_output + "[" + C_NUM + "] 조치 방법\n"
        f_output = f_output + "\t1. /etc/inetd.conf 에서 취약한 tftp, talk 서비스가 열려있는 경우,\n"
        f_output = f_output + "\t\t텍스트 편집기로 위 설정 파일을 열어 해당 서비스를 지우거나\n"
        f_output = f_output + "\t\t해당 서비스가 있는 줄의 맨 앞 문자를 #으로 설정해 주석 처리해주세요.\n"
        f_output = f_output + "\t\t(조치 후, 'reboot' 명령어를 입력하시면 반영됩니다.)\n"
        f_output = f_output + "\t2. /etc/xinetd.d/* 하위 파일에서 취약한 tftp, talk 서비스가 열려있는 경우,\n"
        f_output = f_output + "\t\t텍스트 편집기로 설정 파일을 열어 {} 사이에\n"
        f_output = f_output + "\t\t'disable = yes' 항목을 추가해주세요.\n"
        f_output = f_output + "\t\t(조치 후, 'service xinetd restart' 명령어를 입력하시면 반영됩니다.)\n"
        
    else :
        f_output = f_output + C_GREEN + "\t[검사 결과] 안전합니다.\n" + C_END
        f_output = f_output + "\n"

    print(f_output,end='')
    handle = open("./" + C_NUM + ".txt", mode='w', encoding='utf-8')
    handle.write(f_output)
    handle.close()

U29()
