#include "func.h"

void training_reboot(void)
{
	system("clear");
	create_defdir();
	//////////////////////////////////////////////////////////////////////////////////////////////////////
	printf("이번에 학습할 명령어는 \"reboot\"입니다.\n\n");
	printf("reboot 명령어는 시스템을 재부팅하는 명령어입니다.\n");
	next_line();
	
	printf("\"reboot\" 명령어의 실행 파일은 \"/usr/sbin/reboot\"(으)로 있습니다.\n");
	next_line();
	
	printf("사용법은 : \"reboot [옵션]\"입니다.\n");
	printf("ex) reboot -f\n");
	next_line();
	
	printf("'-f 옵션을 주어 강제 재부팅이 가능합니다.\n\n");
	next_line();

	printf("[실습] \"reboot\" 명령어를 사용하여 시스템을 '강제 재부팅'해보세요.\n");
	printf("(실제 적용되지는 않습니다.)\n");
	fake_run_command("reboot -f");

	printf("\n\n비슷하게 시스템 재부팅을 수행하는 명령어로는 \"shutdown\", \"init\"이 있으며,\n");
	printf("시스템 종료를 수행하는 명령어로는 \"shutdown\", \"init\", \"halt\", \"poweroff\" 가 있습니다.\n");
	next_line();
	       
	printf("\"reboot\"와 비슷한 명령어로는 \"shutdown 명령어의 -r 옵션\", \"init 6\"가 있습니다.\n");  
	next_line();
	
	printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
	printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
	printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
	next_line();
	       
	printf("\"reboot\" 명령어의 학습이 끝났습니다.\n");
	printf("고생하셨습니다!\n");
	next_line();
	
	delete_defdir();
}
