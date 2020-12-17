# 출력 모듈

# 글자색
C_END    = "\033[0m"
C_RED    = "\033[31m"
C_GREEN  = "\033[32m"
C_YELLOW = "\033[33m"

def openReport(filename):
    report = open('./' + filename, mode='w', encoding='utf-8')
    return report

def printTitle(report, string):
    print(string)
    report.write(string + '\n')

def printSafe(report):
    print('\t' + C_GREEN + '[검사결과] 안전합니다.' + C_END + '\n')
    report.write('\t[검사결과] 안전합니다.\n\n')

def printNotsafe(report):
    print('\t' + C_RED + '[검사결과] 보안 조치가 필요합니다.' + C_END + '\n')
    report.write('\t[검사결과] 보안 조치가 필요합니다.\n\n')

def printWarning(report, string):
    print('\t' + C_YELLOW + '[경고] ' + string + C_END)
    report.write('\t[경고] ' + string + '\n')

def printNotice(report, string):
    print('\t[알림] ' + string)
    report.write('\t[알림] ' + string + '\n')

def printSolution(report, string):
    print(string)
    report.write(string + '\n')
