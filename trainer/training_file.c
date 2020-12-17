#include "func.h"

void training_file()
{
	create_defdir();
	system("clear");

	system("echo $SHELL > test.txt");

	printf("이번에 학습할 명령어는 \"file\" 입니다.\n\n");

	printf("\"file\" 명령어는 파일의 종류(유형) 확인 및 속성 값을 확인할 때 사용합니다.\n");
	next_line();

	printf("\"file\" 명령어의 실행 파일은 \"/usr/bin/file\"(으)로 있습니다.\n");
	next_line();

	printf("사용법은 \"file [옵션] [파일 이름]\" 입니다.\n");
	printf("ex) file file1.txt\n\n");
	next_line();

	printf("[실습] \"file\" 명령어를 입력하여 'test.txt' 의 종류를 확인해보세요.\n");
	printf("사용법 : file [파일 이름]\n");
	just_run_command("file test.txt");

	printf("\n\n위의 결과를 보시면 \"test.txt: ASCII text\" 라고 하여\n");
	printf("텍스트 파일임을 알 수 있습니다.\n\n");
	next_line();

	printf("[디렉토리 관련 지식]\n\n");
	printf("리눅스에서는 디렉토리도 파일로 취급합니다.\n");
	printf("'.'  : 현재 디렉토리를 가리키는 파일입니다.\n");
	printf("'..' : 상위 디렉토리를 가리키는 파일입니다.\n\n");
	next_line();

	printf("[실습] \"file .\"(을)를 입력하여 현재 디렉토리 경로를 의미하는\n");
	printf("' . '이 어떤 종류인지 확인해보세요.\n");
	just_run_command("file .");

	printf("\n\n위의 결과를 보시면 \"file\" 명령어로 디렉토리인지도 확인이 가능합니다.\n\n");
	next_line();

	printf("\"file\" 명령어의 자주 쓰이는 옵션은 다음과 같습니다.\n\n");
	printf("  [ -b (--brief)]\n");
	printf("지정한 파일명은 출력하지 않고 파일의 유형만 출력합니다.\n\n");
	printf("  [ -f (--file-from [파일 목록])]\n");
	printf("[파일 목록]에서 지정한 파일들에 대해서만 명령을 실행합니다.\n\n");
	printf("  [ -i (--mime)]\n");
	printf("MIME 타입 문자로 출력합니다.\n\n");
	printf("  [ -L (--dereference)]\n");
	printf("심볼릭 링크된 파일을 추적하여 원본 파일 정보를 출력합니다.\n\n");
	printf("  [ -m (--magic-file [매직 파일])]\n");
	printf("임의로 [매직 파일]을 지정합니다.\n\n");
	printf("  [ -z (--umcompress)]\n");
	printf("압축된 파일의 내용을 출력해줍니다.\n\n\n");
	next_line();

	printf("\"file\" 명령어의 옵션 '-b'와 '-i'를 실습해보겠습니다.\n\n");
	next_line();

	printf("[실습] \"file -b test.txt\"(을)를 입력해보세요.\n");
	printf("사용법 : file [옵션] [파일 이름]\n");
	just_run_command("file -b test.txt");

	printf("\n\n처음에 실습했던 \"file test.txt\"(와)과는 다르게 파일의 이름은 출력해주지 않고\n");
	printf("파일의 종류만 출력해줍니다.\n\n");
	next_line();

	printf("[실습] \"file -i test.txt\"(을)를 입력해보세요.\n");
	printf("사용법 : file [옵션] [파일 이름]\n");
	just_run_command("file -i test.txt");

	printf("\n\n위의 결과는 지금까지 실습했던 결과와는 보여주는 것이 좀 다를 것입니다.\n\n");
	printf("\"text/plain\" 부분은 \"파일의 종류/파일의 포맷\" 형태입니다.\n");
	printf("그리고 \"charset=us-ascii\"는 '문자셋이 us-ascii(으)로 작성되어있다'라는 뜻입니다.\n");
	next_line();

	printf("[Tip] 확장자가 없는 파일들을 \"file\" 명령어를 통해 어떤 유형인지 확인할 수 있습니다.\n");
	next_line();

	printf("\"file\" 명령어의 옵션은 위에 나온 것들 말고도 여러가지가 있습니다.\n");
	next_line();

	printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
	printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
	printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
	next_line();

	printf("\"file\" 명령어의 학습이 끝났습니다.\n");
	printf("고생하셨습니다.\n");

	delete_defdir();
}
