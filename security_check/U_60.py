# [U-60] 숨김 파일, 숨김 폴더 유무 검사
# 2020/11/29 : 노무승
#    숨김 파일, 숨김 폴더가 존재하면 취약으로 판단

import subprocess

C_END     = "\033[0m"
C_RED    = "\033[31m"
C_GREEN  = "\033[32m"
C_YELLOW = "\033[33m"
C_NUM = "U-60"

def U60() :
    f_output = ""
    f_output = f_output + "[" + C_NUM + "] 숨김 파일, 숨김 폴더 유무 검사\n"
    flag = False
    list = ["f","d"]

    for i in list:
        temp = subprocess.getoutput("find / -type " + i + " -name \".*\" 2>/dev/null")
        if (temp != ""):
            temp = temp.split("\n")
            if (i == "f") :
                f_output = f_output + C_YELLOW + "\t[경고] 아래 경로에 숨김 파일이 존재합니다.\n" + C_END 
            else :
                f_output = f_output + C_YELLOW + "\t[경고] 아래 경로에 숨김 폴더가 존재합니다.\n" + C_END 
            for j in temp:
                f_output = f_output + C_YELLOW + "\t\t" + j + "\n" + C_END 
            flag = True

    if (flag) :
        f_output = f_output + C_RED + "\t[검사 결과] 보안 조치가 필요합니다.\n" + C_END  
        f_output = f_output + "\n"
        f_output = f_output + "[" + C_NUM + "] 조치 방법\n"
        f_output = f_output + "\t숨김 파일, 숨김 폴더 목록 중, 필요없거나 이상한 목록이 발견되면 삭제하십시오.\n"
        f_output = f_output + "\t\t(ex. rm -rf [파일명])\n"
        f_output = f_output + "\t검토 후, 정상적인 설정 파일의 경우 삭제하지 않기를 권장 드립니다.\n"
    else :
        f_output = f_output + C_GREEN + "\t[검사 결과] 안전합니다.\n" + C_END
        f_output = f_output + "\n"

    print(f_output,end='')
    handle = open("./" + C_NUM + ".txt", mode='w', encoding='utf-8')
    handle.write(f_output)
    handle.close()

U60()
