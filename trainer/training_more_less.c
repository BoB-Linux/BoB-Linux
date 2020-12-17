#include "func.h"

void training_more_less()
{
	create_defdir();
	system("clear");

	FILE* fp = fopen("test.txt", "w");
	for(int i = 0; i < 20; i++)
	{	
		fprintf(fp, "\n[%d 번째]\n\n", i+1);
		fprintf(fp, "이것은 more 명령어의 테스트 파일 test.txt 입니다.\n\n");
		fprintf(fp, "more와 less로 내용을 보는 중에는 아래와 같은 입력을 통해서 제어할 수 있습니다.\n\n");
		fprintf(fp, "\tspace : 다음 페이지\n");
		fprintf(fp, "\tb     : 이전 페이지\n");
		fprintf(fp, "\tEnter : 한 줄씩 내리기\n");
		fprintf(fp, "\t=     : 현재 라인 확인\n");
		fprintf(fp, "\tq     : 나가기\n\n");
	}
	fclose(fp);

	printf("이번에 학습할 명령어는 \"more\"와 \"less\"입니다.\n\n");
	printf("두 명령어 모두 파일의 내용을 화면에 출력하는 기능을 합니다.\n");
	next_line();
	
	printf("\"more\" 명령어의 실행 파일은 \"/usr/bin/more\"(으)로 있습니다.\n");
	printf("또한 \"less\" 명령어의 실행 파일은 \"/usr/bin/less\"(으)로 있습니다.\n");
	next_line();
	
	printf("\"cat\" 명령어와 다른 점은 화면 단위, 페이지 단위로 보여준다는 점입니다.\n");
	next_line();
	
	printf("내용이 긴 파일을 \"cat\"을 이용하여 화면에 출력하면\n");
	printf("터미널 화면을 초과하는 앞의 내용을 보기 힘든 단점이 있습니다.\n");
	next_line();
	
	printf("<Shift+PgUp>, <Shift+PgDn> 으로 넘길 수는 있으나 아무래도 불편함이 있습니다.\n");
	next_line();
	
	printf("이럴 때 사용하는 것이 \"more\"과 \"less\"입니다.\n");
	printf("\"more\"는 화면 사이즈만큼, less는 페이지 단위로 출력합니다.\n");
	next_line();
	printf("\"more\"와 \"less\"로 내용을 보는 중에는 아래와 같은 입력을 통해서 제어할 수 있습니다.\n\n");
	printf("  [ space  : 다음 페이지]\n\n");
	printf("  [ b 	   : 이전 페이지]\n\n");
	printf("  [ Enter  : 한줄씩 내리기]\n\n");
	printf("  [ =      : 현재 라인 확인]\n\n");
	printf("  [ q      : 나가기]\n\n");
	next_line();
	
	printf("[실습] more를 통해 test.txt를 읽어봅시다.\n");
	printf("사용법 : \"more [파일명]\"\n");
	printf("(이 후 space, b, enter, q를 통해 화면을 넘겨보세요.)\n");
	just_run_command("more test.txt");
	
	printf("\n\n이런 식으로 페이지를 앞 뒤로 넘기며 파일의 내용을 읽을 수 있습니다.\n");
	next_line();
	
	printf("다음 명령어는 \"less\"입니다.\n");
	next_line();
	
	printf("\"less\"는 \"more\"과 유사하지만, 키보드 방향키를 이용해 위 아래로 스크롤 할 수 있습니다.\n");
	next_line();
	
	printf("또한, \"more\"에서 사용했던 [space], [b], [q] 등 단축키를 모두 사용할 수 있습니다.\n");
	next_line();
	
	printf("방향키로 스크롤 할 수 있다는 편의성 때문에 많이 선호됩니다.\n\n");
	next_line();
	
	printf("[실습] less를 통해 test.txt를 읽어봅시다.\n");
	printf("사용법 : \"less [파일명]\"\n");
	printf("(이 후 화면을 자유롭게 넘겨보세요.)\n");
	just_run_command("less test.txt");
	
	printf("\n\n\"cat\" 명령어로 내용을 보는 것이랑은 다른 느낌이죠?\n");
	printf("보통 읽을 파일의 내용이 많을 때는 \"more\", \"less\" 명령어를 사용합니다.\n");
	next_line();
	
	printf("반대로 내용이 적을 때는 굳이 스크롤 할 이유가 없으니 \"cat\"으로 충분하겠지요.\n");
	next_line();
	
	printf("이처럼 리눅스 명령어는 상황에 맞게 사용하시면 됩니다.\n");
	next_line();
	
	printf("파이프라인(|)을 배웠다면, 출력된 결과 내용이 너무 많아서 읽기가 어려울 때 \n");
	printf("\"more\"과 \"less\"를 활용하여 페이지를 넘겨가며 내용을 볼 수 있습니다.\n");
	next_line();
	
	printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
	printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
	printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
	next_line();
	
	printf("\"more, less\" 명령어의 학습이 끝났습니다.\n");
	printf("고생하셨습니다.\n");

	system("rm -f more.txt");

	delete_defdir();
}
