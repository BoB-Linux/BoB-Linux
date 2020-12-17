#include "func.h"

int run_command(char valid_cmd[]);
void next_quit();

void training_ln(void)
{
	create_defdir();
	system("clear");

	//////////////////////////////////////////////////////////////////////////////////////////////////////

	//실습할 파일&디렉토리 제공
	system("touch file1");


	printf("이번에 학습할 명령어는 \"ln\" 입니다.\n\n");

	printf("\"ln\"은 파일의 링크('하드 링크' 또는 '심볼릭 링크')를 생성하는 명령어입니다.\n");
	printf("윈도우로 예를 들면 '바로 가기'와 같은 것입니다.\n\n");
	next_line();

	printf("\"ln\" 명령어의 실행 파일은 \"/usr/bin/ln\"(으)로 있습니다.\n");
	next_line();

	printf("링크를 사용하는 이유는\n");
	printf("\"경로 단축\" 또는 \"데이터를 안전하게 보관하고 싶을 경우\" 또는 \"통일성\" 때문입니다.\n\n");
	next_line();

	printf("리눅스에서는 파일이나 디렉토리가 생성될 때\n");
	printf("'I-node(index node)'라는 번호가 부여됩니다.\n\n");
	printf("이 번호는 \"ls -i\" 명령으로 확인할 수 있습니다.\n\n");
	next_line();

	printf("'I-node'에는 파일이나 디렉토리의 여러가지 정보가 담겨있는데\n\n");
	printf("해당 파일의 소유권, 허가권, 파일 종류 등의 정보와\n");
	printf("해당 일의 실제 데이터가 있는 위치 정보가 담겨있습니다.\n");
	next_line();

	printf("리눅스에서는 이 번호를 기준으로 파일이 관리되는데\n");
	printf("이 때 이 번호가 같다면 내부적으로 같은 파일로 인식됩니다.\n\n");
	next_line();

	//하드 링크
	system("clear");
	printf("[하드 링크]\n\n\n");
	printf("\"하드 링크\"란 하나의 동일한 파일을 디스크의 다른 곳에 복사하여\n");
	printf("여러 이름의 파일로 사용되는 형식입니다.\n\n");
	next_line();

	printf("\"하드 링크\"의 특징은 다음과 같습니다.\n\n\n");
	printf(" - i-node 번호가 원본 파일과 같다.\n\n");
	printf(" - 원본 파일과 링크 파일의 크기가 같다.\n\n");
	printf(" - 원본과 링크 둘 중 하나를 수정하면 서로 같이 반영된다.\n\n");
	printf(" - 원본을 삭제해도 링크는 영향을 받지 않는다.\n\n");
	printf(" - 하드 링크는 파일에 대해서만 생성이 가능하다.\n");
	next_line();

	//심볼릭 링크
	system("clear");
	printf("[심볼릭 링크]\n\n\n");
	printf("\"심볼릭 링크\"란 하나의 파일을 여러 이름으로 가리키게 하는 것이며\n");
	printf("원본과 링크 파일은 완전히 다른 파일로 관리됩니다.\n");
	printf("윈도우에서 바로가기 아이콘과 비슷하다고 생각하면 이해하기 쉽습니다.\n\n");
	next_line();

	printf("\"심볼릭 링크\"의 특징은 다음과 같습니다.\n\n\n");
	printf("- i-node 번호가 원본 파일과 다르다.\n\n");
	printf("- 원본 파일보다 링크 파일의 크기가 매우 작다\n\n");
	printf("- 원본과 링크 둘 중 하나를 수정하면 서로 같이 반영된다.\n\n");
	printf("- 원본을 삭제하면 링크 파일은 사용하지 못한다.\n\n");
	printf("- 'ls -l' 파일 목록 출력시 권한 표시 앞에 'l'이 표시된다.\n");
	next_line();

	//ln
	system("clear");
	printf("\"ln\" 명령어는 다음과 같은 형식으로 사용합니다.\n");
	printf("\"ln [옵션] [원본 파일] [링크 파일 이름]\n");
	next_line();

	printf("[옵션]은 선택 사항이며 해당 명령어에 지정할 옵션을 입력합니다.\n\n");
	printf("[원본 파일]은 해당 파일의 원본을 입력합니다.\n\n");
	printf("[링크 파일 이름]은 생성할 심볼릭 링크 파일의 이름을 입력하여 사용합니다.\n\n");
	next_line();

	printf("\"ln\"에서 자주 쓰이는 옵션은 다음과 같습니다.\n\n\n");
	printf("  [ -s (--symbolic) ]     : 심볼릭 링크 생성 시에 사용하는 옵션입니다.\n\n");
	printf("  [ -S (--suffix) ]       : 백업 파일 생성 시 원하는 접미사를 지정합니다.\n\n");  
	printf("  [ -v (--verbose) ]      : 링크를 만드는 정보를 자세히 출력합니다.\n\n");
	printf("  [ -f (--force) ]        : 링크 파일 존재 시에 삭제하고 생성합니다.\n\n");
	printf("  [ -b (--backup) ]       : 대상 파일이 존재할 경우\n\n");
	printf("                            백업 파일을 만든 후 링크 파일을 생성합니다.\n\n");
	printf("  [ -i, (--interactive) ] : 대상 파일이 존재할 경우\n\n");
	printf("                            대상 파일을 지울 것인지 여부를 확인합니다.\n\n\n");
	printf("옵션을 입력하지 않으면 하드 링크를 생성합니다.\n\n\n");
	next_line();

	system("ls -al");

	printf("\n\n현재 디렉토리에는 \"file1\" 파일이 있습니다.\n\n");
	next_line();

	printf("[실습] \"ln\" 명령어를 이용하여 'file1'의 하드 링크를\n");
	printf("'link1'라는 이름으로 생성해보세요.\n");
	printf("사용법 : ln [원본 파일] [링크 파일]\n");
	run_command("ln file1 link1");
	next_line();

	printf("\n\n[실습] \"ln\"에 '-s' 옵션을 입력하여 'file1'의 심볼릭 링크를\n");
	printf("'link2'라는 이름으로 생성해보세요.\n\n");
	printf("사용법 : ln [옵션] [원본 파일] [링크 파일]\n");
	run_command("ln -s file1 link2");
	next_line();

	system("ls -al");
	printf("\n\n파일 목록을 확인해보면 두 링크 모두 성공적으로 생성된 것을 확인할 수 있습니다.\n\n");

	printf("링크를 삭제하고 싶다면 \"rm\" 명령어를 사용하면 됩니다.\n");
	printf("사용법 : rm -f [링크 파일 이름]\n\n");
	next_line();

	printf("[실습] \"rm -f link1\"(을)를 입력하여 링크 파일을 삭제해보세요.\n");
	printf("사용법 : rm [옵션] [링크 파일]\n");
	run_command("rm -f link1");

	system("ls -al");
	printf("\n\n위의 출력 결과는 성공적으로 'link1' 링크 파일이 제거되었음을 보여줍니다.\n\n");
	next_line();

	printf("주의할 점은 \"rm\" 명령어의 '-r' 옵션을 사용하면 링크의 원본 파일도 함께 삭제됩니다.\n\n");
	next_line();

	printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
	printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
	printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
	next_line();

	printf("\"ln\" 명령어의 학습이 끝났습니다.\n");
	printf("고생하셨습니다.\n");

	delete_defdir();
}

