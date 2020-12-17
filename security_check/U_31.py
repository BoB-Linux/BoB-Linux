# [U-31] 스팸 메일 릴레이 제한 검사
# 2020/11/26 : 노무승
#   1. 실행중인 프로세스를 확인하여 점검함.
#       (삭제 방법을 리눅스 패키지 관리자 별로 안내해주게끔 수정함.)
#   2. 우분투 20.04 기반에서 실제 Sendmail 서비스를 설치하여 테스트 해 봄.

import subprocess
import os.path
C_END     = "\033[0m"
C_RED    = "\033[31m"
C_GREEN  = "\033[32m"
C_YELLOW = "\033[33m"
C_NUM = "U-31"

def U31() :
    f_output = ""
    f_output = f_output + "[" + C_NUM + "] 스팸 메일 릴레이 제한 검사" + "\n"
    flag = False

    if (os.path.isfile("/etc/mail/sendmail.cf")) :
        temp = subprocess.getoutput("cat /etc/mail/sendmail.cf | grep \"R$\*\" | grep \"Relaying denied\"")
        if (len(temp) == 0) or (temp[0] == "#") :
            f_output = f_output + C_YELLOW + "\t[경고] /etc/mail/sendmail.cf : 스팸 메일 릴레이 제한이 필요합니다.\n" + C_END 
            flag = True
        if (os.path.isfile("/etc/mail/access") == False):
            f_output = f_output + C_YELLOW + "\t[경고] /etc/mail/access : 릴레이 허용 대상에 대한 설정 파일이 없습니다.\n" + C_END 
            flag = True

    if (flag) :
        f_output = f_output + C_RED + "\t[검사 결과] 보안 조치가 필요합니다.\n" + C_END  
        f_output = f_output + "\n"
        f_output = f_output + "[" + C_NUM + "] 조치 방법\n"
        f_output = f_output + "\t1. '/etc/mail/sendmail.cf' 파일 내부에 아래 문구를 추가해주세요.\n"
        f_output = f_output + "\t\t(R$* $#error $@ 5.7.1 $: \"550 Relaying denied\")\n"
        f_output = f_output + "\t\t만약 해당 문구의 맨앞 문자가 #으로 주석 처리되어 있으면 주석을 삭제해주세요.\n"
        f_output = f_output + "\t2. SMTP 서비스를 이용 중이라면 '/etc/mail/access' 파일을 만들어\n"
        f_output = f_output + "\t\t릴레이 허용 대상을 설정해주세요. (ex.touch /etc/mail/access)\n"
    else :
        f_output = f_output + C_GREEN + "\t[검사 결과] 안전합니다.\n" + C_END
        f_output = f_output + "\n"

    print(f_output,end='')
    handle = open("./" + C_NUM + ".txt", mode='w', encoding='utf-8')
    handle.write(f_output)
    handle.close()

U31()
