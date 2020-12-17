#!/usr/bin/env python3
#3.34 expn, vrfy 명령어 제한
import sys
import subprocess
C_END       = "\033[0m"
C_RED       = "\033[31m"
C_GREEN     = "\033[32m"
C_YELLOW    = "\033[33m"
def U_71(): 
    sys.stdout = open('./U-71.txt', mode='w', encoding='utf-8')
    print("[U-71] expn, vrfy 명령어 제한")
    out = subprocess.getoutput('cat /etc/mail/sendmail.cf')

    # PrivacyOptions 부터 # 까지
    index = out.find("PrivacyOptions")
    index2 = out.find("#", index + 1)

    #print(out[index:index2])

    if 'noexpn' in out[index:index2] :
        report = False

    if 'novrfy' in out[index:index2] :
        report = False

    else : 
        report = True

    if (report) :
        print(C_RED + "\t[검사 결과] 보안 조치가 필요합니다." + C_END)
    else :
        print(C_GREEN + "\t[검사 결과] 안전합니다." + C_END)

###########################################################################################
    if (report) :
        print("[U-71] 조치 방법")
        print("\t<SMTP 서비스를 계속 사용할 시>")
        print("\t1. vi 편집기를 이용하여 \"/etc/mail/sendmail.cf\"파일을 엽니다.")
        print("\t\tvi /etc/mail/sendmail.cf")
        print("\t2. \"/etc/mail/sendmail.cf\" 파일에 noexpn, novrfy 옵션을 추가합니다.")
        print("\t\t(수정 전) O PrivacyOptions=authwarnings")
        print("\t\t(수정 후) O PrivacyOptions=authwarnings, noexpn, novrfy")
        print("\t3. SMTP 서비스를 재시작합니다.")
        print("\n\t<SMTP 서비스를 사용하지 않을 시>")
        print("\t1. SMTP를 사용하지 않을 시 서비스를 중지합니다.")
        print("\t\t#ps -ef | grep sendmail")
        print("\t\troot 441 1 0 Sep19 ? 00:00:00 sendmail: accepting connections")
        print("\t\t#kill -9 [PID]")
        print("\t2. 시스템 재시작 시 SMTP 서버가 시작되지 않도록 아래와 같이 설정합니다.")
        print("\t\t#ls -al /etc/rc*.d/* | grep sendmail")
        print("\t\tls 명령으로 위치를 확인합니다.")
        print("\t\t#mv /etc/rc2.d/S01sendmail /etc/rc2.d/_S01sendmail")
        print("\t\tmv 명령을 이용해 이름을 변경합니다.")
    sys.stdout.close()
    subprocess.call('cat ./U-71.txt', shell=True)
U_71()