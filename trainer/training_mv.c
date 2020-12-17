#include "func.h"

int run_command(char valid_cmd[]);
void next_quit();

void training_mv(void)
{
	create_defdir();
	system("clear");

	//////////////////////////////////////////////////////////////////////////////////////////////////////

	//실습할 파일&디렉토리 제공
	system("mkdir dir1 dir2");
	system("touch dir1/file1");


	printf("이번에 학습할 명령어는 \"mv\"입니다.\n\n");
	printf("\"mv\"는 파일이나 디렉터리를 이동할 때 사용되는 명령어입니다.\n");
	next_line();
	
	printf("\"mv\" 명령어의 실행 파일은 \"/usr/bin/mv\"(으)로 있습니다.\n");
	next_line();
	
	printf("사용법은 : \"mv [옵션] [원본 파일] [대상 파일(디렉토리)]\"입니다.\n");
	printf("ex) mv /home/rookie/file /home/test/file\n");
	next_line();
	
	printf("[옵션]은 선택 사항이며 해당 명령어에 지정할 옵션을 지정합니다.\n\n");
	printf("[원본 파일]은 옮기고자 하는 파일명 또는 디렉토리명을 입력합니다.\n\n");
	printf("[대상 파일]에는 옮길 위치 또는 바꿀 파일명을 입력합니다.\n\n");
	next_line();
	
	printf("\"mv\"에서 자주 사용하는 옵션은 다음과 같습니다.\n\n");
	printf("  [ -i (--interactive) ] : 이동할 디렉토리에 동일한 파일명이 존재할 경우\n");
	printf("	       	           덮어 쓸 것인지 물어봅니다.\n\n");
	printf("  [ -f (--force) ]   : 같은 파일의 이름이 존재하는 경우에 강제로 덮어씁니다.\n\n");
	printf("  [ -b ]             : 덮어쓸 때 백업본 파일을 만듭니다.\n\n");
	printf("  [ -v (--verbose) ] : 파일을 이동할 때 이동 내용을 출력합니다.\n\n");
	printf("  [ -u (--update) ]  : 이동할 디렉터리에 동일한 파일명이 있을 경우 검사하여\n");
	printf("                       해당 파일이 최신 파일이면 이동하지 않습니다.\n\n");
	next_line();
	
	printf("그럼 'dir1'에 있는 'file1'을 'dir2'로 이동시켜 봅시다.\n");
	next_line();

	printf("우선 \"ls -al\"명령으로 파일 목록을 확인해봅시다.\n");
	system("ls -al");
	next_line();
	
	printf("[dir1]\n");
	system("ls -l dir1");

	printf("\n현재 'dir1'에는 'file1'이 들어있습니다.\n");
	printf("이동시킬 파일의 위치는 \"dir1/file1\"이고, 이동할 위치는 \"dir2\"입니다.\n\n");
	next_line();
	
	printf("[실습] \"mv\" 명령어를 입력해 파일을 이동시켜보세요.\n");
	printf("사용법 : \"[원본 파일] [이동할 디렉토리]\"\n");
	run_command("mv dir1/file1 dir2");
	
	printf("\n\n\"ls\" 명령으로 'dir2'에 'file1'이 잘 이동되었는지 확인해봅시다.\n\n");
	next_line();
	
	printf("[실습] \"ls -l dir2\"를 입력하세요.\n");
	just_run_command("ls -l dir2");

	printf("\n\n\"mv\"는 파일이나 디렉토리를 이동할 때도 사용되지만\n");
	printf("이름을 변경하고자 할 때도 사용됩니다.\n");
	next_line();
	
	printf("파일을 동일한 디렉토리 안에서 이동할 경우 이름이 변경됩니다.\n");
	next_line();
	
	printf("같은 'dir2'안에서 'file1'을 'file2'로 이름을 바꿔봅시다.\n");
	printf("변경할 파일은 \"dir2/file1\" 이고 변경할 위치는 \"dir2/file2\"입니다.\n\n");
	next_line();
	
	printf("[실습] \"mv\" 명령어를 입력해 파일 이름을 변경해보세요.\n");
	run_command("mv dir2/file1 dir2/file2");
	
	printf("\n\n\"ls\" 명령으로 'dir2'에 'file1'의 이름이 'file2'로 변경되었는지 확인해봅시다.\n\n");
	next_line();
	
	printf("[실습] \"ls -l dir2\"를 입력하세요.\n");
	just_run_command("ls -l dir2");

	printf("\n\n파일 이름이 성공적으로 'file2'로 변경된 것이 보입니다.\n");
	next_line();
	
	printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
	printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
	printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
	next_line();
	
	printf("\"mv\" 명령어의 학습이 끝났습니다.\n");
	printf("고생하셨습니다.\n");

    delete_defdir();
}


