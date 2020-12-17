# [U-30] Sendmail 서비스 검사
# 2020/11/26 : 노무승
#   1. 실행중인 프로세스를 확인하여 점검함.
#       (삭제 방법을 리눅스 패키지 관리자 별로 안내해주게끔 수정함.)
#   2. 우분투 20.04 기반에서 실제 Sendmail 서비스를 설치하여 테스트 해 봄.

import subprocess
C_END     = "\033[0m"
C_RED    = "\033[31m"
C_GREEN  = "\033[32m"
C_YELLOW = "\033[33m"
C_NUM = "U-30"

def U30() :
    f_output = ""
    f_output = f_output + "[" + C_NUM + "] Sendmail 서비스 검사" + "\n"
    flag = False

    temp = subprocess.getoutput("ps -ef | grep sendmail")

    if (len(temp) != 0) :
        temp = temp.split("\n")
        for i in temp:
            if (i.find("grep") == -1) :
                f_output = f_output + C_YELLOW + "\t[경고] Sendmail 서비스가 활성화 되어 있습니다.\n"+ C_END 
                flag = True

    if (flag) :
        f_output = f_output + C_RED + "\t[검사 결과] 보안 조치가 필요합니다.\n" + C_END  
        f_output = f_output + "\n"
        f_output = f_output + "[" + C_NUM + "] 조치 방법\n"
        f_output = f_output + "\t Sendmail 서비스 관련 패키지를 모두 삭제해주세요.\n"
        f_output = f_output + "\t\t(데비안 계열(우분투 등) : apt remove sendmail sendmail-cf -y)\n"
        f_output = f_output + "\t\t(레드햇 계열(CentOS 등) : yum remove sendmail sendmail-cf -y)\n"
    else :
        f_output = f_output + C_GREEN + "\t[검사 결과] 안전합니다.\n" + C_END
        f_output = f_output + "\n"

    print(f_output,end='')
    handle = open("./" + C_NUM + ".txt", mode='w', encoding='utf-8')
    handle.write(f_output)
    handle.close()

U30()
