# U-01 상
# 1.1 root 계정 원격 접속 제한
from os import path

import printModule as pm

def U01():
    report = pm.openReport('U-01.txt')
    pm.printTitle(report, '[U-01] root 계정 원격 접속 제한')

    isSafeLogin = False
    tocheck = 'pam_securetty.so'
    f = open('/etc/pam.d/login', 'r')
    for line in f:
        if tocheck in line:
            index = line.find(tocheck)
            # 주석인지 확인
            if '#' in line[:index]:
                continue
            else:
                isSafeLogin = True
    f.close()
    if not isSafeLogin:
        pm.printWarning(report, '\"/etc/pam.d/login\" 파일 내용의 확인이 필요합니다.')

    # securetty 파일이 없는 경우도 있었음
    isSafeSecuretty = True
    if path.isfile('/etc/securetty'):
        tocheck = 'pts' 
        f = open('/etc/securetty', 'r')
        for line in f:
            if tocheck in line:
                index = line.find(tocheck)
                # 주석인지 확인
                if '#' in line[:index]:
                    continue
                else:
                    isSafeSecuretty = False
        f.close()
        if not isSafeSecuretty:
            pm.printWarning(report, '\"/etc/securetty\" 파일에 pts 관련 내용이 있습니다.')

    # KISA 매뉴얼과 별개로 sshd_config 파일도 검사
    isSafeSshd = True
    if path.isfile('/etc/ssh/sshd_config'):
        tocheck = 'PermitRootLogin'
        f = open('/etc/ssh/sshd_config', 'r')
        for line in f:
            if tocheck in line:
                index = line.find(tocheck)
                # 주석인지 확인
                if '#' in line[:index]:
                    continue
                else:
                    isSafeSshd = False
        f.close()
        if not isSafeSshd:
            pm.printWarning(report, '\"/etc/ssh/sshd_config\" 파일에 PermitRootLogin 관련 내용이 있습니다.')

    if isSafeLogin and isSafeSecuretty and isSafeSshd:
        pm.printSafe(report)
    else:
        pm.printNotsafe(report)
        pm.printSolution(report, '[U-01] 조치 방법')
        pm.printSolution(report, '\troot 계정의 원격 접속을 차단하세요.')
        pm.printSolution(report, '\t\t텍스트 에디터를 이용하여 \"/etc/pam.d/login\" 파일을 엽니다.')
        pm.printSolution(report, '\t\t아래의 내용을 수정 또는 추가하세요.')
        pm.printSolution(report, '\t\tauth required pam_securetty.so')
        pm.printSolution(report, '\t\t텍스트 에디터를 이용하여 \"/etc/securetty\" 파일을 엽니다.')
        pm.printSolution(report, '\t\tpts 관련 내용을 제거하세요.')
        pm.printSolution(report, '\tssh를 사용 중이라면 ssh를 통한 root 접속을 차단하세요.')
        pm.printSolution(report, '\t\t텍스트 에디터를 이용하여 \"/etc/ssh/sshd_config\" 파일을 엽니다.')
        pm.printSolution(report, '\t\tPermitRootLogin 내용을 제거하세요.\n')

    report.close()

U01()
