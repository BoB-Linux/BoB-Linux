# U-02 상
# 1.2 패스워드 복잡성 설정
import subprocess

import printModule as pm

def U02():
    report = pm.openReport('U-02.txt')
    pm.printTitle(report, '[U-02] 패스워드 복잡성 설정')
    pm.printNotice(report, '기존에 설정 되어 있는 패스워드에 대해서는 점검할 수 없습니다.')

    isSafe = False
    output = subprocess.getoutput('dpkg -l | grep libpam-pwquality')
    if not ('libpam-pwquality' in output):
        pm.printWarning(report, 'pwquality.conf 파일이 존재하지 않습니다.')
        pm.printWarning(report, 'libpam-pwquality를 설치해 주세요.')
        pm.printWarning(report, '# apt install libpam-pwquality')

    else:
        # pam_pwquality로 수정
        tocheck = 'password requisite pam_pwquality.so'
        tocheck = ''.join(tocheck.split())
        f = open('/etc/pam.d/common-password', 'r')
        for line in f:
            line = ''.join(line.split())  # 공백 제거
            if tocheck in line:
                # 주석인지 확인
                if '#' in line:
                    continue

                isSafe = True
                # minlen
                index = line.find('minlen=')
                if index < 0:
                    pm.printWarning(report, '최소 길이가 설정되어 있지 않습니다.')
                else:
                    index += len('minlen=')
                    minlen = ''
                    while line[index] > '0' and line[index] < '9':
                        minlen = minlen.join(line[index])
                        index += 1
                    if int(minlen) < 8:
                        pm.printWarning(report, '최소 패스워드 길이가 8 미만입니다.')
                        pm.printWarning(report, '현재 최소 길이는 ' + minlen + ' 입니다.')
                        isSafe = False
                    else:
                        pm.printNotice(report, '현재 최소 길이는 ' + minlen + ' 입니다.')

                # lcredit
                index = line.find('lcredit=-1')
                if index < 0:
                    pm.printWarning(report, '소문자 요구가 설정되어 있지 않습니다.')
                    isSafe = False
                else:
                    pm.printNotice(report, '소문자 요구가 설정되어 있습니다.')
                # ucredit
                index = line.find('ucredit=-1')
                if index < 0:
                    pm.printWarning(report, '대문자 요구가 설정되어 있지 않습니다.')
                    isSafe = False
                else:
                    pm.printNotice(report, '대문자 요구가 설정되어 있습니다.')
                # dcredit
                index = line.find('ucredit=-1')
                if index < 0:
                    pm.printWarning(report, '숫자 요구가 설정되어 있지 않습니다.')
                    isSafe = False
                else:
                    pm.printNotice(report, '숫자 요구가 설정되어 있습니다.')
                # ocredit
                index = line.find('ucredit=-1')
                if index < 0:
                    pm.printWarning(report, '특수문자 요구가 설정되어 있지 않습니다.')
                    isSafe = False
                else:
                    pm.printNotice(report, '특수문자 요구가 설정되어 있습니다.')
        f.close()

    if isSafe:
        pm.printSafe(report)
    else:
        pm.printNotsafe(report)
        pm.printSolution(report, '[U-02] 조치 방법')
        pm.printSolution(report, '\tlibpam-pwquality 패키지를 설치하세요.')
        pm.printSolution(report, '\t\t# apt install libpam-pwquality')
        pm.printSolution(report, '\t패스워드 복잡성 설정 파일의 내용을 내부 정책에 맞도록 수정하세요.')
        pm.printSolution(report, '\t\t텍스트 에디터를 이용하여 \"/etc/pam.d/common-password\" 파일을 엽니다.')
        pm.printSolution(report, '\t\t아래의 내용으로 수정하세요.')
        pm.printSolution(report, '\t\tpassword requisite pam_pwquality.so retry=3 minlen=8 ')
        pm.printSolution(report, '\t\t\tlcredit=-1 ucredit=-1 dcredit=-1 ocredit=-1')
        pm.printSolution(report, '\t\t  lcredit=-1 : 소문자 최소 1자 이상 요구')
        pm.printSolution(report, '\t\t  ucredit=-1 : 대문자 최소 1자 이상 요구')
        pm.printSolution(report, '\t\t  dcredit=-1 : 숫자 최소 1자 이상 요구')
        pm.printSolution(report, '\t\t  ocredit=-1 : 특수문자 최소 1자 이상 요구')
        pm.printSolution(report, '\t\t  minlen=8   : 최소 8자리 이상 요구')
        pm.printSolution(report, '\t\t  retry=3    : 3번 재입력 가능\n')

    report.close()

U02()
