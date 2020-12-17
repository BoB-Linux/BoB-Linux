# U-06 상
# 2.2 파일 및 디렉터리 소유자 설정
import printModule as pm

def U06():
    report = pm.openReport('U-06.txt')
    pm.printTitle(report, '[U-06] 파일 및 디렉터리 소유자 설정')
    pm.printNotice(report, 'U-06의 점검은 모든 파일을 검사하므로 상당한 시간이 소요됩니다.')
    pm.printNotice(report, '조치 방법을 참고하여 사용자가 직접 수행바랍니다.\n')

    pm.printSolution(report, '[U-06] 조치 방법')
    pm.printSolution(report, '\t소유자가 존재하지 않는 파일 및 디렉터리를 삭제하거나 소유자를 변경하세요.')
    pm.printSolution(report, '\t수정이 필요한 파일을 아래의 명령어로 검색합니다.')
    pm.printSolution(report, '\t\t# find / -nouser -print')
    pm.printSolution(report, '\t\t# find / -nogroup -print')
    pm.printSolution(report, '\tfind 뒤의 최상위 디렉터리 \"/\" 대신 필요한 경로를 입력하셔도 됩니다.')
    pm.printSolution(report, '\t대상 파일 혹은 디렉터리가 불필요할 경우에는 삭제합니다.')
    pm.printSolution(report, '\t필요한 경우에는 chown으로 소유자를 변경합니다.')
    pm.printSolution(report, '\t\t# chown <user_name> <file_name>\n')

    report.close()

U06()
