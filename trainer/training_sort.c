#include "func.h"

void training_sort()
{
	create_defdir();
	system("clear");

   	system("ls -f /etc > testfile");

	printf("이번에 학습할 명령어는 \"sort\" 입니다. \n\n");
	printf("\"sort\"는 파일의 내용을 행 단위로 끊어서 정렬을 해줍니다.\n");
	next_line();
	
	printf("하지만, 옵션 없이 사용시 오름차 순으로 정렬된 결과를 출력만 해줄 뿐\n");
	printf("따로 저장하거나 원본 파일을 변경하지는 않습니다.\n");
	next_line();
	
	printf("\"sort\" 명령어의 실행 파일은 \"/usr/bin/sort\"(으)로 있습니다.\n");
	next_line();
	
	printf("\"sort\" 명령어는 다음과 같은 형식으로 사용합니다.\n");
	printf("사용법은 : \"sort [옵션] [파일 이름]\"입니다.\n");
	printf("ex) sort file1\n\n");
	next_line();
	
	printf("[실습] 우선 \"cat\"으로 정렬 전의 'testfile' 파일의 내용을 확인해봅시다.\n");
	just_run_command("cat testfile");
	
	printf("\n\n정렬되지 않은 상태의 파일 내용이 출력됩니다.\n\n");
	next_line();
	
	printf("[실습] 이번엔 \"sort\"를 이용하여 'testfile' 파일을 내용을 정렬시켜 확인해보세요.\n");
	just_run_command("sort testfile");
	
	printf("\n\n아까와는 달리 오름차순(a-b-c.. 순)으로 정렬됩니다.\n");
	next_line();
	
	printf("\"sort\" 명령어의 자주 사용하는 옵션은 아래와 같습니다.\n\n");
	printf("  [ -b ] : 공백은 무시\n\n");
	printf("  [ -d ] : 사전 순으로 정렬\n\n");
	printf("  [ -f ] : 대소문자 무시\n\n");
	printf("  [ -n ] : 숫자를 기준으로 정렬\n\n");
	printf("  [ -r ] : 내림차순으로 정렬\n\n");
	printf("  [ -o ] : 정렬된 내용을 지정된 파일명에 저장\n\n");
	next_line();
	
	printf("\"sort\"와 -o 옵션을 이용해 정렬된 내용을 특정 파일에 저장할 수 있습니다.\n");
	next_line();
	
	printf("사용법은 : \"sort -o [원본 파일] [대상 파일]\"입니다.\n");
	printf("ex) sort -o source_file dest_file\n");
	next_line();
	
	printf("원본 파일에 있는 내용이 정렬되어 대상 파일에 저장됩니다.\n");
	next_line();
	
	printf("따라서 원본 파일의 내용을 정렬시켜 저장하고 싶다면\n");
	printf("원본 파일과 대상 파일을 같게 지정하면 됩니다.\n\n");
	next_line();
	
	printf("[실습] \"sort\"와 -o 옵션을 이용해 'testfile'을 정렬하여 원본 파일에 저장해보세요.\n");
	printf("사용법은 : \"sort -o [원본 파일] [대상 파일]\"입니다.\n");
	run_command("sort -o testfile testfile");

	printf("\n\n[실습] \"cat\"으로 정렬 후의 'testfile' 파일의 내용을 확인해봅시다.\n");
	just_run_command("cat testfile");
	
	printf("\n\n파일의 내용이 오름차순으로 정렬되어 저장된 것을 확인할 수 있습니다.\n");
	next_line();
	
	printf("\"sort\" 명령어는 파이프라인(|) 혹은 리다이렉션(>) 기호와 같이 자주 사용됩니다.\n");
	next_line();
	
	printf("예를 들어 \"sort [원본 파일] > [대상 파일]\"과 같이 사용하는 것은\n");
	printf("sort -o [원본 파일] [대상 파일]과 같은 결과입니다.\n");
	next_line();
	
	printf("\"sort\" 명령어를 잘 사용한다면 특정한 데이터를 다루기에 좋을 것입니다.\n");
	next_line();
	
	printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
	printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
	printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
	next_line();
	
	printf("\"sort\" 명령어의 학습이 끝났습니다.\n");
	printf("고생하셨습니다.\n");

	system("rm testfile");

	delete_defdir();
}
