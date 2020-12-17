# [U-15] World Writeable 파일 검사
# 2020/11/18 : 노무승
#   1. 매뉴얼 과는 달리 검사 디렉터리를 선정함
#   2. find 명령어 중 2>/dev/null 문구로 권한 에러를 뜨지 않게 함

import subprocess

C_END     = "\033[0m"
C_RED    = "\033[31m"
C_GREEN  = "\033[32m"
C_YELLOW = "\033[33m"

def U15():
    f_output = ""
    temp=""
    f_output = f_output + "[U-15] World Writeable 파일 검사 (/home, /tmp, /etc, /var 폴더 대상)\n"

    list = "/home /tmp /etc /var"
    list = list.split()

    for i in list:
        output = subprocess.getoutput("find " + i + " -type f -perm -2 2>/dev/null")
        if (len(output) != 0) :
            temp = temp + output + "\n"

    if (len(temp)==0):
        f_output = f_output + C_GREEN + "\t[검사 결과] 안전합니다.\n" + C_END
        f_output = f_output + "\n"
    else :
        output = temp.rstrip()
        output = output.split("\n")

        for i in output:
            f_output = f_output + C_YELLOW + "\t[경고] " + i + "\n" + C_END

        f_output = f_output + C_RED + "\t[검사 결과] 보안 조치가 필요합니다.\n" + C_END  
        f_output = f_output + "\n"
        f_output = f_output + "[U-15] 조치 방법\n"
        f_output = f_output + "\t1. 'chmod o-w [파일명]'으로 소유자와 그룹 외의 다른 유저의 파일 실행을 막을 수 있습니다.\n"
        f_output = f_output + "\t2. 'rm -rf [파일명]'으로 파일을 삭제할 수 있습니다.\n"
        f_output = f_output + "\t3. 해당 파일의 사용 목적을 확실히 알고 있고, 필요하다면 넘겨도 됨.\n"

    print(f_output,end='')
    handle = open("./U-15.txt", mode='w', encoding='utf-8')
    handle.write(f_output)
    handle.close()

U15()
