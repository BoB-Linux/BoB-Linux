#include "func.h"

void training_kill(void)
{
	create_defdir();
	system("clear");
	//////////////////////////////////////////////////////////////////////////////////////////////////////

	printf("이번에 학습할 명령어는 \"kill\" 입니다.\n\n");

	printf("\"kill\" 명령어는 'PID'를 이용해 프로세스를 종료하는 명령어입니다.\n\n");
	printf("'PID'란 Process ID의 줄임말이며, 프로세스의 고유 번호를 의미합니다.\n");
	next_line();

	printf("\"kill\" 명령어의 실행 파일은 \"/usr/bin/kill\"(으)로 있습니다.\n");
	next_line();

	printf("사용법은 \"kill [옵션 or 시그널] [PID]\" 입니다.\n");
	next_line();

	printf("시그널을 통해 다양한 종료 옵션을 지정해줄 수 있으며\n");
	printf("시그널을 지정하지 않으면 기본값인 TERM(15번) 시그널로 설정됩니다.\n");
	printf("(ex. 'kill [PID]' -> 15번 TERM 시그널 전송)\n");
	next_line();

	printf("기타 세부 시그널 옵션을 보는 방법은 \"kill -l\" 명령어를 입력하면 됩니다.\n\n");
	next_line();
	system("kill -l");
	printf("\n위의 내용은 \"kill -l\"을 입력했을 때 출력되는 결과로 시그널 종류를 출력한 것입니다.\n");
	next_line();

	printf("[알아두면 좋은 시그널 옵션]은 다음과 같습니다.\n\n");
	printf("TERM (15번) = 기본 종료\n");
	printf("KILL (9번)  = 강제 종료\n");
	next_line();

	printf("특히 강제 종료(9번)는 최후의 수단으로 사용해야 합니다.\n");
	printf("프로세스를 강제 종료하게 되면 데이터가 유실될 수 있기 때문입니다.\n\n");
	printf("추천드리는 방법은 기본 종료(15번) 시그널을 여러 번 보내어 종료하는 것입니다.\n\n");
	next_line();

	printf("[실습] \"kill\" 명령어로 PID가 '1234'인 프로세스를 '강제 종료' 하십시오.\n");
	printf("사용법 : kill -[시그널 번호] [PID]\n");
	fake_run_command("kill -9 1234");
	printf("\nPID가 '1234'인 프로세스가 '강제 종료' 되었습니다.\n\n");
	next_line();

	printf("[실습] \"kill\" 명령어로 PID가 '5678'인 프로세스를 '정상 종료' 하십시오.\n");
	printf("사용법 : kill -[시그널 번호] [PID]\n");
	fake_run_command("kill -15 5678");
	printf("\nPID가 '5678'인 프로세스가 '정상 종료' 되었습니다.\n\n");
	next_line();

	printf("[실습] \"kill\" 명령어에 옵션을 넣지 않고\n");
	printf("PID가 '2020'인 프로세스를 '정상 종료' 하십시오.\n");
	printf("사용법 : kill [PID]\n");
	fake_run_command("kill 2020");
	printf("\nPID가 '2020'인 프로세스가 '정상 종료' 되었습니다.\n");
	next_line();

	printf("\"kill [PID]\"(은)는 \"kill -15 [PID]\"와 같이 '-15' 시그널을 준 것과 같습니다.\n");
	next_line();
	// 명령어 실습

	printf("프로세스를 종료하는 명령어 중에는 \"kill\" 명령어와 비슷한 \"killall\" 명령어가 있습니다.\n\n\n");
	next_line();

	printf("\"killall\" 명령어는 특정 프로세스를 한 번에 종료시키는 명령어입니다.\n\n");
	printf("권한을 필요로 하며, PID가 아닌 프로세스의 이름으로 종료시킵니다.\n");
	next_line();

	printf("사용법은 \"killall [옵션] [프로세스명]\" 입니다.\n");
	printf("[옵션]은 지정하지 않고 [프로세스명]만 입력해도 됩니다.\n");
	next_line();

	printf("\"killall 명령어의 자주 쓰이는 옵션은 다음과 같습니다.\n\n");
	printf("  [ -e ] : 긴 프로세스 이름에 일치해야 합니다.\n\n");
	printf("  [ -I ] : 대소문자를 구별하지 않고 프로세스 이름으로 종료합니다.\n\n");
	printf("  [ -y ] : 지정된 시간보다 이전 프로세스를 종료합니다.\n\n");
	printf("  [ -o ] : 지정된 시간보다 이후 프로세스를 종료합니다.\n\n");
	printf("  [ -i ] : 프로세스를 종료 하기 전 종료 여부 메세지를 확인합니다.\n\n");
	printf("  [ -u ] : 지정된 사용자로 실행된 프로세스만 종료합니다.\n\n");
	next_line();

	printf("\"killall\" 명령어는 이 트레이닝에서는 실습을 하지 않겠습니다.\n");
	printf("특정 프로세스들을 한 번에 종료하고 싶을 때 사용하시면 됩니다.\n");
	next_line();

	printf("현재 실행 중인 프로세스의 'PID'를 확인하는 방법으로는\n");
	printf("\"ps\" 명령어나 \"top\" 명령어를 사용하시면 됩니다.\n");
	next_line();

	printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
	printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
	printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
	next_line();

	printf("\"kill\" 명령어와 \"killall\" 명령어의 학습이 끝났습니다.\n");
	printf("고생하셨습니다.\n");
	delete_defdir();
}
