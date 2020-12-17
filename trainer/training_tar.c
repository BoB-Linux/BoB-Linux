#include "func.h"

void training_tar()
{
	create_defdir();
	system("clear");
	
	system("touch file1 file2 file3");

	printf("이번에 학습할 명령어는\"tar\"입니다.\n\n");
	printf("\"tar\" 명령어는 'Tape ARchive'의 약자이며\n");
	printf("여러 파일들을 하나의 파일로 묶는 명령어 입니다.\n");
	next_line();
	
	printf("\"tar\" 명령어의 실행 파일은 \"/usr/bin/tar\"(으)로 있습니다.\n");
	next_line();
	
	printf("\"tar\" 명령어는 단독으로 사용되거나 하나의 옵션만으로 사용되는 경우는 거의 없습니다.\n");
	printf("따라서 먼저 옵션을 보여드리겠습니다.\n");
	next_line();
	
	printf("\"tar\" 명령어의 자주 사용하는 옵션은 아래와 같습니다.\n\n");
	printf("  [ -c (--create) ]  : 새로운 tar 파일을 생성\n\n");
	printf("  [ -f (--file) ]    : tar 파일의 이름을 지정\n\n");
	printf("  [ -j (--bzip) ]    : bzip2를 이용한 압축\n\n");
	printf("  [ -t (--list) ]    : tar 파일 내용을 출력\n\n");
	printf("  [ -v (--verbose) ] : 상세한 정보를 출력\n\n");
	printf("  [ -x (--extract) ] : tar 파일을 푼다.\n\n");
	printf("  [ -z (--gzip) ]    : gzip을 이용한 압축\n\n");
	next_line();
	
	printf("\"tar\"는 다양한 옵션의 조합으로 사용됩니다.\n\n");
	next_line();
	
	printf("대표적인 조합 두 가지는 아래와 같습니다.\n\n");
	printf("  [ -cvf ] : 여러 파일을 하나의 tar 파일로 묶을 때 사용\n\n");
	printf("  [ -xvf ] : 묶여있는 tar 파일을 풀 때 사용\n");
	next_line();
	
	printf("이 두 옵션은 잘 기억 해주셨으면 합니다.\n");
	next_line();
	
	printf("\"tar\" 명령어는 다음과 같이 사용합니다.\n");
	printf("사용법 : \"tar [옵션] [결과파일 이름] [묶을 파일1] [묶을 파일2] ...\"\n\n");
	next_line();
	
	printf("[실습] \"tar -cvf\" 를 이용하여 'file1, file2, file3'를 'test.tar'로 묶어보세요.\n");
	just_run_command("tar -cvf test.tar file1 file2 file3");
	
	printf("\n\n묶은 후에는 묶을 때 사용된 파일들의 목록이 출력됩니다.\n\n");
	next_line();
	
	printf("[실습] 이번에는 \"tar -tvf\" 를 이용하여 'test.tar'의 내용을 확인해보세요.\n");
	printf("사용법은 : \"tar -tvf [대상 파일]\"입니다.\n");
	just_run_command("tar -tvf test.tar");
	
	printf("\n\n'-tvf' 옵션을 사용하여 하나로 합친 파일의 정보를 볼 수 있습니다.\n\n");
	next_line();
	
	printf("[실습] 그러면 다시 \"tar -xvf\" 를 이용하여 'test.tar'를 풀어봅시다.\n");
	printf("사용법은 : \"tar -xvf [대상 파일]\"입니다.\n");
	just_run_command("tar -xvf test.tar");
	
	printf("\n\n'test.tar'의 묶음이 해제되면서 풀어진 파일의 목록이 출력됩니다.\n");
	next_line();
	
	printf("단순히 \"tar\" 로 묶는 것으로는 압축은 되지 않습니다.\n");
	printf("\"tar\"는 어디까지나 묶어만 줍니다.\n");
	printf("압축은 '-j' 혹은 '-z' 옵션을 덧붙여서 이뤄집니다.\n");
	next_line();
	
	printf("여러 가지 파일을 하나로 묶은 후 압축하면,\n");
	printf("효율적으로 다수의 파일을 관리할 수 있습니다.\n");
	next_line();
	
	system("rm file1 file2 file3 test.tar");

	printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
	printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
	printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
	next_line();
	
	printf("\"tar\" 명령어의 학습이 끝났습니다.\n");
	printf("고생하셨습니다.\n");

	delete_defdir();
}
