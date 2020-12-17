#include "func.h"

void training_uname()
{
	create_defdir();
	system("clear");

	printf("이번에 학습할 명령어는 \"uname\"입니다.\n\n");
	printf("uname은 시스템의 정보를 출력해줍니다.\n");
	next_line();
	
	printf("\"uname\" 명령어의 실행파일은 \"/usr/bin/uname\"(으)로 있습니다.\n");
	next_line();
	
	printf("\"uname\" 명령어의 사용법은 : \"uname [옵션]\"입니다.\n");
	next_line();
	
	printf("옵션에는 여러가지가 있으나 -a 옵션이 가장 널리 사용됩니다.\n");
	printf("  [ -a (--all) ] : 모든 내용을 출력\n\n");
	next_line();
	
	printf("[실습] uname을 입력하여 내용을 확인해보세요.\n");
	just_run_command("uname");
	
	printf("\n\n단순히 uname 만 입력하면 현재 시스템이 어떤 커널을 사용하는지만 출력합니다.\n\n");
	printf("[실습] 이번에는 -a 옵션을 사용하여 전체 내용을 확인해보세요.\n");
	just_run_command("uname -a");

	printf("\n\nuname -a 로 전체 정보를 확인 할 수 있습니다.\n");
	printf("따라서 기본 옵션보다 꽤나 다양한 정보가 출력됩니다.\n");
	next_line();
	
	printf("uname -a 명령어에서 각 필드는 띄어쓰기로 구분됩니다.\n");
	printf("출력된 정보가 의미하는 것은 다음과 같습니다.\n\n");
	printf("1. 커널\n");
	printf("2. 호스트명\n");
	printf("3. 커널 릴리즈 버전\n");
	printf("4. 커널 빌드 버전과 빌드 날짜\n");
	printf("5. 아키텍처\n6. 운영체제\n");
	next_line();
	
	printf("이외에도, \"uname\" 명령어의 자주 쓰이는 옵션은 다음과 같습니다.\n\n");
	printf("  [ -i (--hardware-platfrom) ]   : 시스템 하드웨어 플랫폼의 정보 출력\n\n");
	printf("  [ -m 옵션(--machine) ]          : 시스템 하드웨어 타입 정보 출력\n\n");
	printf("  [ -n 옵션(-nodename) ]          : 네트워크 노드 호스트 이름에 대한 정보 출력\n\n");
	printf("  [ -o 옵션(--operating-system) ] : 운영체제(OS) 정보 출력\n\n");
	printf("  [ -p 옵션(--processor) ]        : 프로세서 정보를 출력\n\n");
	printf("  [ -r 옵션(--kernel-release) ]   : 운영체제의 배포 버전을 출력\n\n");
	next_line();
	
	printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
	printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
	printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
	next_line();
	
	printf("\"uname\" 명령어의 학습이 끝났습니다.\n");
	printf("고생하셨습니다.\n");

	delete_defdir();
}
