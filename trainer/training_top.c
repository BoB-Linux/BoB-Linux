#include "func.h"

void training_top(void)
{
	system("clear");
	create_defdir();
	//////////////////////////////////////////////////////////////////////////////////////////////////////
	
	printf("이번에 학습할 명령어는 \"top\"입니다.\n\n");
	printf("\"top\" 명령어는 리눅스 시스템의 운용 상황을 볼 수 있는 명령어입니다.\n");
	next_line();
	
	printf("프로세스별 CPU 사용율, 메모리 점유률, 상태, 실행 시간 등을 볼 수 있습니다.\n\n");
	next_line();

	printf("[실습] \"top\" 명령어를 입력해보세요.\n");
	nothing_print_fake_run_command("top");
	printf("   PID USER      PR  NI    VIRT    RES    SHR S  %%CPU  %%MEM     TIME+ COMMAND  \n");
	printf("  1234 rookie    20   0  893548  93596  58916 R   1.1   2.2   1:30.65 TEST     \n");

	printf("\n\nPID는 ProcessID의 약자로, 각 프로세스를 구분하는 번호입니다.\n");
	printf("(위 결과에서 PID 1234는 'TEST'라는 프로그램을 가리킵니다.)\n");
	next_line();

	printf("USER는 해당 프로세스를 실행시킨 사용자의 이름입니다.\n");
	printf("(위 결과에서 'TEST'라는 프로그램을 실행한 사용자는 'user'라는 것을 의미합니다.)\n");
	next_line();

	printf("PR 또는 PRI는 Priority(우선순위)를 말하며,\n");
	printf("시스템이 NICE 값를 이용하여 계산한 실제 우선순위입니다.\n");
	next_line();
	
	printf("모든 프로세스는 PR값을 가지고 있으며, 그 범위는 1 ~ 139 까지 입니다.\n\n");
	printf("PR 1이 가장 우선순위가 높고, PR 139가 가장 우선순위가 낮다고 볼 수 있습니다.\n");
	printf("NI의 최소 값인 -20이 PR 100을 의미하며, NI의 최대 값인 19가 PR 139를 의미합니다.\n");
	next_line();
	
	printf("실제 \"top\"에서 보여주는 PR 값은 NI(-20 ~ 19) + 20 으로 예시는 아래와 같습니다.\n");
	printf("(즉 위 결과에서 PR 20은 실제 Priority 120, NI 값은 0으로 볼 수 있습니다.)\n");
	next_line();

	printf("NI는 NICE 값을 말하며, 사용자와 관리자가 조절할 수 있는 우선순위 값입니다.\n");
	next_line();
	
	printf("앞에서 언급한 것과 같이 범위는 -20 ~ 19로, 기본 값은 0입니다.\n");
	printf("(위 결과에서 NI 0은 해당 프로그램의 우선 순위가 기본 값인 것을 말합니다.)\n");
	next_line();
	
	printf("VIRT는 해당 프로세스의 가상 메모리 사용량,\n");
	printf("RES는 해당 프로세스의 물리적인 메모리 사용량,\n");
	printf("SHR는 해당 프로세스에 의해 사용된 공유메모리의 양을 말합니다.\n");
	next_line();

	printf("S는 Process State를 말하며, 현재 프로세스의 상태를 의미합니다.\n\n");
	printf("State의 값은 S(sleeping), R(running), W(swapped out process), Z(zombies)가 있습니다.\n");
	printf("(위 결과에서 State값은 R로 해당 프로그램이 현재 실행 중인 것을 의미합니다.)\n");
	next_line();

	printf("%%CPU는 CPU 사용율, %%MEM는 메모리 점유율을 나타냅니다.\n");
	printf("TIME+는 프로세스가 실행된 후 경과된 시간,\n");
	printf("COMMAND는 실행된 명령어나 프로세스 이름을 의미합니다.\n");
	next_line();
	
	system("clear");

	printf("\"top\" 명령어의 자주 쓰이는 옵션은 다음과 같습니다.(정렬)\n\n");
	printf("  [ shift + p } : cpu 사용량이 큰 순서로 정렬\n\n");
	printf("  [ shift + m ] : 메모리 사용량이 큰 순서로 정렬\n\n");
	printf("  [ shift + t ]	: 실행된 시간이 큰 순서로 정렬\n\n");
	next_line();
	
	system("clear");
	printf("\"top\" 명령어의 자주 쓰이는 옵션은 다음과 같습니다.(기능)\n\n");
	printf("  [ (실행 전) top -p [PID] ]   : 특정 프로세스만 모니터링\n\n");
	printf("  [ k 입력 후 PID 입력 ]       : 해당 프로세스 종료\n\n");
	printf("  [ r 입력 후 PID, NICE 입력 ] : 해당 프로세스 우선 순위 변경\n\n");
	printf("  [ space ]                    : 목록 갱신\n\n");
	printf("  [ q ]                        : top 프로그램 종료\n\n");
	printf("  [ d 입력 후 초(Sec) 입력 ]   : 지정된 초 마다 목록 갱신\n\n");
	next_line();

	printf("비슷한 명령어로는 \"ps\" 명령어가 있습니다.\n\n");
	printf("\"ps\" 명령어는 실행된 시점에서의 시스템 상태만 보여주지만,\n");
	printf("\"top\" 명령어는 주기적으로 시스템 상태를 갱신하여 보여주는 차이점이 있습니다.\n");
	next_line();
	
	printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
	printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
	printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
	next_line();
	
	printf("\"top\" 명령어의 학습이 끝났습니다.\n");
	printf("고생하셨습니다.\n");

	delete_defdir();

}
