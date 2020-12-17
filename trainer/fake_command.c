#include "func.h"

// fake_command는 사용자 계정을 보여주지 않고 입력만 받음
// 예를 들어 passwd 명령어를 통해 "Enter new UNIX password: [커서]" 처럼 표시할 때 사용
// 이 때 print_msg를 "Enter new UNIX password: "로 설정하여 사용하면 됨.
int fake_command(char valid_cmd[], char print_msg[])
{
	char cmd[CMD_SIZE];
	char dir_buf[DIR_SIZE];
	while (1)
	{
		printf("%s", print_msg);
		fgets(cmd, sizeof(cmd), stdin);

		// 나머지 입력 값 제거
        	cmd[strlen(cmd)-1] = '\0';

		// 입력값 검증 부분
		if (!strncmp(cmd, valid_cmd, strlen(valid_cmd)) && strlen(cmd) == strlen(valid_cmd))
		{
			printf("잘 입력하셨습니다.\n\n");
			// fakecommand에서는 입력 값 검증만 수행하며, 실제로 명령어를 실행시키지는 않음
			break;
		}
		else
		{
			printf("잘못된 명령어를 입력하셨습니다.\n");
		}
	}
	return 0;
}
