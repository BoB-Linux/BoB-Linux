# [U-18] 접속 IP 및 포트 제한 파일 여부 검사
# 2020/11/20 : 노무승
#   1. /etc/hosts.deny, host.allow 파일이 제대로 설정되었는지 검증
#   2. 우분투 20.04에서  tcp wrapper(tcpd)(xinetd에는 내장)가 설치되어 있지는 않은 것 같음.
#       하지만 여러 원격 접속 데몬들에서 위 두 파일을 참조함. (xinetd(telnetd), sshd 등)
#   3. 현재 원격 접속 데몬이 설치되어 있지 않더라도 제한을 하는 것이 바람직하다 판단됨. 

import os.path

C_END     = "\033[0m"
C_RED    = "\033[31m"
C_GREEN  = "\033[32m"
C_YELLOW = "\033[33m"

def U18():
    f_output = ""
    f_output = f_output + "[U-18] 접속 IP 및 포트 제한 파일 여부 검사\n"
    flag = False
    list = ['/etc/hosts.deny','/etc/hosts.allow']

    for i in list:
        output = ""
        if (os.path.isfile(i)) :            # File exist check
            handle = open(i, mode='r', encoding='utf-8')
            temp = handle.readline()
            while temp:                     # Remark Del
                if (temp[0]!="#") : output = output + temp
                temp = handle.readline()
            output = output.replace(" ","") # Space Del
            output = output.upper()         # Upper Change

            if (i=="/etc/hosts.deny") :     # hosts.deny -> ALL:ALL Not Found -> Pwn
                if (output.find("ALL:ALL")==-1) :
                    f_output = f_output + C_YELLOW + "\t[경고] " + i + " : 파일이 취약하게 설정되어 있습니다.\n" + C_END
                    flag = True
            else :                          # host.allow -> ALL:ALL Found -> Pwn
                if (output.find("ALL:ALL")!=-1) :
                    f_output = f_output + C_YELLOW + "\t[경고] " + i + " : 파일이 취약하게 설정되어 있습니다.\n" + C_END
                    flag = True
        else :
            f_output = f_output + C_YELLOW + "\t[경고] " + i + " : 파일이 존재하지 않습니다.\n" + C_END
            flag = True

    if (flag) :
        f_output = f_output + C_RED + "\t[검사 결과] 보안 조치가 필요합니다.\n" + C_END  
        f_output = f_output + "\n"
        f_output = f_output + "[U-18] 조치 방법\n"
        f_output = f_output + "\t1. 누군가 원격 데몬을 설치했을 때 곧바로 설정 값이 적용될 수 있도록\n"
        f_output = f_output + "\t\t항상 '/etc/hosts.deny', '/etc/hosts.allow' 파일이 존재하도록 하십시오.\n"
        f_output = f_output + "\t2. '/etc/hosts.deny' 파일을 텍스트 편집기로 열어 하단에 'ALL:ALL' 문구를 추가하십시오.\n"
        f_output = f_output + "\t\t그러면 다른 모든 원격 접속자의 접속이 거부됩니다.\n"
        f_output = f_output + "\t3. '/etc/hosts.allow' 파일에서는 'ALL:ALL' 문구를 제거하십시오.\n"
        f_output = f_output + "\t\t그러면 다른 모든 원격 접속자의 접근을 무조건적으로는 허용하지 않게 됩니다.\n"
        f_output = f_output + "\t\t특정 접속자만 허용하고 싶다면 'ALL(또는 특정 데몬):[아이피]'와 같이 추가하면 됩니다.\n"

    else :
        f_output = f_output + C_GREEN + "\t[검사 결과] 안전합니다.\n" + C_END
        f_output = f_output + "\n"

    print(f_output,end='')
    handle = open("./U-18.txt", mode='w', encoding='utf-8')
    handle.write(f_output)
    handle.close()

U18()
