#include "func.h"

void training_find()

{
	create_defdir();
	system("clear");

	system("touch find_test_file1");
	system("touch find_test_file2");
	system("touch find_test_file3");
	system("mkdir find_test_dir1");
	system("mkdir find_test_dir2");
	system("mkdir find_test_dir3");
	system("touch hello.c world.c good.c morning.c im_rookie.c");

	printf("이번에 학습할 명령어는 \"find\" 입니다.\n\n");

	printf("이름에서 알 수 있듯이 파일을 찾는 명령어입니다.\n");
	printf("주어진 조건으로 파일을 찾아 해당 경로를 표시합니다.\n");
	next_line();

	printf("\"find\" 명령어의 실행 파일은 \"/usr/bin/find\"(으)로 있습니다.\n");
	next_line();

	printf("사용법은 \"find [옵션] [경로] [표현식]\" 입니다.\n");
	printf("ex) find ./dir\n\n");
	next_line();

	printf("[경로]를 생략하면 현재 디렉토리에서부터 검색을 합니다.\n\n");
	next_line();

	printf("\"find\" 명령어의 자주 쓰이는 옵션은 다음과 같습니다.\n\n\n");
	printf("  [ -P ]    : 심볼릭 링크를 따라가지 않고, 심볼릭 링크 자체 정보를 사용합니다.\n\n");
	printf("  [ -L ]    : 심볼릭 링크에 연결된 파일 정보를 사용합니다.\n\n");
	printf("  [ -H ]    : 심볼릭 링크를 따라가지 않으나\n");
	printf("              Command Line Argument를 처리할 땐 예외로 합니다.\n\n");
	printf("  [ -D ]    : 디버그 메시지를 출력합니다.\n\n");
	next_line();


	system("clear");
	printf("find 명령어의 자주 쓰이는 표현식은 다음과 같습니다.\n\n");
	printf("-name <찾을이름> : 지정된 이름으로 파일을 찾습니다.\n");
	printf("-user <유저이름> : 소유자가 유저 이름인 파일을 찾습니다.\n");
	printf("-group <group명> : 지정한 그룹 소유의 파일이나 디렉토리를 찾습니다.\n");
	printf("-uid             : 지정한 UID 소유의 파일이나 디렉토리를 찾습니다.\n");
	printf("-uid             : 지정한 GID 소유의 파일이나 디렉토리를 찾습니다.\n\n");
	next_line();
	
	printf("-type [bcdfls] : 파일 유형에 따라 파일을 찾습니다.\n");
	printf("	b: 블록파일\n");
	printf("	c: 문자\n");
	printf("	d: 디렉토리\n");
	printf("	f: 파일\n");
	printf("	l: 링크파일\n");
	printf("	s: 소켓\n\n");
	next_line();
	
	printf("-size [+/-]n : 파일 크기로 찾습니다.\n");
	printf("	+n : n보다 큰 파일\n");
	printf("	-n : n보다 작은 파일\n");
	printf("	n : n인 파일\n\n");
	printf("-perm <권한 값> : 퍼미션 값으로 파일 찾기\n\n");
	printf("-exec <명령어> {} \\; : 찾은 파일을 대상으로 수행할 명령어를 지정합니다.\n");
	printf("                        {} \\;을 명령어 끝에 붙여야 합니다.\n\n");
	next_line();

	//실습 1
	system("clear");
	printf("[실습 1]\n\n");
	printf("[실습] \"find\" 명령어를 사용하여 'find_test_file1'을 찾아보세요.\n");
	printf("사용법 : find [파일 이름]\n");
	just_run_command("find find_test_file1");

	printf("\n\n위의 출력된 결과는 \"find\" 명령어로 찾은 'find_test_file1' 파일입니다.\n\n");
	printf("경로를 생략했기 때문에 현재 디렉토리 내에서 파일을 검색하게 됩니다.\n");
	next_line();

	//실습 2
	system("clear");
	printf("[실습 2]\n\n");

	system("ls -al find_test_file*");
	printf("\n\n현재 디렉토리에 'find_test_file'가 포함된 파일들이 존재합니다.\n\n\n");
	next_line();

	printf("[실습] \"find\" 명령어를 사용하여 'find_test_file2'(을)를 찾고 동시에\n");
	printf("'-exec rm {} \\;'옵션을 이용하여 삭제까지 해보세요.\n\n");
	printf("사용법 : find [파일 이름] [-exec <명령어> {} \\]\n");
	just_run_command("find find_test_file2 -exec rm {} \\;");

	printf("\n\n위의 실습 결과로 'find_test_file2' 파일이 삭제되었을 것입니다.\n\n");
	next_line();

	printf("[실습 2-1]\"ls -al find_test_file2\"(을)를 입력하여 확인해보세요.\n");
	just_run_command("ls -al find_test_file2");

	printf("\n\n파일이 정상적으로 삭제되었다는 것을 확인할 수 있습니다.\n");
	next_line();


	//실습 3
	system("clear");
	printf("[실습 3]\n\n");
	printf("[실습] \"find . -name \"find_test*\" -type d\"(을)를 입력해보세요.\n");
	printf("사용법 : find [경로] [표현식]\n");
	just_run_command("find . -name \"find_test*\" -type d");

	printf("\n\n위의 실습은 현재 디렉토리에서 'find_test' 텍스트가 포함된 디렉토리들을 찾습니다.\n");
	next_line();

	printf("이번 실습에서는 표션식 '-name'(와)과 '-type' 두 개를 사용해보았습니다.\n");
	next_line();

	//실습 3-2
	system("clear");
	printf("[실습 3-2]\n\n");
	printf("[실습] \" find . -type f -name \"find_test*\" \"(을)를 입력해보세요.\n");
	just_run_command("find . -type f -name \"find_test*\"");

	printf("\n\n[실습 3-2]는 [실습 3]에서와 비슷하지만\n");
	printf("현재 디렉토리에서 'find_test' 텍스트가 포함된 일반 파일들을 찾습니다.\n");
	next_line();

	printf("이번 실습에서는 표현식 두 개의 위치를 바꿔보았습니다.\n");
	next_line();

	//실습 4
	system("clear");
	printf("[실습 4]\n\n");
	printf("[실습] \"find . -name \"*.c\" | head -3\"(을)를 입력해보세요.\n");
	just_run_command("find . -name \"*.c\" | head -3");

	printf("\n\n위의 실습은 현재 디렉토리에서 '.c'로 끝나는 파일을 찾은 뒤 3개만 출력합니다.\n");
	next_line();

	//실습 5
	system("clear");
	printf("[실습 5]\n\n");
	printf("[실습] \"find ! -type d\"(을)를 입력해보세요.\n");
	just_run_command("find ! -type d");

	printf("\n\n위의 실습은 디렉토리 아닌 파일들은 모두 찾습니다.\n");
	next_line();

	//실습 끝
	system("clear");
	printf("\"find\" 명령어를 이용한 실습 5가지를 해보았습니다.\n");
	next_line();

	printf("\"find\" 명령어는 리눅스에서 파일을 찾을 때 아주 유용한 명령어입니다.\n");
	next_line();

	printf("\"find\" 명령어를 잘 활용하면 원하는 파일에만 대해서\n");
	printf("다양한 작업을 한 번에 실행이 가능합니다.\n");
	next_line();

	printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
	printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
	printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
	next_line();

	printf("\"find\" 명령어의 학습이 끝났습니다.\n");
	printf("고생하셨습니다.\n");

	delete_defdir();
}
