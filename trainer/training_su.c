#include "func.h"

void training_su(void)
{
	system("clear");
	create_defdir();
	//////////////////////////////////////////////////////////////////////////////////////////////////////
	
	printf("이번에 학습할 명령어는 \"su\"입니다.\n");
	printf("\"su\" 명령어는 사용자를 전환하기 위한 명령어입니다.\n");
	next_line();

	printf("사용법은 : \"su [전환할 사용자 이름]\" 과 같이 사용합니다.\n");
	printf("ex) su user1\n");
	printf("위 예시와 같이 사용하면 전환하기 전의 사용자 '환경 변수'를 사용합니다.\n\n");
	next_line();

	printf("[실습] 가상으로 su 명령어를 사용해 'test' 사용자로 전환해보세요.\n");
	fake_run_command("su test");
	
	printf("Password:\n");
	printf("\n\n\"su\" 명령어로 계정을 전환할 때는 바꿀 계정의 비밀번호를 입력해야 합니다.\n");
	next_line();
	
	printf("적절한 패스워드를 입력한 후에는 아래와 같이 프롬프트 창이 변화합니다.\n");
	printf("test@localhost:$\n");
	next_line();
	
	printf("프롬프트에서 표시되는 계정명이 'test'로 변화되어\n");
	printf("사용자가 전환되었음을 알려줍니다.\n");
	next_line();
	
	printf("\"su - [전환할 사용자 이름]\" 과 같이 중간에 - 를 추가하면\n");
	printf("해당 사용자의 홈 디렉터리로 이동합니다.\n");
	next_line();
	
	printf("또한 해당 전환 대상 사용자의 '환경 변수'를 사용하게 됩니다.\n");
	next_line();
	
	printf("지금은 '환경 변수'라는 개념에 대해 잘 모를 수 있지만,\n");
	printf("리눅스의 경험이 쌓이고 나면 어떤 의미인지 이해할 수 있을 것입니다.\n");
	next_line();
	
	printf("환경 변수의 개념을 다루고 있는 명령어로는 env, export, set 등이 있습니다.\n");
	printf("해당 명령어를 학습하여 환경 변수의 개념을 익혀보시길 바랍니다.\n");
	next_line();
	
	printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
	printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
	printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
	next_line();
	
	printf("\"su\" 명령어의 학습이 끝났습니다.\n");
	printf("고생하셨습니다.\n");

	delete_defdir();
}
