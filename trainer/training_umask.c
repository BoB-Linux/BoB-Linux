#include "func.h"

void training_umask()
{
	create_defdir();
	system("clear");

	printf("이번에 학습할 명령어는 \"umask\"입니다.\n\n");
	printf("\"umask\"는 파일이나 폴더가 생성될 때 기본 권한을 지정합니다.\n");
	next_line();	

	printf("'기초 명령어 학습'에서 \"ls\" 명령어를 배울 때 \n");
	printf("파일의 권한에 대해서 배웠을 것입니다.\n");
	next_line();
	
	printf("\"umask\" 명령어는 권한의 설정과 관련된 명령어입니다.\n");
	next_line();
	
	printf("사용법은 : \"umask [값]\" 입니다.\n");
	printf("여기서 [값]을 입력하지 않으면, 현재 \"umask\" 값이 출력됩니다.\n");
	printf("ex) umask\n\n");
	
	printf("[실습] \"umask\"를 입력하여 현재의 \"umask\" 값을 확인해 보세요.\n");
	just_run_command("umask");
	
	printf("\n\n기본 권한은 아래의 계산 결과로 정해집니다.\n");
	printf("디렉토리 = 0777 - umask\n");
	printf("파일     = 0666 - umask\n");
	next_line();
	
	printf("예를 들어 \"umask\"가 '0022' 이었다면 \n");
	printf("디렉토리 = 0777 - 0022 = 0755 = drwxr-xr-x\n");
	printf("파일     = 0666 - 0022 = 0644 = -rw-r--r--\n");
	printf("이 됩니다.\n");
	next_line();
	
	printf("즉, 파일이나 디렉토리 생성 시 기본 권한에서 \"umask\"의 값을 뺀 값으로 \n");
	printf("권한이 설정되는 것입니다.\n");
	next_line();
	
	printf("\"umask\"는 다음과 같은 형식으로 사용합니다.\n");
	printf("사용법 : \"umask [값]\"\n");
	next_line();

	printf("위의 사용법에서 '값'에 해당되는 숫자가 기본 권한에서 마이너스 됩니다.\n");
	next_line();
	
	printf("\"umask\" 값이 바로 권한이 아니라 기본 권한에서 뺀 값인 점을 숙지하여 사용해야 합니다.\n");
	next_line();
	
	printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
	printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
	printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
	next_line();
	
	printf("\"umask\" 명령어의 학습이 끝났습니다.\n");
	printf("고생하셨습니다.\n");

	delete_defdir();
}
