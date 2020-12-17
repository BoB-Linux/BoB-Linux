# [U-56] NIS 서비스 비활성화 검사
# 2020/11/27 : 노무승
#   1. 실행중인 프로세스를 확인하여 점검함.
#       (삭제 방법을 리눅스 패키지 관리자 별로 안내해주게끔 수정함.)
#   2. 우분투 20.04 기반에서 실제 NIS 서비스를 설치하여 테스트 해 봄.
#   3. U-28 점검 스크립트와 동일
#       매뉴얼 U-56의 점검 방식인 'ps -ef | grep yp'은 제대로 된 결과가 나오지 않음

import subprocess
C_END     = "\033[0m"
C_RED    = "\033[31m"
C_GREEN  = "\033[32m"
C_YELLOW = "\033[33m"
C_NUM = "U-56"

def U56() :
    f_output = ""
    f_output = f_output + "[" + C_NUM + "] NIS 서비스 비활성화 검사" + "\n"
    f_output = f_output + "(U-28번 검사와 동일합니다.)" + "\n"
    flag = False

    temp = subprocess.getoutput("ps -ef | egrep \"ypserv|ypbind|ypxfrd|rpc.yppasswdd|rpc.ypupdated\" | grep -v grep")

    if (len(temp) != 0) :
        temp = temp.split("\n")
        for i in temp:
            data = i.split()
            f_output = f_output + C_YELLOW + "\t[경고] NIS, NIS+ 서비스 (" + data[7] + ")가 활성화 되어 있습니다.\n" + C_END 
            flag = True

    if (flag) :
        f_output = f_output + C_RED + "\t[검사 결과] 보안 조치가 필요합니다.\n" + C_END  
        f_output = f_output + "\n"
        f_output = f_output + "[" + C_NUM + "] 조치 방법\n"
        f_output = f_output + "\tNIS, NIS+ 서비스 관련 패키지를 모두 삭제해주세요.\n"
        f_output = f_output + "\t\t(데비안 계열(우분투 등) : apt remove nis -y)\n"
        f_output = f_output + "\t\t(레드햇 계열(CentOS 등) :\n"
        f_output = f_output + "\t\tyum remove ypserv ypbind ypxfrd rpcbind yppasswdd -y)\n"
    else :
        f_output = f_output + C_GREEN + "\t[검사 결과] 안전합니다.\n" + C_END
        f_output = f_output + "\n"

    print(f_output,end='')
    handle = open("./" + C_NUM + ".txt", mode='w', encoding='utf-8')
    handle.write(f_output)
    handle.close()

U56()
