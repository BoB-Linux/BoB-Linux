#include "func.h"

void training_ps(void)
{
	create_defdir();

	system("clear");

	printf("이번에 학습할 명령어는 \"ps\" 명령어입니다.\n\n");
	printf("\"ps\" 명령어는 \"Process Stat\"의 약자이고\n");
	printf("현재 실행 중인 프로세스를 확인할 수 있는 명령어입니다.\n");
	next_line();

	printf("\"ps\" 명령어의 실행 파일은 \"/usr/bin/ps\"(으)로 있습니다.\n");
	next_line();

	printf("\"ps\" 명령어와 비슷한 역할을 하는 \"top\" 이라는 명령어가 있습니다.\n");
	next_line();

	printf("사용법은 \"ps [옵션]\"이 전부입니다.\n");
	printf("\"ps\" 명령어는 뒤에 오는 옵션에 따라 다른 결과를 보여줍니다.\n");
	next_line();

	printf("주로 \"ps -ef\"와 \"top\" 두 명령어를 통해 CPU 사용률과 사용 중인 프로세스를 확인합니다.\n");
	next_line();

	printf("\"ps\" 명령어의 옵션 표기법은\n");
	printf("\"Unix 시스템\"인지 \"BSD 계열 시스템\"인지 \"GNU\"인지에 따라 달라집니다.\n");
	next_line();

	printf("\"Unix 시스템\"에서는 옵션 앞에 대시(dash, '-') '하나'만 사용합니다.\n");
	next_line();
	
	printf("\"BSD 계열 시스템\"에서는 옵션 앞에 대시(dash, '-')를 \"사용하지 않습니다.\"\n");
	next_line();
	
	printf("\"GNU\"에서는 옵션 앞에 대시(dash, '-')를 '두 개'를 사용합니다.\n");
	next_line();

	printf("\"ps\" 명령어에서 같은 옵션 문자여도\n");
	printf("대시(dash, '-')가 있는지, 하나인지, 둘인지에 따라 결과가 다릅니다.\n");
	next_line();

	printf("그렇다고 하여 BSD 계열 시스템 표기 방식을 Unix 시스템에서 사용 못하고\n");
	printf("Unix 시스템 표기 방식을 GNU에서 사용 못하는 것은 아닙니다.\n");
	next_line();

	printf("옵션 없이 \"ps\"만 입력하면 현재 Shell(쉘)이나 터미널에서 실행한\n");
	printf("사용자 프로세스에 대한 정보를 출력합니다.\n\n");
	next_line();

	printf("[실습] \"ps\"라고 입력하여 출력을 확인해보세요.\n");
	just_run_command("ps");

	printf("\n\n위에 보이시는 출력은 현재 동작 중인 프로세스들을 보여준 것입니다.\n");
	next_line();

	printf("\"PID\"는 프로세스 번호이고\n\n");
	printf("\"TTY\"는 몇 번째 터미널인지 터미널 번호이고\n\n");
	printf("\"TIME\"은 해당 프로세스가 사용한 CPU 시간의 양이고\n\n");
	printf("\"CMD\"는 프로세스가 실행 중인 명령이 무엇인지 보여줍니다.\n\n");
	next_line();
	
	system("clear");
	printf("\"ps\" 명령어의 자주 쓰이는 옵션들은 다음과 같습니다.\n");
	printf("Unix 계열 시스템 표기 방식\n\n");
	printf("  [ -A ] : 모든 프로세스를 출력합니다.\n\n");
	printf("  [ -a ] : 일반적으로 로그인 쉘을 제외하고 데몬 프로세스처럼 \n");
	printf("           터미널에 종속되지 않은 모든 프로세스를 출력합니다.\n\n");
	printf("  [ -e ] : 커널 프로세스를 제외한 모든 프로세스를 출력합니다.\n\n");
	printf("  [ -f ] : 유닉스 방식으로 출력해줍니다. (UID, PID, PPID 등이 함께 표시됩니다.)\n\n");
	printf("  [ -l ] : 긴 포맷으로 보여줍니다.\n\n");
	printf("  [ -M ] : 64bit 프로세스들을 보여줍니다.\n\n");
	printf("  [ -m ] : 프로세스들 뿐만 아니라 커널 쓰레드들도 보여줍니다.\n\n");
	printf("  [ -p ] : 특정 PID를 지정하여 보여줄 때 사용합니다.\n\n");
	printf("  [ -r ] : 현재 실행 중인 프로세서를 보여줍니다.\n\n");
	printf("  [ -u ] : 특정 사용자의 프로세스 정보를 확인할 때 사용합니다. \n");
	printf("           (기본값으로는 현재 사용자로 되어있습니다.)\n\n");
	printf("  [ -o ] : 옵션 뒤에 오는 값으로 적인 항목들만 보여줍니다.\n\n");
	next_line();

	printf("Unix 계열 시스템 표기 방식으로는 \"ps -ef\"가 자주 쓰입니다.\n");
	next_line();
	
	system("clear");
	printf("BSD 계열 시스템 표기 방식\n\n");
	printf("  [ a ] : 터미널과 연관된 모든 프로세스를 출력하는 옵션입니다.\n");
	printf("          (보통 x 옵션과 같이 쓰여 모든 프로세스를 출력할 때 사용합니다.\n\n");
	printf("  [ l ] : 프로세스의 정보를 길게 보여주는 옵션입니다.\n\n");
	printf("  [ u ] : 프로세스의 소유자를 기준으로 출력합니다.\n");
	printf("          (\"ps ax\"만 사용하면 user 정보가 안뜨기 때문에\n");
	printf("          보통 \"ps aux\"와 같이 사용합니다.\n\n");
	printf("  [ x ] : 데몬 프로세스처럼 터미널에 종속되지 않는 프로세스들을 출력합니다.\n");
	printf("          (보통 'a' 옵션과 같이 사용되어 모든 프로세스를 출력할 때 사용합니다.\n\n");
	next_line();

	printf("BSD 계열 시스템 표기 방식으로는 \"ps aux\"가 자주 쓰입니다.\n");
	next_line();
	
	system("clear");
	printf("명령어를 실습해보기 전에 \"ps [옵션]\" 명령의 결과에 나오는\n");
	printf("항목들에 대해서 알아보겠습니다.\n\n");
	
	printf(" PPID    : 부모 프로세스 ID를 보여줍니다.\n");
	printf(" PID     : 프로세스의 식별 번호를 보여줍니다.\n");
	printf(" UID     : Unix System 계열에서 나타나는 항목으로 프로세스 소유자의 이름을 보여줍니다.\n");
	printf(" USER    : BSD 계열에서 나타나는 항목으로 프로세스 소유자 이름을 보여줍니다.\n");
	printf(" %%CPU    : CPU 사용 비율의 추정값을 보여줍니다.(BSD)\n");
	printf(" %%MEM    : 메모리의 사용 비율의 추정값을 보여줍니다.(BSD)\n");
	printf(" VSZ     : K 단위 또는 페이지 단위의 가상메모리 사용량을 보여줍니다.\n");
	printf(" RSS     : 실제 메모리 사용량을 보여줍니다. (Resident Set Size)\n");
	printf(" TTY     : 프로세스와 연결된 터미널을 보여줍니다.\n");
	printf(" S, STAT : 현재 프로세스의 상태 코드를 보여줍니다.\n");
	printf("           (S : Unix System, STAT : BSD)\n");
	printf(" TIME    : 총 CPU 사용 시간을 보여줍니다.\n");
	printf(" C, CP   : 짦은 기간 동안의 CPU 사용률을 보여줍니다.\n");
	printf("           (C : Unix System, CP : BSD)\n");
	printf(" CMD     : 프로세스가 실행 중인 명령어를 보여줍니다.\n");
	printf(" STIME   : 프로세스가 시작된 시간 혹은 날짜를 보여줍니다.\n");
	printf(" F       : 프로세스의 플래그를 보여줍니다.\n");
	printf(" PRI     : 실제로 실행되는 우선 순위를 보여줍니다.\n");
	printf(" NI      : nice 우선 순위 번호를 보여줍니다.\n\n");
	next_line();
	
	system("clear");
	printf("이제 \"ps\" 명령어에 Unix 표기 방식과 BSD 표기방식에서\n");
	printf("자주 쓰이는 옵션 두개만 실습해보겠습니다.\n\n");
	next_line();

	printf("[실습] \"ps -ef\"를 입력하여 프로세스 정보들을 확인해보세요.\n");
	just_run_command("ps -ef");

	printf("\n\n 잘 입력하셨다면 프로세스 정보들이 보일 것입니다.\n");
	next_line();

	printf("\"ps -ef\"는 Unix 시스템 표기 방식이며, BSD 계열 시스템 표기 방식의 \"ps aux\"처럼\n");
	printf("시스템에 동작 중인 모든 프로세스를 자세히 출력합니다.\n");
	next_line();

	printf("\"ps\" 명령어의 출력값을 한 페이지씩 보고 싶다면\n");
	printf("\"ps\" 명령어를 입력할 때 \"more\" 명령어를 파이프(' | ')로 이어서 입력하면 됩니다\n\n");
	printf("나오고 싶으실 때는 'quit'를 의미하는 'q' 키를 누르시면 됩니다.\n\n");
	next_line();
	
	system("clear");
	
	printf("[실습] \"ps -ef | more\"라고 입력하여 결과를 한 페이지씩 확인해보세요.\n");
	just_run_command("ps -ef | more");

	printf("\n\n잘 입력하셨다면\"ps -ef\"의 결과를 한 페이지씩 보실 수 있었을 것입니다.\n\n");
	next_line();
	
	system("clear");

	printf("[실습] 이번에는 \"ps aux\"를 입력하여 프로세스 정보들을 확인해보세요.\n");
	just_run_command("ps aux");

	printf("\n\n잘 입력하셨다면 \"ps -ef\"의 결과보다 더 늘어난 항목과 결과를 보실 수 있을 것입니다.\n");
	next_line();

	printf("이렇게 프로세스의 상태 정보를 알 수 있는 \"ps\" 명령어에 대해 배워보았습니다.\n");
	next_line();

	printf("\"ps\" 명령어의 옵션은 위에 나온 것들 말고도 여러가지가 있습니다.\n");
	next_line();

	printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
	printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
	printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
	next_line();

	printf("\"ps\" 명령어의 학습이 끝났습니다.\n고생하셨습니다.\n");

	delete_defdir();
}
