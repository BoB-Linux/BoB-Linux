# U-46 중
# 1.8 패스워드 최소 길이 설정
import printModule as pm

def U46():
    report = pm.openReport('U-46.txt')
    pm.printTitle(report, '[U-46] 패스워드 최소 길이 설정')

    isSafe = False
    isSet = False
    f = open('/etc/login.defs', 'r')
    for line in f:
        line = ''.join(line.split())
        index = line.find('PASS_MIN_LEN')
        if index >= 0:
            # 주석인지 확인
            if '#' in line[0:index]:
                continue

            passLen = line[index+len('PASS_MIN_LEN'):]
            if passLen == '':
                continue
            elif int(passLen) < 8:
                pm.printWarning(report, '패스워드 최소 길이가 8자 미만입니다.')
                pm.printWarning(report, '현재 최소 길이는 ' + passLen + '자 입니다.')
                isSet = True
            else:
                pm.printNotice(report, '현재 패스워드 최소 길이는 ' + passLen + '자 입니다.')
                isSet = True
                isSafe = True
    f.close()

    if not isSet:
        pm.printWarning(report, '패스워드 최소 길이가 설정되어 있지 않습니다.')

    if isSafe:
        pm.printSafe(report)
    else:
        pm.printNotsafe(report)
        pm.printSolution(report, '[U-46] 조치 방법')
        pm.printSolution(report, '\t패스워드 최소 길이를 8자 이상으로 설정하세요.')
        pm.printSolution(report, '\t공공기관인 경우 9자 이상으로 설정하세요.')
        pm.printSolution(report, '\t\t텍스트 에디터를 이용하여 \"/etc/login.defs\" 파일을 엽니다.')
        pm.printSolution(report, '\t\t아래의 내용을 수정 또는 추가하세요.')
        pm.printSolution(report, '\t\t  PASS_MIN_LEN 8\n')

    report.close()

U46()
