# [U-23] DoS 공격에 취약한 서비스 비활성화 검사
# 2020/11/23 : 노무승
#   '/etc/inetd.conf' 파일과 '/etc/xinetd.d/~' 파일을 검사하여 판단함.

import os.path
C_END     = "\033[0m"
C_RED    = "\033[31m"
C_GREEN  = "\033[32m"
C_YELLOW = "\033[33m"

def U23() :
    f_output = ""
    f_output = f_output + "[U-23] DoS 공격에 취약한 서비스 비활성화 검사" + "\n"
    flag = False
    path = "/etc/inetd.conf"
    list = "echo echo-udp discard discard-udp daytime daytime-udp chargen chargen-udp ntp ntp-udp snmp snmp-udp"
    list = list.split()

    # /etc/inetd.conf Scan
    if (os.path.isfile(path)) :
        handle = open(path, mode="r", encoding="utf-8")
        temp = handle.readline()
        while (temp):
            temp = temp.replace(" ","")
            temp = temp.upper()
            if (temp[0] != "#") :
                for i in list:
                    if (temp.find(i.upper()) != -1):
                        f_output = f_output + C_YELLOW + "\t[경고] " + path + " : 해당 파일에 DoS 공격에 취약한 서비스(" + i + ")가 활성화 되어 있습니다.\n" + C_END
                        flag = True
            temp = handle.readline()
        handle.close()

    # /etc/xinetd.d/~ Scan
    path = "/etc/xinetd.d/"
    for i in list:
        data = ""
        if (os.path.isfile(path + i)): 
            handle = open(path + i, mode="r", encoding="utf-8")
            temp = handle.readline()
            while temp :
                temp = temp.replace(" ", "")
                temp = temp.replace("\t", "")
                temp = temp.upper()
                if (temp[0] != "#"):
                    data = data + temp
                temp = handle.readline()
            handle.close()
            if (data.count("{") != data.count("DISABLE=YES")):
                f_output = f_output + C_YELLOW + "\t[경고] " + path + i + " : 해당 파일에 DoS 공격에 취약한 서비스가 활성화 되어 있습니다.\n" + C_END
                flag = True

    if (flag) :
        f_output = f_output + C_RED + "\t[검사 결과] 보안 조치가 필요합니다.\n" + C_END  
        f_output = f_output + "\n"
        f_output = f_output + "[U-23] 조치 방법\n"
        f_output = f_output + "\t1. 취약한 서비스가 '/etc/inetd.conf'에서 활성화된 것이 발견되었다면,\n"
        f_output = f_output + "\t\t취약한 서비스의 필드 맨 앞에 # 문구를 붙여 주석 처리 해주세요.\n"
        f_output = f_output + "\t2. 취약한 서비스가 '/etc/xinetd.d/' 폴더 내부 파일에서 발견되었다면,\n"
        f_output = f_output + "\t\t해당 파일 내부의 {} 항목 안에 'disable = yes' 문구를 넣어 주세요.\n"
    else :
        f_output = f_output + C_GREEN + "\t[검사 결과] 안전합니다.\n" + C_END
        f_output = f_output + "\n"

    print(f_output,end='')
    handle = open("./U-23.txt", mode='w', encoding='utf-8')
    handle.write(f_output)
    handle.close()

U23()
