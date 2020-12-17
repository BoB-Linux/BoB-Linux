#include "func.h"

void training_chown(void)
{
	create_defdir();

	//////////////////////////////////////////////////////////////////////////////////////////////////////

	//실습할 파일&디렉토리 제공
	system("touch file1");

	system("clear");
	printf("이번에 학습할 명령어는 \"chown\" 입니다.\n\n");

	printf("\"chown\"는 파일이나 디렉토리의 소유권 및 그룹 소유권을 변경하는 명령어입니다.\n\n");
	next_line();

	printf("\"chown\" 명령어의 실행 파일은 \"/usr/bin/chown\"(으)로 있습니다.\n");
	next_line();

	printf("사용법은 \"chown [옵션] [소유자][:그룹] [파일 혹은 디렉토리]\" 입니다.\n");
	printf("ex1) chown rookie test.txt\n");
	printf("ex2) chown rookie /home/rookie/testdir\n");
	next_line();

	printf("[옵션]은 선택 사항이며 해당 명령어에 지정할 옵션을 지정합니다.\n\n");
	printf("[소유자]는 소유권을 부여해줄 사용자를 지정합니다.\n\n");
	printf("[그룹]은 선택 사항이며 소유권을 부여해줄 그룹을 지정합니다.\n\n");
	printf("[파일 혹은 디렉토리]는 소유권을 변경할 파일명이나 디렉토리명을 입력하여 사용합니다.\n\n\n");
	next_line();

	printf("\"chown\" 명령어의 자주 쓰이는 옵션은 다음과 같습니다.\n\n");
	printf("  [ -R (--recursive ]\n");
	printf("디렉토리 내부의 모든 하위 디렉토리와 파일의 소유 권한을 변경합니다.\n\n");
	printf("  [ -c (--change ]\n");
	printf("변경 정보를 출력합니다.\n\n");
	printf("  [ -f (--silent, --quite ]\n");
	printf("중요한 오류메시지가 아닌 경우 출력하지 않습니다.\n\n");
	printf("  [ -h (--no-dereference ]\n");
	printf("심볼릭 링크 소유자도 변경합니다.\n\n");
	next_line();

	system("ls -al");
	printf("\n\n현재 디렉토리에 'file1' 파일이 있습니다.\n\n");
	next_line();

	printf("[실습]\"chown\" 명령어를 사용하여 'file1'의 소유자를 'test'로 변경해보세요.\n");
	printf("사용법 : chown [소유자] [파일]\n");
	fake_run_command("chown test file1");
	next_line();

	printf("\n\n-rw-r--r--  1 test %s   0 mm월  dd hh:mm file1\n", getlogin());
	printf("\n명령어가 잘 실행되었다면, 소유자가 'test'로 변경되었을 것입니다.\n\n");
	next_line();

	printf("[실습] \"chown test:test file1\"(을)를 입력하여 'file1'의 그룹도 변경해보세요.\n");
	printf("사용법 : chown [소유자]:[그룹] [파일]\n");
	fake_run_command("chown test:test file1");
	next_line();

	printf("\n\n-rw-r--r--  1 test test   0 mm월  dd hh:mm file1\n");
	printf("\n명령어가 잘 실행되었다면, 소유자와 그룹 모두 'test'로변경되었을 것입니다.\n\n");
	next_line();

	printf("\"chown\" 명령어에서 사용자를 지정할때 사용자 이름, 그룹 이름을 직접 입력하기도 하지만\n");
	printf("사용자 이름, 그룹 이름 대신 UID, GID를 사용하여 소유권을 부여할 수도 있습니다.\n\n");
	next_line();

	system("clear");
	printf("[UID]\n\n\n");
	printf("UID란 유저 아이디를 의미하는 것으로 각 사용자마다 부여된 사용자 식별 번호이며\n");
	printf("슈퍼 유저의 UID는 0입니다.\n\n");
	printf("각 사용자의 UID는 '/etc/passwd'에서 확인할 수 있습니다.\n\n");
	next_line();

	printf("[GID]\n\n\n");
	printf("마찬가지로 GID란 그룹 아이디를 의미하는 것으로 각 그룹마다 부여된 그룹 식별 번호이며\n");
	printf("슈퍼 그룹의 GID는 0입니다.\n\n");
	printf("각 그룹의 GID는 '/etc/passwd'와 '/etc/group'에서 확인할 수 있습니다.\n\n");
	next_line();

	printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
	printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
	printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
	next_line();

	printf("chown 명령어의 학습이 끝났습니다.\n");
	printf("고생하셨습니다.\n");

	delete_defdir();

}

