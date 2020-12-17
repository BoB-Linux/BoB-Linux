#include "func.h"

void training_lsblk(void)
{
	create_defdir();
	system("clear");

	//////////////////////////////////////////////////////////////////////////////////////////////////////

	printf("이번에 학습할 명령어는 \"lsblk\" 입니다.\n\n");

	printf("\"lsblk\" 명령어는 'list block devices'의 약자입니다.\n");
	next_line();

	printf("\"lsblk\" 명령어의 실행 파일은 \"/usr/bin/lsblk\"(으)로 있습니다.\n");
	next_line();

	printf("리눅스에서는 하드디스크, 플로피 디스크 등\n");
	printf("다양한 디스크 종류의 장치를 'Block'으로 관리합니다.\n");
	next_line();

	printf("이러한 블록 디바이스의 정보를 트리 구조로 볼 수 있는 명령어가 바로 \"lsblk\"입니다\n");
	next_line();

	printf("아무런 옵션 없이 \"lsblk\"를 입력하여\n");
	printf("현재 연결되어 있는 블록 디바이스의 정보를 확인할 수 있습니다.\n\n");
	next_line();

	printf("[실습] \"lsblk\"를 이용하여 디바이스의 정보를 확인해보세요.\n");
	printf("사용법 : lsblk [옵션]\n");
	just_run_command("lsblk");
	next_line();

	printf("\n\n1번째 필드인 [NAME]은 해당 디바이스의 이름을 나타냅니다.\n");
	next_line();

	printf("2번째 필드인 [MAJ:MIN](은)는 해당 디바이스의\n");
	printf("\"MAJOR\" 번호와 \"MINOR\" 번호를 나타냅니다.\n");
	next_line();

	printf("3번째 필드인 [RM]은 해당 디바이스의 제거 가능 여부(Removable)를 나타냅니다.\n");
	printf("해당 필드의 값이 0이라면 제거 불가능 상태이며 '1'이라면 제거 가능한 상태입니다.\n");
	next_line();

	printf("4번째 필드인 [SIZE]는 해당 디바이스의 용량을 나타냅니다.\n");
	printf("'-b' 옵션을 추가하면 해당 필드의 값이 바이트(bytes)로 표시됩니다.\n");
	next_line();

	printf("5번째 필드인 [RO]은 해당 디바이스의 읽기 전용(Read Only) 여부를 나타냅니다.\n");
	printf("해당 값이 '0'이라면 읽기 전용이 아니며, '1'이라면 읽기 전용 디바이스 입니다.\n");
	next_line();

	printf("6번째 필드인 [TYPE]은 해당 디바이스의 타입을 나타냅니다.\n");
	next_line();

	printf("7번째 필드인 [MOUNTPOINT]는 해당 디바이스가 마운트 되어 있는 경로를 표시합니다.\n\n");
	next_line();

	printf("\"lsblk\"는 옵션과 함께 사용하여 더욱 다양한 정보를 출력할 수 있습니다.\n");
	next_line();

	printf("'-a' 옵션은 'all'의 약자이며, 비어 있는 디바이스\n");
	printf("즉, 용량이 '0'인 디바이스를 포함하여 출력합니다.\n\n");
	next_line();

	printf("[실습] \"lsblk\"에 '-a' 옵션을 이용하여 더 많은 블록 디바이스를 출력해보세요.\n");
	printf("사용법 : lsblk [옵션]\n");
	just_run_command("lsblk -a");
	next_line();

	printf("\n아까보다 더 많은 디바이스 정보가 출력된 것을 확인할 수 있습니다.\n");
	next_line();

	printf("'-p' 옵션은 디바이스의 전체 경로를 출력합니다.\n\n");
	next_line();

	printf("[실습] '-p' 옵션을 이용하여 디바이스 목록의 전체 경로를 출력해보세요.\n");
	printf("사용법 : lsblk [옵션]\n");
	just_run_command("lsblk -p");
	next_line();

	printf("\n[NAME] 필드에 디바이스 전체 경로가 출력됩니다.\n");
	next_line();

	printf("\"lsblk\" 명령어는 이처럼 디바이스와 관련한 정보를 볼 수 있기 때문에\n");
	printf("\"mount\" 명령어와 함께 사용하곤 합니다.\n");
	next_line();

	printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
	printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
	printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
	next_line();

	printf("\"lsblk\" 명령어의 학습이 끝났습니다.\n");
	printf("고생하셨습니다.\n");

	// Delete default directory
	delete_defdir();
}
