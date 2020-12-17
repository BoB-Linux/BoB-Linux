#include "func.h"

void training_shutdown(void)
{
	system("clear");
	create_defdir();
	//////////////////////////////////////////////////////////////////////////////////////////////////////

	printf("이번에 학습할 명령어는 \"shutdown\"입니다.\n\n");
	printf("\"shutdown\" 명령어는 시스템을 종료하거나 재부팅 하는 명령어입니다.\n");
	next_line();
	
	printf("\"shutdown\" 명령어의 실행 파일은 \"/usr/sbin/shutdown\"(으)로 있습니다.\n");
	next_line();
	
	printf("사용법은 : \"shutdown [옵션]\"입니다.\n");
	printf("ex) shutdown now\n");
	next_line();
	
	printf("\"shutdown\" 명령어의 자주 쓰이는 옵션은 다음과 같습니다.\n\n");
	printf("  [ -h now     ] : 즉시 시스템 종료\n\n");
	printf("  [ -h <숫자>  ] : <숫자> 분 후 시스템 종료\n\n");
	printf("  [ -h <hh:mm> ] : <hh:mm> 시간에 시스템 종료 (ex. 12:00)\n\n");
	next_line();

	printf("[실습] shutdown 명령어를 사용하여 즉시 시스템이 종료되게 해보세요.\n");
	printf("(실습에서는 실제로 종료되지는 않습니다.)\n");
	fake_run_command("shutdown -h now");

	// 시스템 즉시 종료 실습
	printf("\n\n시스템 재부팅은 'shutdown -r [사용 옵션]' 과 같이 사용하며,\n");
	printf("시스템 강제 종료는 'shutdown -P [사용 옵션]'를 입력하면 됩니다.\n");
	printf("[사용 옵션]은 시스템 종료와 동일합니다.\n\n");
	next_line();

	printf("[실습] shutdown 명령어를 사용하여 5분 후 시스템이 재부팅 되게 해보세요.\n");
	printf("(실습에서는 실제로 종료되지는 않습니다.)\n");
	fake_run_command("shutdown -r 5");
	
	// 시스템 예약 재부팅 실습

	printf("\n\nshutdown 예약 취소는 'shutdown -c'를 입력하면 됩니다.\n");
	printf("[실습] shutdown 예약 명령을 취소 해보세요.\n");
	fake_run_command("shutdown -c");
	
	// 예약 취소 실습
	printf("비슷하게 시스템 종료를 수행하는 명령어로는 'init', 'poweroff', 'halt' 가 있으며\n");
	printf("시스템 재부팅을 수행하는 명령어로는 'init', 'reboot'가 있습니다.\n");
	next_line();
	
	printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
	printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
	printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
	next_line();
	
	printf("\"shutdown\" 명령어의 학습이 끝났습니다.\n");
	printf("고생하셨습니다.\n");
	
	
    delete_defdir();
}
