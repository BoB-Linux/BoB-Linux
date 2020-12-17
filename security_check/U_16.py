# [U-16] /dev 디렉터리 불필요 파일 검사
# 2020/11/18 : 노무승
#   1. find 명령어 중 2>/dev/null 문구로 권한 에러를 뜨지 않게 함
#   2. 조치 방법에 mv 명령어 추가

import subprocess

C_END     = "\033[0m"
C_RED    = "\033[31m"
C_GREEN  = "\033[32m"
C_YELLOW = "\033[33m"

def U16():
    f_output = ""
    f_output = f_output + "[U-16] /dev 디렉터리 불필요한 파일 검사\n"

    output = subprocess.getoutput("find /dev -type f 2>/dev/null")
    output = output.split("\n")

    if (output == ['']) : # Nothing
        f_output = f_output + C_GREEN + "\t[검사 결과] 안전합니다.\n" + C_END
        f_output = f_output + "\n"
    else : # Detect
        for i in output :
            f_output = f_output + C_YELLOW + "\t[경고] " + i + "\n" + C_END
        f_output = f_output + C_RED + "\t[검사 결과] 보안 조치가 필요합니다.\n" + C_END  
        f_output = f_output + "\n"
        f_output = f_output + "[U-16] 조치 방법\n"
        f_output = f_output + "\t1. 중요한 파일이면 'mv [파일명] [디렉터리]'로 파일을 옮기십시오.\n"
        f_output = f_output + "\t2. 'rm -rf [파일명]'으로 /dev 디렉터리에 존재하는 쓸데없는 파일을 삭제하십시오.\n"

    print(f_output,end='')
    handle = open("./U-16.txt", mode='w', encoding='utf-8')
    handle.write(f_output)
    handle.close()

U16()
