# [U-21] r 계열 서비스 비활성화 검사 
# 2020/11/22 : 노무승
#   xinetd의 r 계열 서비스 설정 파일에서 비활성화 여부를 읽어와서 판단함

import os.path
C_END     = "\033[0m"
C_RED    = "\033[31m"
C_GREEN  = "\033[32m"
C_YELLOW = "\033[33m"

def U21() :
    f_output = ""
    f_output = f_output + "[U-21] r 계열 서비스 비활성화 검사 " + "\n"
    flag = False
    list = ["rlogin", "rsh", "rexec"]

    for i in list :
        path = "/etc/xinetd.d/" + i

        if (os.path.isfile(path)) :
            handle = open(path, mode='r', encoding='utf-8')
            temp = handle.read()
            handle.close()

            temp = temp.replace(" ","")
            temp = temp.upper()
            if (temp.find("DISABLE=YES") == -1) :
                f_output = f_output + C_YELLOW + "\t[경고] " + path + " : r계열 서비스가 비활성화 되어 있지 않습니다.\n" + C_END
                flag = True

    if (flag) :
        f_output = f_output + C_RED + "\t[검사 결과] 보안 조치가 필요합니다.\n" + C_END  
        f_output = f_output + "\n"

        f_output = f_output + "[U-21] 조치 방법\n"
        f_output = f_output + "\t'/etc/xinetd.d/' 디렉터리 내 rlogin, rsh, rexec 파일에서\n"
        f_output = f_output + "\t{} 내부에 'disable = yes' 항목을 넣어주세요.\n"
    else :
        f_output = f_output + C_GREEN + "\t[검사 결과] 안전합니다.\n" + C_END
        f_output = f_output + "\n"

    print(f_output,end='')
    handle = open("./U-21.txt", mode='w', encoding='utf-8')
    handle.write(f_output)
    handle.close()

U21()
