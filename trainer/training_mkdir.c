#include "func.h"

void training_mkdir(void)
{
	create_defdir();
	system("clear");

	printf("이번에 학습할 명령어는 \"mkdir\"입니다.\n\n");
	printf("\"mkdir\" 명령어는 'make directory'의 약자로, '디렉토리'를 생성하는 명령어입니다.\n");
	next_line();
	
	printf("리눅스에서 디렉토리란 윈도우 환경의 '폴더'와 비슷한 개념입니다. \n");
	printf("디렉토리에는 '파일'이나 또 다른 디렉토리가 포함될 수 있습니다.\n");
	next_line();
	
	printf("\"mkdir\" 명령어의 실행 파일은 \"/usr/bin/mkdir\"(으)로 있습니다.\n");
	next_line();
	
	printf("사용법은 : \"mkdir [옵션] [생성할 디렉토리 이름]\" 입니다.\n");
	printf("ex) mkdir dir1\n\n");
	next_line();
	
	printf("[실습] \"mkdir\" 명령어를 입력하여 'test_dir' 디렉토리를 생성해보세요.\n");
	just_run_command("mkdir test_dir");

	printf("\n\n아래는 ls -al의 출력 결과 입니다.\n");
	printf("'test_dir' 디렉토리가 추가된 것을 확인할 수 있습니다.\n");
	printf("\n");
	system("ls -al");
	next_line();

	printf("\"mkdir\"의 옵션은 상당히 간단합니다.\n");
	next_line();
	
	printf("-m 옵션은 디렉토리를 생성할 때 권한을 설정합니다.\n");
	printf("-m xxx의 형식으로 사용할 수 있습니다.\n");
	next_line();
	
	printf("mkdir -m xxx에서 'xxx'에 해당하는 것이 \n");
	printf("\"ls\" 학습에서 배운 3자리 숫자의 권한 표시 방식입니다.\n");
	next_line();
	
	printf("즉 소유자, 그룹, 전체 권한을 숫자로 표기해 디렉토리를 생성할 수 있는 것입니다.\n\n");
	next_line();
	
	printf("[실습] mkdir -m 명령어를 이용하여\n");
	printf("'drwxr-x-w-(752)' 권한을 가진 디렉토리 'test_dir2'를 생성해보세요.\n");
	printf("사용법 : \"mkdir -m [권한] [생성할 디렉토리 이름]\"\n");
	just_run_command("mkdir -m 752 test_dir2");

	printf("\n\n아래는 \"ls -al\"의 출력 결과 입니다.\n");
	printf("'test_dir2' 디렉토리가 지정한 권한으로 추가된 것을 확인할 수 있습니다.\n");
	printf("\n");
	system("ls -al");
	next_line();

	printf("'-p' 옵션은 하위 디렉토리를 함께 생성할 때 사용합니다.\n\n");
	
	printf("예를 들어 \"mkdir\" 명령어를 통해 '과일'이라는 디렉토리를 생성하고, \n");
	printf("그 안에 '사과'라는 하위 디렉토리를 생성하고 싶을 때 사용합니다.\n");
	next_line();
	
	printf("위의 예시처럼 생성하기 위해서는 'mkdir -p 과일/사과'를 입력하면 됩니다.\n\n");
	next_line();
	
	printf("[실습] \"mkdir -p\" 명령어를 이용하여\n");
	printf("'fruits' 디렉토리 안에 'apple' 디렉토리를 생성해보세요.\n");
	run_command("mkdir -p fruits/apple");
	
	printf("\n\n[실습] 'ls fruits'를 통해 해당 디렉토리가 제대로 생성되었는지 확인해보세요.\n");
	just_run_command("ls fruits");
	
	printf("\n\n\"mkdir\"과 대비되는 명령어로는 \"rmdir\"이 있습니다.\n");
	printf("\"rmdir\"은 'remove directory'의 약자로 디렉토리를 삭제하는 명령어입니다.\n\n");
	next_line();
	
	printf("[실습] \"rmdir\"을 이용하여 방금 생성한 'fruits/apple' 디렉토리를 삭제해보세요.\n");
	printf("사용법 : \"rmdir [삭제할 디렉토리]\"\n");
	run_command("rmdir fruits/apple");

	printf("\n\n[실습] 'ls fruits/apple'을 입력하여 디렉토리가 삭제되었는지 확인해보세요.\n");
	just_run_command("ls fruits/apple");
	
	printf("\n\n해당 디렉토리가 없다는 것을 보아 성공적으로 삭제된 것을 확인할 수 있습니다.\n");
	next_line();
	
	printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
	printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
	printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
	next_line();
	
	printf("\"mkdir\" 명령어에 대한 학습이 끝났습니다.\n고생하셨습니다.\n");

	delete_defdir();
}
