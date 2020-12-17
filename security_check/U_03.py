# U-03 상
# 1.3 계정 잠금 임계값 설정
import printModule as pm

def U03():
    report = pm.openReport('U-03.txt')
    pm.printTitle(report, '[U-03] 계정 잠금 임계값 설정')

    isSafe = False
    isSet = False
    # pam_tally2로 수정
    tocheck = 'auth required pam_tally2.so'
    tocheck = ''.join(tocheck.split())
    # KISA 매뉴얼에는 system-auth로 되어 있음
    # 우분투는 common-auth
    f = open('/etc/pam.d/common-auth', 'r')
    for line in f:
        line = ''.join(line.split())  # 공백 제거
        if tocheck in line:
            # 주석인지 확인
            if '#' in line:
                continue

            index = line.find('deny=')
            if index < 0:
                continue
            index += len('deny=')
            limit = ''
            while line[index] > '0' and line[index] < '9':
                limit = limit.join(line[index])
                index += 1
            if int(limit) > 5:
                pm.printWarning(report, '계정 잠금 임계값이 5 초과입니다.')
                pm.printWarning(report, '현재 임계값은 ' + limit + ' 입니다.')
                isSet = True
            else:
                pm.printNotice(report, '현재 임계값은 ' + limit + ' 입니다.')
                isSet = True
                isSafe = True
    f.close()

    if not isSet:
        pm.printWarning(report, '계정 잠금 임계값이 설정되어 있지 않습니다.')

    if isSafe:
        pm.printSafe(report)
    else:
        pm.printNotsafe(report)
        pm.printSolution(report, '[U-03] 조치 방법')
        pm.printSolution(report, '\t계정 잠금 임계값을 5이하로 설정하세요.')
        pm.printSolution(report, '\t\t텍스트 에디터를 이용하여 \"/etc/pam.d/common-auth\" 파일을 엽니다.')
        pm.printSolution(report, '\t\t아래의 내용을 수정 또는 추가하세요.')
        pm.printSolution(report, '\t\t순서가 중요하므로 수행문 최상단에 입력해.')
        pm.printSolution(report, '\t\tauth  required  pam_tally2.so ')
        pm.printSolution(report, '\t\t\tonerr=fail deny=5 unlock_time=120 no_magic_root')
        pm.printSolution(report, '\t\t  no_magic_root : root에게는 패스워드 잠금 설정을 적용하지 않음')
        pm.printSolution(report, '\t\t  deny=5        : 5회 입력 실패 시 계정 잠금')
        pm.printSolution(report, '\t\t  unlock_time   : 계정 잠김 후 설정 시간이 지나면 잠김 해제 (단위: 초)\n')

    report.close()

U03()
