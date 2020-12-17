#!/usr/bin/env python3
#3.32 로그온 시 경고 메시지 제공
import sys
import subprocess
C_END       = "\033[0m"
C_RED       = "\033[31m"
C_GREEN     = "\033[32m"
C_YELLOW    = "\033[33m"
def U_69(): 
    sys.stdout = open('./U-69.txt', mode='w', encoding='utf-8')
    print("[U-69] 로그온 시 경고 메시지 제공")
    report = True

    print(C_YELLOW + "\t[검사 결과] 서버 접속시 비인가자들에게 경각심을 심어주기 위해 \n\t로그인 경고 메시지 설정이 필요합니다." + C_END)
    print(C_YELLOW + "\t로그인 메시지가 설정되지 않은 경우 메시지에 서버 OS 버전과\n\t서비스 버전이 공격자에게 노출된다면 이러한 정보를 통해 해당\n\tOS 및 서비스의 취약점을 이용하여 공격을 시도할 수 있습니다." + C_END)

###########################################################################################
    if (report) :
        print("[U-69] 조치 방법")
        print("\t1. 서버 로그온 메시지 설정")
        print("\t\tvi 편집기로 \"/etc/motd\" 파일을 연 후 로그온 메시지를 입력합니다.")
        print("\t\t#vi /etc/motd")
        print("\t\t경고 메시지 입력")
        print("\t2. Telnet 배너 설정")
        print("\t\tvi 편집기로 \"/etc/issue.net\" 파일을 연 후 로그온 메시지를 입력합니다.")
        print("\t\t#vi /etc/issue.net")
        print("\t\t경고 메시지 입력")
        print("\t3. FTP 배너 설정")
        print("\t\tvi 편집기로 \"/etc/vsftpd/vsftpd.conf\" 파일을 연 후 로그온 메시지를 입력합니다.")
        print("\t\t#vi /etc/vsftpd/vsftpd.conf")
        print("\t\tftpd_banner=\"경고 메시지 입력\"")
        print("\t4. SMTP 배너 설정")
        print("\t\tvi 편집기로 \"/etc/mail/sendmail.cf\" 파일을 연 후 로그온 메시지를 입력합니다.")
        print("\t\t#vi /etc/mail/sendmail.cf")
        print("\t\tO Smtp GreeringMessage=\"경고 메시지 입력\"")
        print("\t5. DNS 배너 설정")
        print("\t\tvi 편집기로 \"/etc/named.conf\" 파일을 연 후 로그온 메시지를 입력합니다.")
        print("\t\t#vi /etc/named.conf")
        print("\t\t경고 메시지 입력")
    sys.stdout.close()
    subprocess.call('cat ./U-69.txt', shell=True)
U_69()