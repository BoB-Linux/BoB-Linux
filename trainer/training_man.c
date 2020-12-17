#include "func.h"

void training_man(void)
{
	create_defdir();

	system("clear");

	printf("이번에 학습할 명령어는 \"man\" 입니다.\n\n");
	printf("\"man\" 명령어는 Manual pages(man pages)의 약자로, \n");
	printf("다른 명령어들의 자세한 사용법이나 매뉴얼을 볼 때 사용하는 명령어 입니다.\n");
	next_line();

	printf("man page들은 대부분의 유닉스 계열의 운영체제에 기본으로 설치되어 있는 문서입니다.\n");
	next_line();

	printf("\"man\" 명령어의 실행 파일은 \"/usr/bin/man\"(으)로 있습니다.\n");
	next_line();

	printf("\"man\" 명령어의 사용법은 \"man [옵션] [명령어 이름]\" 이지만\n");
	printf("주로 \"man [명령어 이름]\"으로 많이 사용됩니다.\n");
	next_line();

	printf("예를 들어 다음과 같이 사용합니다.\n");
	printf("ex) man ls\n");
	next_line();

	printf("\"man\" 명령어는 투박하게 구성되어 있지만, \n기본적인 내용을 담고 있어서 도움이 됩니다.\n");
	next_line();

	printf("명령어에 대해 모를 때 네트워크가 단절된 환경에서도 유용하게 사용할 수 있습니다.\n");
	next_line();

	printf("각종 명령어들에 대해 간단한 사용법을 확인하고 싶을 때는 \n\"[명령어] --help\"와 같이 '--help' 옵션을 이용해도 됩니다.\n");
	next_line();

	printf("\"man\" 명령어를 이용시 다음 기본 키들을 보고 실습 때 시도해보세요.\n");
	next_line();

	printf("'q (quit)' 키 : 나가기\n");
	printf("'h (help)' 키 : man 명령어 사용법 확인\n");
	printf("위, 아래 방향키 또는 Enter 키 : 한 줄씩 넘기기\n");
	printf("Page up, Page Down, 스페이스바 : 한 페이지씩 넘기기\n\n");
	next_line();

	printf("\"man\" 명령어로 매뉴얼 페이지에 들어갔을 때 특정 단어에 대해 검색하고 싶다면\n");
	printf("\"/[검색할 단어]\" 라고 입력하면 됩니다.\n");
	printf("ex) ignore이라는 단어를 검색하고 싶다면 \"/ignore\" 라고 입력\n\n");
	next_line();

	printf("Manual 페이지에서 특정 단어를 검색한 뒤 n키를 누르면 다음 문자 위치로 이동하고\n");
	printf("N키를 누르면 이전 문자 위치로 이동합니다.\n\n");
	next_line();

	printf("[실습] 이제 \"man\" 명령어를 이용하여 \"ls\" 명령어에 대한 매뉴얼을 봐보세요.\n");
	printf("사용법 : \"man [명령어 이름]\"\n");
	printf("(내용을 읽은 후에 'q'키를 입력해서 나오실 수 있습니다.)\n");
	just_run_command("man ls");

	printf("\n\n많은 내용들이 출력되고, 'q' 키로 나오셨다면 제대로 실습하셨습니다.\n");
	next_line();

	printf("방금 보신 내용이 \"ls\" 명령어에 대한 매뉴얼 페이지 입니다.\n");
	next_line();

	printf("\"man\" 명령어의 자주 쓰는 옵션은 다음과 같습니다.\n\n");
	printf("  [ -a ] : 찾고자 하는 명령어의 검색된 메뉴얼 페이지를 모두 출력합니다.\n\n");
	printf("  [ -c ] : 최신의 cat 페이지가 있어도 소스 매뉴얼 페이지를 재구성합니다.\n\n");
	printf("  [ -C <파일명> ] : 매뉴얼 페이지의 configure 파일을 지정합니다.\n");
	printf("                    (기본값은 /etc/man.config)\n\n");
	printf("  [ -d ] : 실제 매뉴얼 페이지를 보여주지 않고 디버깅 정보 구성을 출력합니다.\n\n");
	printf("  [ -D ] : -d 옵션의 구성을 출력한 뒤에 매뉴얼 페이지를 출력합니다.\n\n");
	printf("  [ -f ] : whatis 명령과 동일한 결과를 보여줍니다.\n\n");
	printf("  [ -h ] : man 명령어의 사용법을 출력합니다.\n\n");
	printf("  [ -k ] : apropos 명령과 동일한 결과를 보여줍니다.\n\n");
	next_line();

	printf("\"man\" 명령어의 옵션들은 이 트레이닝에서 진행하지 않겠습니다.\n");
	printf("추후 Unix 혹은 리눅스 시스템에서 \"man\" 명령어의 옵션들을 실습해보시길 바랍니다.\n");
	next_line();

	printf("\"man\" 명령어는 각 명령어들의 매뉴얼 페이지를 보여주는 명령어로\n");
	printf("인터넷이 없는 상황에서도 유용하게 쓸 수 있는 명령어이므로 \n알아두시면 도움이 크게 되실 것입니다.\n");
	next_line();

	printf("\"man\" 명령어의 옵션은 위에 언급한 것들 말고도 여러가지가 있습니다.\n");
	next_line();

	printf("재미있게도, \"man\" 명령어에 대한 매뉴얼 페이지가 존재하니\n");
	printf("\"man man\"과 같이 입력하면 \"man\"에 대한 man 페이지를 볼 수 있습니다.\n");
	next_line();

	printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
	printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
	printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
	next_line();

	printf("\"man\" 명령어의 학습이 끝났습니다.\n");
	next_line();

	delete_defdir();
}
