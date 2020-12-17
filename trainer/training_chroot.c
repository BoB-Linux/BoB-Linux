#include <string.h>
#include "func.h"

int run_command(char valid_cmd[]);
void next_quit();

void training_chroot(void)
{
	char dir[50];
	char test[100]; 
	create_defdir();
	system("clear");;

	getcwd(dir, sizeof(dir));
	test[0] = '\0';

	printf("이번에 학습할 명령어는 \"chroot\" 입니다. \n\n");

	printf("\"chroot\"는 'Change Root Directory'의 약자입니다.\n\n");
	next_line();

	printf("주로 보안성을 위해 새로운 가상의 'root' 디렉토리를 생성하여\n");
	printf("이 디렉토리의 상위로는 이동이 불가능하게 합니다.\n");
	next_line();

	printf("가상의 'root' 디렉토리를 만들고 이 디렉토리의 상위로는 이동이 불가능하기에\n");
	printf("환경이 격리되어 있으므로 보안상으로 안전해집니다.\n");
	next_line();

	printf("\"chroot\" 명령어의 실행 파일은 \"/usr/sbin/chroot\"(으)로 있습니다.\n");
	next_line();

	printf("사용법은 \"chroot [옵션]\" 또는\n");
	printf("\"chroot [옵션] [새로운 루트 디렉토리] [명령어 [인자값] ...]\" 입니다.\n");
	printf("ex) chroot /home/rookie/chroottest /bin/bash\n");
	next_line();

	printf("[옵션]은 해당 명령어에 지정할 옵션입니다.\n\n");
	printf("[새로운 루트 디렉토리](은)는 새롭게 지정할 'root' 디렉토리를 지정합니다.\n\n");
	printf("[명령어 [인자값] ...](은)는 선택 사항이며 'root' 디렉토리를 변경한 후\n");
	printf("해당 'root'를 기반으로 실행할 명령어를 입력하여 사용합니다.\n\n");
	next_line();

	printf("'root 디렉토리'란 유닉스 계열 운영 체제에서 사용되는 개념이며\n");
	printf("컴퓨터 파일 시스템 계층 구조의 첫번째 또는 최상위 디렉토리를 의미합니다.\n\n");
	next_line();

	printf("\"chroot\"명령어의 자주 쓰이는 옵션은 다음과 같습니다.\n\n");
	printf("  [ --help ] : 명령어의 도움말을 표시합니다.\n");
	printf("  [ --version ] : 명령어의 버전 정보를 표시합니다.\n\n");
	next_line();

	printf("[실습] \"chroot\" 명령어를 사용하여 현재 디렉토리를 루트 디렉토리로 변경해보세요.\n");
	printf("현재 디렉토리의 경로는 \'%s\'입니다.\n\n", dir);
	printf("사용법 : chroot [지정할 새 루트 디렉토리]\n");
	strncat( strncat(test, "chroot ", sizeof("chroot ")), dir, sizeof(dir));
	fake_run_command(test);
	next_line();

	printf("\n\n성공적으로 변경이 되었다면 현재 위치는 루트인 '/'로 표시될 것입니다.\n\n");
	next_line();

	printf("\"chroot\"는 자주 사용되는 명령어는 아닙니다.\n");
	printf("오히려 요즘은 거의 안쓰는 명령어 입니다.\n");
	next_line();

	printf("\"chroot\"로 루트 환경을 새로 구축하여\n");
	printf("기존 시스템에 영향을 미치지 않게 작업을 하고싶은 경우\n\n");
	printf("보통 테스트 및 개발, 의존성 제어, 호환성, 복구, 권한 분리의 목적으로 사용됩니다.\n\n");
	next_line();

	printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
	printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
	printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
	next_line();

	printf("\"chroot\" 명령어의 학습이 끝났습니다.\n");
	printf("고생하셨습니다.\n");

	delete_defdir();
}
