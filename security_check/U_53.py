# U-53 하
# 1.14 사용자 shell 점검
import printModule as pm

def U53():
    report = pm.openReport('U-53.txt')
    pm.printTitle(report, '[U-53] 사용자 shell 점검')

    names = ['daemon',   \
             'bin',      \
             'sys',      \
             'adm',      \
             'games',    \
             'listen',   \
             'nobody',   \
             'nobody4',  \
             'noaccess', \
             'diag',     \
             'operator', \
             'gopher']

    f = open('/etc/passwd', 'r')
    isNologin = True

    for line in f:
        splitLine = line.split(':')
        name = splitLine[0]
        if name in names:
            shell = splitLine[6]
            # KISA 매뉴얼에는 /sbin/nologin 이지만 우분투는 /usr/sbin/nologin 이다.
            if  ( shell.find('/usr/sbin/nologin') < 0 )  \
            and ( shell.find('/bin/false') < 0 )         \
            and ( shell.find('/sbin/nologin') < 0 ):
                isNologin = False
                pm.printWarning(report, name + ' 계정의 로그인이 가능합니다.')

    pm.printNotice(report, '일반적으로 UID 1000 미만 60000 이상의\n\t       시스템 계정(sync 제외)의 확인이 필요합니다.')

    if isNologin:
        pm.printSafe(report)
    else:
        pm.printNotsafe(report)
        pm.printSolution(report, '[U-53] 조치 방법')
        pm.printSolution(report, '\t로그인이 필요하지 않은 계정에 대해 nologin 쉘로 변경하세요.')
        pm.printSolution(report, '\t\t텍스트 에디터를 이용하여 \"/etc/passwd\" 파일을 엽니다.')
        pm.printSolution(report, '\t\t해당 계정의 항목의 맨 마지막 필드인 로그인 쉘을.')
        pm.printSolution(report, '\t\t우분투 기준으로 \"/usr/sbin/nologin\"으로 변경하세요.\n')

    report.close()

U53()
