#include "func.h"

int run_command(char valid_cmd[]);
void next_quit();

void training_dd(void)
{
	create_defdir();
	system("clear");

	//////////////////////////////////////////////////////////////////////////////////////////////////////

	//실습할 파일&디렉토리 제공
	system("mkdir dir1 dir2");
	system("echo hello linux > dir1/file1");


	printf("이번에 학습할 명령어는 \"dd\"입니다.\n\n");

	printf("\"dd\" 명령어는 'Data Description'을 의미하며\n");
	printf("파일을 변환하거나 복사하는 것이 주 목적인 명령어 입니다.\n");
	next_line();

	printf("보통 \"dd\"는 파일을 파티션이나 디스크 단위로 백업할 때 사용하는 명령어입니다.\n");
	next_line();

	printf("\"dd\" 명령어의 실행 파일은 \"/usr/bin/dd\"(으)로 있습니다.\n");
	next_line();

	printf("사용법은 \"dd [operand] ...\" 또는 \"dd [옵션]\" 입니다.\n");
	printf("ex) dd if=/dev/zero of=path/to/file bs=512 count=1 conv=notrunc\n");
	next_line();

	printf("\"dd [operand] ...\" 형식인 경우\n");
	printf("'dd [if=복사할 디스크/파티션] [of=저장 될 파일] [단위명=사이즈]'를 입력해 사용합니다.\n");
	next_line();

	printf("예시를 들자면 \"dd if=/dev/sda of=/dev/sdb bs=512\"(이)라고 하였을 때\n");
	printf("'/dev/sda'(을)를 '/dev/sdb'(으)로 블록 사이즈 '512 단위'로 백업하는 것입니다.\n\n");
	next_line();

	system("clear");
	printf("\"dd\"에서 자주 쓰이는 [operand]는 다음과 같습니다.\n\n");
	printf("  [ if=<FILE> ]      : 입력 대상이 될 파일을 지정합니다.\n\n");
	printf("  [ of=<FILE> ]      : 출력 대상이 될 파일을 지정합니다.\n\n");
	printf("  [ bs=<BYTES> ]     : 한번에 지정된 <BYTES> bytes 단위로 읽고 씁니다.\n");
	printf("                       'ibs'와 'obs'를 한번에 지정한 것과 같습니다.\n\n");
	printf("  [ ibs=<BYTES> ]    : 한번에 지정된 <BYTES> bytes 단위로 읽습니다.\n\n");
	printf("  [ obs=<BYTES> ]    : 한번에 지정된 <BYTES> bytes 단위로 출력합니다.\n\n");
	printf("  [ cbs=<BYTES> ]    : 한번에 지정된 <BYTES> bytes 단위로 변환합니다.\n\n");
	printf("  [ count=<BLOCKS> ] : 입력된 블록 크기만큼 복사합니다.\n\n");
	printf("  [ conv=<CONVS> ]   : 쉼표 기호로 구분된 것을 파일로 변환합니다.\n\n");
	printf("  [ iflag=<FLAGS> ]  : 쉼표 기호로 구분된 파일을 읽습니다.\n\n");
	printf("  [ oflag=<FLAGS> ]  : 쉼표 기호로 구분된 파일을 씁니다.\n\n");
	printf("  [ seek=<BLOCKS> ]  : 지정된 단위만큼 obs크기를 건너뛰고 출력합니다.\n\n");
	printf("  [ skip=<BLOCKS> ]  : 지정된 단위만큼 ibs크기를 건너뛰고 입력합니다.\n\n");
	next_line();

	system("clear");
	printf("'BYTES'의 단위로는 다음과 같습니다.\n\n\n");
	printf(" c   : Character, 1byte\n\n");
	printf(" w   : Word, 2byte\n\n");
	printf(" b   : Block, 512byte\n\n");
	printf(" kb  : 1000byte\n\n");
	printf(" k   : Kilo byte, 1024byte\n\n");
	printf(" MB  : 1000 * 1000byte\n\n");
	printf(" M   : 1024 * 1024byte\n\n");
	printf(" GB  : 1000 * 1000 * 1000byte\n\n");
	printf(" G   : 1024 * 1024 * 1024byte\n\n");
	printf(" etc) T, P, E, Z, Y\n\n\n");
	next_line();

	system("clear");
	system("ls -al");

	printf("\n\n\"ls -al\" 명령을 통해 현재 디렉토리의 목록을 확인해보면\n\n");
	printf("'dir1' 디렉토리와 'dir2' 디렉토리가 있고\n");
	printf("'dir1' 디렉토리에는 'file1' 파일이 있습니다.\n\n");
	next_line();

	printf("[실습] \"dd\"를 사용하여 디스크 \"if=dir1/file1\"(을)를 \"of=dir2/file1\"(으)로\n");
	printf("블록 사이즈 \"bs=1M\" 단위로 읽고 쓰도록 명령어를 입력해보세요.\n");
	printf("사용법 : dd if=[복사할 디스크] of=[복사되어 출력될 디스크] [단위=사이즈]\n");
	just_run_command("dd if=dir1/file1 of=dir2/file1 bs=1M");
	next_line();

	printf("\n");
	system("ls -al dir2");

	printf("\n\n위의 출력된 결과는 \"dir2\" 디렉토리에 있는 파일들을 조회한 것입니다.\n\n");
	printf("\"dir1/file1\"의 내용이 \"dir2/file1\"(으)로 성공적으로 써진 것을 확인할 수 있습니다.\n\n");
	next_line();

	printf("\"dd\" 명령어는 실무에서도 자주 쓰일 수 있는 명령어 중 하나이며\n");
	printf("파일의 헤더, 디스크의 레이블, 파일 시스템의 inode 정보들까지도 전부\n");
	printf("읽고 쓰는게 가능합니다.\n\n");
	next_line();

	printf("리눅스에서는 모든 디바이스를 파일화하여 관리하기 때문에\n");
	printf("\"dd\" 명령어를 잘 숙지해두면 파일 시스템과 관련하여 작업할 때 더욱 편리해질 것입니다.\n\n");
	printf("파일 시스템이나 리눅스 시스템에 대하여 공부하거나 사용 중이시라면\n");
	printf("꼭 숙지해두시길 바랍니다.\n");
	next_line();

	printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
	printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
	printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
	next_line();

	printf("\"dd\" 명령어의 학습이 끝났습니다.\n");
	printf("고생하셨습니다.\n");

	delete_defdir();
}

