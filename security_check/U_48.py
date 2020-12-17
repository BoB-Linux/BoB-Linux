# U-48 중
# 1.9 패스워드 최소 사용기간 설정
import printModule as pm

def U48():
    report = pm.openReport('U-48.txt')
    pm.printTitle(report, '[U-48] 패스워드 최소 사용기간 설정')

    isSafe = False
    isSet = False
    f = open('/etc/login.defs', 'r')
    for line in f:
        line = ''.join(line.split())
        index = line.find('PASS_MIN_DAYS')
        if index >= 0:
            # 주석인지 확인
            if '#' in line[0:index]:
                continue

            days = line[index+len('PASS_MIN_DAYS'):]
            if days == '':
                continue
            elif int(days) < 1:
                pm.printWarning(report, '패스워드 최소 사용기간이 1일 미만 입니다.')
                pm.printWarning(report, '현재 최소 사용기간은 ' + days + '일 입니다.')
                isSet = True
            else:
                pm.printNotice(report, '현재 패스워드 최소 사용기간은 ' + days + '일 입니다.')
                isSet = True
                isSafe = True
    f.close()

    if not isSet:
        pm.printWarning(report, '패스워드 최소 사용기간이 설정되어 있지 않습니다.')

    if isSafe:
        pm.printSafe(report)
    else:
        pm.printNotsafe(report)
        pm.printSolution(report, '[U-48] 조치 방법')
        pm.printSolution(report, '\t패스워드 최소 사용기간을 1일로 설정하세요.')
        pm.printSolution(report, '\t\t텍스트 에디터를 이용하여 \"/etc/login.defs\" 파일을 엽니다.')
        pm.printSolution(report, '\t\t아래의 내용을 수정 또는 추가하세요.')
        pm.printSolution(report, '\t\t  PASS_MIN_DAYS 1 (단위: 일)\n')

    report.close()

U48()
