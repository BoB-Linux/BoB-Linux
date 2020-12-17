#include "func.h"

void training_head_tail(void)
{
	create_defdir();
	system("clear");

	//////////////////////////////////////////////////////////////////////////////////////////////////////

	int i = 0;
	char tmp[40];
	for(i=1; i<500; i++)
	{
		snprintf(tmp, sizeof(tmp), "echo '%d번째 줄' >> textfile", i);
		system(tmp);
	}
	system("echo '마지막 줄' >> textfile");

  	printf("이번에 학습할 명령어는 \"head\"와 \"tail\"입니다.\n\n");
    next_line();

	printf("기초 명령어 학습에서 \"cat\"에 대해서 배운 적이 있습니다.\n\n");
	next_line();
	
    printf("\"cat\"은 특정 파일의 내용을 출력하는 명령어로 자주 사용합니다.\n\n");
	printf("하지만, \"cat\" 명령어를 통해 어떤 파일을 볼 때\n");
    printf("그 파일의 내용이 너무 많거나 줄(Line) 수가 많다면\n");
    printf("내용이 터미널에 표시되지 않거나 읽기 힘들 수 있습니다.\n");
	next_line();
	
    printf("이 때 사용할 수 있는 명령어가 바로 \"head\"와 \"tail\"입니다.\n");
    next_line();

    printf("위의 두 명령어의 실행파일은 \"/usr/bin\" 디렉토리 밑에 있습니다.\n");
    next_line();

    //head
    system("clear");
    printf("[head]\n\n\n");
	printf("\"head\"는 특정 파일의 내용을 맨 앞에서부터 출력할 수 있는 명령어입니다.\n");
	next_line();
	
    printf("아무런 옵션없이 파일이름만을 입력하면\n");
    printf("맨 앞에서부터 아래로 '10'줄의 내용을 출력합니다.\n");
    next_line();

	printf("사용법은 \" head [옵션] [파일 이름]\" 입니다.\n");
    printf("ex) head test.txt\n\n");
	next_line();
	
    printf("[실습] \"head\"를 아무런 옵션 없이 이용하여 'textfile'의 내용을 출력해보세요.\n");
    printf("사용법 : head [파일이름]\n");
	just_run_command("head textfile");
	
    printf("\n\n첫 번째 줄부터 열 번째 줄까지 총 10개의 줄이 출력되었습니다.\n\n");
	next_line();
	
    printf("자신이 원하는 줄 갯수만큼 출력하기 위해서는 '-n' 옵션을 사용하면 됩니다.\n\n");
	next_line();
	
    printf("[실습] \"head\"에 '-n 20' 옵션을 이용하여 'textfile'의 내용을 20줄 출력해 보세요.\n");
    printf("사용법 : head [옵션] [파일 이름]\n");
	just_run_command("head -n 20 textfile");
	next_line();
	
    printf("\n\n파일의 내용이 20줄까지 정상적으로 출력되었습니다.\n\n");
	next_line();
	
    printf("[실습] \"head\"에 '-c 100' 옵션을 이용하여 'textfile' 파일에서\n");
    printf("100byte만큼의 내용을 출력해보세요.\n");
    printf("사용법 : head [옵션] [파일 이름]\n");
    just_run_command("head -c 100 textfile");
    next_line();

    printf("\n\n출력된 결과는 'textfile'에서 100byte만큼의 내용만 가져온 것입니다.\n\n\n");
    next_line();

    printf("\"head\" 명령어의 옵션은 다음과 같습니다.\n\n");
    printf("  [ -c, --bytes=[-]K ]\n");
    printf("각 파일의 처음부터 K bytes까지를 출력합니다.\n");
    printf("'-'를 붙일 경우에는 각 파일의 마지막 K bytes를 출력합니다.\n\n");
    printf("  [ -n, --linux=[-]K ]\n");
    printf("각 파일의 처음 10개 행을 출력하지 않고, 처음부터 k번째 행까지 출력합니다.\n");
    printf("'-'를 붙일 경우에는 각 파일의 마지막 K 번째 행을 출력합니다.\n\n");
    printf("  [ -q, --quiet, --silent ]\n");
    printf("파일의 이름을 header에 출력하지 않습니다.\n\n");
    printf("  [ -v, --verbose ]\n");
    printf("항상 파일의 이름을 header에 출력합니다.\n\n");
    next_line();

    //tail
    system("clear");
    printf("[tail]\n\n\n");

	printf("\"tail\"의 옵션은 \"head\"와 흡사합니다.\n");
	printf("다른 점이 있다면 \"tail\"은 파일의 맨 뒤의 내용을 읽어옵니다.\n");
	next_line();
	
    printf("\"tail\"을 아무런 옵션 없이 사용하면 맨 뒤부터 위로 10줄의 내용을 출력합니다.\n\n");
    next_line();

	printf("[실습] \"tail\"을 옵션 없이 이용하여 'textfile'의 내용을 출력해보세요.\n");
    printf("사용법 : tail [파일 이름]\n");
	run_command("tail textfile");
	
    printf("\n\n맨 뒤에서부터 10줄의 내용이 출력됩니다.\n");
	next_line();
	
    printf("tail도 역시 '-n' 옵션을 이용하여 원하는 줄 개수 만큼 뒤에서 출력할 수 있습니다.\n\n");
	next_line();
	
    printf("[실습] \"tail\"에 '-n 20' 옵션을 이용하여\n");
    printf("뒤에서 20줄 만큼 'textfile'의 내용을 출력해보세요.\n");
	printf("사용법 : tail [옵션] [파일 이름]\n");
	run_command("tail -n 20 textfile");
	
    printf("\n\n맨 뒤에서부터 위로 20줄의 내용이 출력되었습니다.\n\n");
    next_line();

	printf("\"head\"와 마찬가지로 '-c' 옵션을 이용하여 \n");
    printf("바이트 단위로 파일의 내용을 뒤에서부터 출력할 수도 있습니다.\n\n");
	next_line();
	
    printf("\"tail\"을 이용한 특별한 기능은 어떤 파일을 모니터링 할 수 있다는 것입니다.\n\n");
    next_line();

	printf("로그 파일의 경우 새롭게 쌓인 내용이 맨 뒤에 추가되기 때문에\n");
    printf("\"tail\"을 이용해 이를 추적할 수 있습니다.\n\n");
	printf("이 때 사용하는 옵션은 '-f' 입니다.\n");
    printf("해당 파일의 내용을 지속적으로 출력합니다.\n\n");
	next_line();
	
    printf("[실습] '-f' 옵션을 이용하여 'textfile'의 내용을 추적해보세요.\n");
	printf("$ tail [옵션] [파일명]\n");
	fake_run_command("tail -f textfile");
	system("tail textfile");
	sleep(1);
	
    printf("잘 보고 계신가요.\n");
	sleep(1);
	
    printf("보시는 것 처럼 추가 되는 내용이 갱신됩니다.\n\n\n");
	sleep(1);
	
    printf("학습의 진행을 위해서 \"tail\"을 종료시키겠습니다. \n");
    printf("평소 사용시에는 '컨트롤 + C' 키를 입력하여 \"tail\"을 종료할 수 있습니다.\n\n");
    next_line();

	printf("\"tail\"은 네트워크 모니터링 시에 쌓이는 로그를 확인하기 위해 사용하는 등\n");
    printf("다양하게 사용할 수 있습니다.\n");
	next_line();

	printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
    printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
    printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
    next_line();
    
    printf("\"head\" 명령어와 \"tail\" 명령어의 학습이 끝났습니다.\n");
    printf("고생하셨습니다.\n");

    // Delete default directory
	delete_defdir();
}
