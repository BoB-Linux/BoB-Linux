#include "func.h"

int run_command(char valid_cmd[]);
void next_quit();

void training_cp(void)
{
	create_defdir();
	system("clear");

	//////////////////////////////////////////////////////////////////////////////////////////////////////

	//실습할 파일&디렉토리 제공
	system("mkdir dir1");
	system("touch file1 dir1/file1");


	printf("이번에 학습할 명령어는 \"cp\" 입니다.\n\n");
	printf("\"cp\" 명령어는 'copy'의 약자이며, 파일이나 디렉토리를 복사할 때 사용하는 명령어입니다.\n");
	next_line();

	printf("\"cp\" 명령어의 실행 파일은 \"/usr/bin/cp\"(으)로 있습니다.\n");
	next_line();

	printf("사용법은 \"cp [옵션] [원본 파일 혹은 디렉토리] ... [대상 파일 혹은 디렉토리]\" 입니다.\n");
	next_line();

	printf("[옵션]은 선택 사항이며, 해당 명령어에 지정할 옵션을 적는 부분입니다.\n\n");
	printf("[원본 파일 혹은 디렉토리](은)는 복사할 파일명 또는 디렉토리명을 적는 부분입니다.\n\n");
	printf("[대상 파일 혹은 디렉토리](은)는 복사되어\n");
	printf("생성될 파일명 또는 디렉토리명을 입력하여 사용합니다.\n\n");
	next_line();

	printf("\"cp\" 명령어에서 자주 사용되는 옵션은 다음과 같습니다.\n\n");
	printf("  [ -r, -R (--recursive) ]\n");
	printf("디렉토리를 복사할 경우 하위 디렉토리와 파일까지 함께 복사합니다.\n\n");
	printf("  [ -i (--interactive) ]\n");
	printf("복사 대상 파일명과 동일한 파일이 있다면, 덮어씌울건지 여부를 확인합니다.\n");
	printf("(yes - y /no - n)\n\n");
	printf("  [ -p ]\n");
	printf("원본 파일의 소유권, 그룹, 허가권 등을 그대로 보존하여 복사합니다.\n\n");
	printf("  [ -a (--archive) ]\n");
	printf("파일의 속성, 링크 정보들을 그대로 유지하고 그 하위 디렉토리까지 전부 복사합니다.\n\n");
	printf("  [ -v (--verbose) ]\n");
	printf("복사 상태를 자세히 출력합니다.\n\n");
	printf("  [ -u (--update) ]\n");
	printf("복사할 디렉토리에 동일한 파일명이 있을 경우\n");
	printf("검사하여 해당 파일이 최신 파일이면 복사하지 않습니다.\n\n");
	printf("  [ -b ]\n");
	printf("덮어쓸 때 백업본 파일을 만듭니다.\n\n");
	next_line();

	printf("'ls -al'명령을 통해 확인을 해보면\n");
	printf("현재 디렉토리에 'file1' 파일이 있는 것을 볼 수 있습니다.\n\n");

	system("ls -al");
	next_line();

	printf("\n[실습] \"cp\" 명령어를 이용하여 현재 디렉토리의 파일 'file1'을 'file2'로 복사해보세요.\n");
	printf("사용법 : cp [원본 파일] [대상 파일]\n");
	run_command("cp file1 file2");
	next_line();

	printf("\n다음은 현재 디렉토리에서 \"ls -al\"을(를) 실행한 결과로\n");
	printf("'file1'이 'file2'로 복사된 것을 확인하실 수 있습니다.\n\n");
	system("ls -al");

	printf("\n이번에는 옵션을 실습해 보겠습니다.\n");
	next_line();

	printf("'-i' 옵션을 사용해 동일한 파일명이 존재할경우\n");
	printf("덮어쓸 것인지 확인 절차를 받을 수 있습니다.\n\n");
	next_line();

	printf("다음은 'dir1' 디렉토리에서 \"ls -l\" 명령어를 실행한 결과입니다.\n\n");
	system("ls -l dir1");
	next_line();

	printf("\n'dir1' 디렉토리에는 'file1' 파일이 들어있습니다.\n\n");
	next_line();

	printf("[실습] \"cp\" 명령어에 '-i' 옵션을 이용하여\n");
	printf("'dir1/file1'을 현재 폴더의 'file1'(으)로 복사해보세요.\n");
	printf("사용법 : cp [옵션] [원본 파일] [대상 파일]\n\n");
	printf("(입력 후 묻는 절차에 y 혹은 n으로 답해보세요)\n");
	run_command("cp -i dir1/file1 file1");

	printf("\n\n다음은 \"ls -al\"을(를) 실행한 결과입니다.\n");
	system("ls -al");
	next_line();

	printf("\n만약 'y'를 입력했다면, 'file1' 파일의 내용은\n");
	printf("'dir1' 디렉토리의 'file1' 파일의 내용으로 덮어 씌워졌을 것이고\n\n");
	printf("'n'을 입력했다면 'file1'의 복사 작업이 수행되지 않았을 것입니다.\n\n");
	next_line();

	printf("이제 \"cp\" 명령을 이용해 디렉토리를 복사해보겠습니다.\n");
	next_line();

	printf("디렉토리를 복사할 때 '-r' 옵션을 사용하면\n");
	printf("해당 디렉토리의 하위 파일과 디렉토리도 함께 복사할 수 있습니다.\n\n");
	next_line();

	printf("다음은 현재 디렉토리에서 \"ls -al\"을 한 결과입니다.\n\n");
	system("ls -al");
	next_line();

	printf("[dir1]\n");
	printf("다음은 'dir1' 디렉토리에서 \"ls -l\"을 한 결과입니다.\n\n");
	system("ls -l dir1");
	next_line();

	printf("\n\n현재 디렉토리 밑에 'dir1' 디렉토리가 있고\n");
	printf("'dir1' 디렉토리 밑에는 'file1' 파일이 있습니다.\n\n");
	next_line();

	printf("[실습] \"cp\" 명령어와 '-r' 옵션을 이용하여\n");
	printf("'dir1'을 'dir2'로 현재 디렉토리에 복사해보세요.\n");
	printf("사용법 : cp [옵션] [원본 디렉토리] [대상 디렉토리]\n");
	run_command("cp -r dir1 dir2");

	printf("\n\n다음은 현재 디렉토리에서 \"ls -al\"을 한 결과입니다.\n\n");
	system("ls -al");
	next_line();

	printf("\n다음은 'dir2' 디렉토리에서 \"ls -l\"을 한 결과입니다.\n\n");
	printf("[dir2]\n");
	system("ls -l dir2");
	next_line();

	printf("\n위의 각각의 결과들을 보면, 'dir1'이 'dir2'(으)로 복사되었고\n");
	printf("디렉토리 하위에 있는 파일까지 함께 복사되었습니다.\n");
	next_line();

	printf("이렇게 \"cp\" 명령어의 옵션과 실습을 학습해보았습니다.\n\n");
	printf("\"cp\" 명령어는 자주 쓰이는 명령어들 중 하나입니다.\n");
	next_line();

	printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
	printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
	printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
	next_line();

	printf("\"cp\" 명령어의 학습이 끝났습니다.\n");
	printf("고생하셨습니다.\n");

	delete_defdir();
}

