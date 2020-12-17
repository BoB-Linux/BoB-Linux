# [U-20] Anonmous FTP 계정 비활성화 검사 
# 2020/11/21 : 노무승
#	1. /etc/passwd 파일과 FTP 프로그램의 설정 파일을 기준으로 탐지를 합니다.
#	2. 따라서 리눅스 배포판 종류와는 무관하게 동작합니다.
#	3. 현재 우분투 20.04에서 vsftp와 proftp에 대한 테스트를 완료했습니다.
#	4. 이거 점검하는데 주석 포함 코드 100줄 이상이 말이되냐.. ㅁㄴㅇㄹ
#	5. 코드 작성하고 테스트하는데만 해도 시간 좀 걸린 듯.. ㅁㄴㅇㄹ
#       모든 경우의 수에 대해서 한번씩 다 대입하여 보완했음

import os.path
C_END     = "\033[0m"
C_RED    = "\033[31m"
C_GREEN  = "\033[32m"
C_YELLOW = "\033[33m"

def U20():
    flag = False
    output = ""
    f_output = ""
    f_output = f_output + "[U-20] Anonmous FTP 계정 비활성화 검사" + "\n"
    
    # FTP User Check
    handle = open("/etc/passwd", mode='r', encoding='utf-8')
    temp = handle.readline()
    while temp:
        temp = temp.upper()         # Upper Change                 
        temp = temp.replace(" ","") # Space Del
        if (temp[0]!="#") :                 # Remark Del
            if (temp.find("FTP") != -1) :   # ftp user check
                output = output + temp
        temp = handle.readline()
    handle.close
    
    # ftp user search
    if (output == "") :
        f_output = f_output + "\t[알림] FTP 계정이 존재하지 않습니다.\n"         
    else :
        f_output = f_output + C_YELLOW + "\t[알림] FTP 계정이 존재합니다.\n"
        f_output = f_output + "\t\t따라서 FTP 계정에 대한 확인이 필요합니다.\n" + C_END  

    # FTP Setting File Check
    list = ["vsftpd","vsftpd/vsftpd","proftpd/proftpd"]
    for i in list :
        path = os.path.isfile("/etc/" + i + ".conf")
        if (path) : # if setting file exist
            j=""
            if (i.find("/") != -1):
                j = i[0:i.find("/")]
            else:
                j = i
            f_output = f_output + "\t[알림] " + j + " FTP 프로그램 설정 파일이 존재합니다."+ "\n"
            handle = open("/etc/" + i +".conf", mode='r', encoding='utf-8')
            temp = handle.readline()

            while temp:
                temp = temp.upper()         # Upper Change                 
                temp = temp.replace(" ","") # Space Del
                if (temp[0]!="#") :             # Remark Del
                    if (i.find("vsftpd") != -1) : # /etc/vsftpd.conf Check
                        if (temp.find("ANONYMOUS_ENABLE=YES")!=-1):    
                            flag = True
                    else :                        # /etc/proftpd.conf Check
                        if (temp.find("<ANONYMOUS~FTP>")!=-1) :
                            flag = True
                temp = handle.readline()     
            handle.close()

            if (flag): # Result Print
                f_output = f_output + C_YELLOW + "\t[경고] /etc/" + i + ".conf : anonymous 계정 접속이 활성화되어 있습니다.\n" + C_END
                f_output = f_output + C_RED + "\t[검사 결과] 보안 조치가 필요합니다.\n" + C_END
                flag = False
            else :
                f_output = f_output + C_GREEN + "\t[검사 결과] 안전합니다.\n" + C_END
            f_output = f_output + "\n"

    # if (FTP user found) && (setting file not found) -> report
    if (f_output.find("[검사 결과]") == -1) :  
        f_output = f_output + "\t[알림] FTP 프로그램 설정 파일이 존재하지 않습니다.\n"  
        if (f_output.find("FTP 계정이 존재합니다.") != -1) :
            f_output = f_output + C_RED + "\t[검사 결과] 보안 조치가 필요합니다.\n" + C_END  
            f_output = f_output + "\n"
    # if (FTP user not found) && (setting file not found) -> safe 
        elif (f_output.find("FTP 계정이 존재하지 않습니다.") != -1) :
            f_output = f_output + C_GREEN + "\t[검사 결과] 안전합니다.\n" + C_END    
            f_output = f_output + "\n"

    # U-20 Report
    if (f_output.find("[검사 결과] 보안 조치가 필요합니다.")!=-1) :
        f_output = f_output + "[U-20] 조치 방법\n"
        f_output = f_output + "\t1. vsFTP 프로그램(=vsftpd)을 사용하는 경우,\n"
        f_output = f_output + "\t\t'/etc/vsftpd.conf'또는 '/etc/vsftpd/vsftpd.conf' 파일에서\n"
        f_output = f_output + "\t\t'anonymous_enable=YES'를 지우거나 YES를 NO로 바꿔주세요.\n"
        f_output = f_output + "\t2. ProFTP 프로그램(=proftpd)을 사용하는 경우,\n"
        f_output = f_output + "\t\t'/etc/proftpd/proftpd.conf' 파일에서\n"
        f_output = f_output + "\t\t'<Anonymous ~ftp>' 부터 '</Anonymous>'까지 지우거나\n"
        f_output = f_output + "\t\t'문구 맨 앞에 #을 붙여 주석 처리해주세요.\n"
        f_output = f_output + "\t3. 만약 다른 FTP 프로그램을 사용하시거나,\n"
        f_output = f_output + "\t\t따로 사용하시는 ftp 계정이 없다면,\n"
        f_output = f_output + "\t\t'userdel ftp'를 입력해 ftp 계정을 삭제해주세요.\n"
        f_output = f_output + "\t4. FTP 프로그램을 삭제해도 설정 파일은 남아 있을 수 있습니다.\n"
        f_output = f_output + "\t\t설정 파일도 모두 삭제해주세요.\n"

    # Consol Print and File Write
    print(f_output,end='')
    handle = open("./U-20.txt", mode='w', encoding='utf-8')
    handle.write(f_output)
    handle.close()

U20()
