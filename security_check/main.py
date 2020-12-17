#!/usr/bin/env python3
import os
import time

checkList_1 = {'01': 'root 계정 원격 접속 제한', \
             '02': '패스워드 복잡성 설정', \
             '03': '계정 잠금 임계값 설정', \
             '04': '패스워드 파일 보호', \
             '44': 'root 이외의 UID가 \'0\'금지', \
             '45': 'root 계정 su 제한', \
             '46': '패스워드 최소 길이 설정', \
             '47': '패스워드 최대 사용기간 설정', \
             '48': '패스워드 최소 사용기간 설정', \
             '49': '불필요한 계정 제거', \
             '50': '관리자 그룹에 최소한의 계정 포함', \
             '51': '계정이 존재하지 않는 GID 금지', \
             '52': '동일한 UID 금지', \
             '53': '사용자 shell 점검', \
             '54': 'Session Timeout 설정'}
checkList_2 = {
             '05': 'root 홈, 패스 디렉터리 권한 및 패스 설정', \
             '06': '파일 및 디렉터리 소유자 설정', \
             '07': '/etc/passwd 파일 소유자 및 권한 설정', \
             '08': '/etc/shadow 파일 소유자 및 권한 설정', \
             '09': '/etc/hosts 파일 소유자 및 권한 설정', \
             '10': '/etc/(x)inetd.conf 파일 소유자 및 권한 설정', \
             '11': '/etc/syslog.conf 파일 소유자 및 권한 설정', \
             '12': '/etc/services 파일 소유자 및 권한 설정', \
             '13': 'SUID, SGID, Sticky bit 설정 파일 점검', \
             '14': '사용자, 시스템 시작파일 및 환경파일 소유자 및 권한 설정', \
             '15': 'world writable 파일 점검', \
             '16': '/dev에 존재하지 않는 device 파일 점검', \
             '17': '$HOME/.rhosts, hosts.equiv 사용 금지', \
             '18': '접속 IP 및 포트 제한', \
             '55': 'hosts.lpd 파일 소유자 및 권한 설정', \
             '56': 'NIS 서비스 비활성화', \
             '57': 'UMASK 설정 관리', \
             '58': '홈디렉토리 소유자 및 권한 설정', \
             '59': '홈디렉토리로 지정한 디렉토리의 존재 관리', \
             '60': '숨겨진 파일 및 디렉토리 검색 및 제거'}
checkList_3 = {
             '19': 'finger 서비스 비활성화', \
             '20': 'Anonymous FTP 비활성화', \
             '21': 'r 계열 서비스 비활성화', \
             '22': 'cron 파일 소유자 및 권한 설정', \
             '23': 'Dos 공격에 취약한 서비스 비활성화', \
             '24': 'NFS 서비스 비활성화', \
             '25': 'NFS 접근 통제', \
             '26': 'automountd 제거', \
             '27': 'RPC 서비스 확인', \
             '28': 'NIS, NIS+ 점검', \
             '29': 'tftp, talk 서비스 비활성화', \
             '30': 'Sendmail 버전 점검', \
             '31': '스팸 메일 릴레이 제한', \
             '32': '일반사용자의 Sendmail 실행 방지', \
             '33': 'DNS 보안 버전 패치', \
             '34': 'DNS Zone Transfer 설정', \
             '35': 'Apache 디렉토리 리스팅 제거', \
             '36': 'Apache 웹 프로세스 권한 제한', \
             '37': 'Apache 상위 디렉토리 접근 금지', \
             '38': 'Apache 불필요한 파일 제거', \
             '39': 'Apache 링크 사용 금지', \
             '40': 'Apache 파일 업로드 및 다운로드 제한', \
             '41': 'Apache 웹 서비스 영역의 분리', \
             '61': 'ssh 원격접속 허용', \
             '62': 'ftp 서비스 확인', \
             '63': 'ftp 계정 shell 제한', \
             '64': 'Ftpusers 파일 소유자 및 권한 설정', \
             '65': 'Ftpusers 파일 설정', \
             '66': 'at 파일 소유자 및 권한 설정', \
             '67': 'SNMP 서비스 구동 점검', \
             '68': 'SNMP 서비스 커뮤니티스트링의 복잡성 설정', \
             '69': '로그온 시 경고 메시지 제공', \
             '70': 'NFS 설정파일 접근 제한', \
             '71': 'expn, vrfy 명령어 제한', \
             '72': 'Apache 웹 서비스 정보 숨김'}
