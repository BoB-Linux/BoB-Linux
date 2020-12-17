#include "func.h"

void training_runlevel(void)
{
	system("clear");
	create_defdir();
	//////////////////////////////////////////////////////////////////////////////////////////////////////
	
	printf("이번에 학습할 명령어는 \"runlevel\"입니다.\n\n");
	printf("\"runlevel\" 명령어는 런 레벨(RunLevel)을 확인하는 명령어입니다.\n");
	next_line();
	
	printf("\"runlevel\" 명령어는 \"/usr/sbin/runlevel\"(으)로 있습니다.\n\n");
	next_line();

	printf("[실습] runlevel 명령어를 입력해보세요.\n");
	run_command("runlevel");
	next_line();

	printf("\n\n왼쪽에 표기된 것이 이전의 런 레벌이고, \n");
	printf("오른쪽에 표기된 것이 현재 런 레벨입니다.\n");
	next_line();
	
	printf("런 레벨을 따로 바꾸지 않았다면, 이전의 런 레벨은 'N'으로 표기됩니다.\n");
	next_line();
	
	printf("\"runlevel\"은 간단하게 런 레벨을 확인할 수 있는 명령어로\n");
	printf("런 레벨에 관한 자세한 내용은 \"init\" 명령어 트레이닝을 참고하시면 됩니다.\n");
	next_line();
	
	printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
	printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
	printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
	next_line();
	
	printf("\"runlevel\" 명령어의 학습이 끝났습니다.\n");
	printf("고생하셨습니다.\n");

	delete_defdir();

}
