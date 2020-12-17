# [U-59] 계정의 홈 디렉터리 경로 존재 유무 검사
# 2020/11/29 : 노무승
#    1. /etc/passwd 파일을 기준으로 계정과 홈 디렉터리 파싱
#       홈 디렉터리가 존재하지 않거나 / (루트 디렉터리)인 경우 취약

import os.path

C_END     = "\033[0m"
C_RED    = "\033[31m"
C_GREEN  = "\033[32m"
C_YELLOW = "\033[33m"
C_NUM = "U-59"

def U59() :
    f_output = ""
    f_output = f_output + "[" + C_NUM + "] 계정의 홈 디렉터리 경로 존재 유무 검사\n"
    flag = False
    path = "/etc/passwd"

    if (os.path.isfile(path)) :
        handle = open(path, mode="r", encoding="utf-8")
        temp = handle.readline()

        while temp:
            temp = temp.replace(" ","")
            temp = temp.replace("\t","")
            temp = temp.replace("\n","")

            if (temp.count(":") == 6) and (temp[0] != "#"):
                temp = temp.split(":")
                if (temp[5] == ""):
                        f_output = f_output + C_YELLOW + "\t[경고] "+ temp[0] + " : 해당 계정의 홈 디렉터리가 비어있습니다.\n" + C_END 
                        flag = True
                if  (temp[5] == "/"):
                        f_output = f_output + C_YELLOW + "\t[경고] "+ temp[0] + " : 해당 계정의 홈 디렉터리가 / (루트 디렉터리)로 설정되어 있습니다.\n" + C_END 
                        flag = True
            temp = handle.readline()
        handle.close()

    if (flag) :
        f_output = f_output + C_RED + "\t[검사 결과] 보안 조치가 필요합니다.\n" + C_END  
        f_output = f_output + "\n"
        f_output = f_output + "[" + C_NUM + "] 조치 방법\n"
        f_output = f_output + "\t1. 사용하지 않는 계정의 경우, 해당 계정을 삭제하십시오.\n"
        f_output = f_output + "\t\t(ex. userdel [계정명])\n"
        f_output = f_output + "\t2. 사용하는 계정의 경우, 텍스트 편집기로 /etc/passwd 파일을 열어\n"
        f_output = f_output + "\t해당 계정의 6번째 항목에 홈 디렉터리를 입력하십시오.\n"
        f_output = f_output + "\t\t(각 항목은 : 문자로 구분합니다.)\n"
    else :
        f_output = f_output + C_GREEN + "\t[검사 결과] 안전합니다.\n" + C_END
        f_output = f_output + "\n"

    print(f_output,end='')
    handle = open("./" + C_NUM + ".txt", mode='w', encoding='utf-8')
    handle.write(f_output)
    handle.close()

U59()