checkList_4 = {
             '42': '최신 보안패치 및 벤더 권고사항 적용'}
checkList_5 = {
             '43': '로그의 정기적 검토 및 보고', \
             '73': '정책에 따른 시스템 로깅 설정'}

def logo():
    print("             ____        ____            _     _                  ")
    time.sleep(0.1)
    print("            | __ )  ___ | __ )          | |   (_)_ __  _   ___  __")
    time.sleep(0.1)
    print("            |  _ \\ / _ \\|  _ \\   _____  | |   | | '_ \\| | | \\ \\/ /")
    time.sleep(0.1)
    print("            | |_) | (_) | |_) | |_____| | |___| | | | | |_| |>  < ")
    time.sleep(0.1)
    print("            |____/ \\___/|____/          |_____|_|_| |_|\\__,_/_/\\_\\ ")
    time.sleep(0.1)
    print("      ____                       _ _             ____ _               _    ")
    time.sleep(0.1)
    print("     / ___|  ___  ___ _   _ _ __(_) |_ _   _    / ___| |__   ___  ___| | __")
    time.sleep(0.1)
    print("     \___ \ / _ \/ __| | | | '__| | __| | | |  | |   | '_ \ / _ \/ __| |/ /")
    time.sleep(0.1)
    print("      ___) |  __/ (__| |_| | |  | | |_| |_| |  | |___| | | |  __/ (__|   < ")
    time.sleep(0.1)
    print("     |____/ \___|\___|\__,_|_|  |_|\__|\__, |   \____|_| |_|\___|\___|_|\_\\")
    time.sleep(0.1)
    print("                                        |___/                               \n\n")
    time.sleep(0.3)
    print("BoB Linux Security Check에 오신것을 환영합니다.\n")
    print("본 프로그램은 KISA의 \"주요통신기반시설 기술적 취약점 진단 및 평가 가이드\"를 토대로")
    print("BoB 9th Team \"Black Moon\"에서 제작하였습니다.")
    #print("이 프로그램은 KISA에서 발간한 주요통신기반시설 기술적 취약점 진단 및 평가 가이드를 토대로 제작되었습니다.")
    #print("이 프로그램은 차세대보안리더양성프로그램 BOB 9기 'BOB Linux 개발' 프로젝트 팀에 의해 제작되었습니다.")
    #print("(made by 김기서, 노무승, 이안나)")
    print("")                          

def checkAll():
    for i in range(1, 74):
        command = 'python3 ' + os.path.dirname(os.path.abspath(__file__)) + '/U_{0:02d}.py'.format(i)
        os.system(command)
        print("=====================================================================================")

def check():
    while True:
        num = input('점검할 항목을 입력하세요: ')
        if num.isdecimal():
            num = int(num)
            if (num >= 1) and (num <= 73):
                break
        print("1~73 사이 숫자만 입력해주세요.\n")

    print("=====================================================================================")
    command = 'python3 ' + os.path.dirname(os.path.abspath(__file__)) + '/U_{0:02d}.py'.format(num)
    os.system(command)
    print("=====================================================================================")

def printList():
    print("=====================================================================================")
    print("\t1. 계정 관리 관련")
    for key in checkList_1:
        print('\t\t[U-{}] {}'.format(key, checkList_1[key]))
    print("\n\t2. 파일 및 디렉터리 관련")
    for key in checkList_2:
        print('\t\t[U-{}] {}'.format(key, checkList_2[key]))
    print("\n\t3. 서비스 관리 관련")
    for key in checkList_3:
        print('\t\t[U-{}] {}'.format(key, checkList_3[key]))
    print("\n\t4. 패치 관리 관련")
    for key in checkList_4:
        print('\t\t[U-{}] {}'.format(key, checkList_4[key]))
    print("\n\t5. 로그 관리 관련")
    for key in checkList_5:
        print('\t\t[U-{}] {}'.format(key, checkList_5[key]))
    print("=====================================================================================")
    print("")

def main():
    os.system("clear")
    
    logo()

    while True:
        print('1. 모든 항목 점검')
        print('2. 특정 항목 점검')
        print('3. 점검 리스트 출력')
        print('4. 종료\n')
        select = input('실행할 명령을 선택하세요: ')

        if select == '4' or select == 'q':
            print('프로그램을 종료합니다.\n')
            break
        elif select == '1':
            checkAll()
        elif select == '2':
            check()
        elif select == '3':
            printList()
        else:
            print('잘못된 입력입니다. 다시 입력해주세요.\n')

if __name__ == "__main__":
    main()
