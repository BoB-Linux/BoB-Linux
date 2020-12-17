#include "func.h"

void training_nano(void)
{
	create_defdir();
	system("clear");
	//////////////////////////////////////////////////////////////////////////////////////////////////////
	
	printf("이번에 학습할 명령어는 \"nano\"입니다.\n\n");
	printf("\"nano\" 명령어는 'nano 텍스트 편집기'를 불러오는 명령어입니다.\n");
	next_line();
	
	printf("\"nano\" 명령어의 실행 파일은 \"/usr/bin/nano\"(으)로 있습니다.\n");
	next_line();
	
	printf("사용법은 : \"nano [파일명]\"입니다.\n");
	next_line();
	
	printf("다른 유명한 텍스트 편집기로는 \"vi\"와 \"vim\" 등이 있으며,\n");
	printf("\"nano\" 에디터는 그 중에서 사용하기 수월한 편에 속합니다.\n");
	next_line();

	printf("'nano [파일명]' 과 같이 입력하면 특정 파일을 nano 편집기로 열 수 있습니다.\n\n");
	printf("ex) nano file\n");
	next_line();
	
	printf("[실습] test 파일을 nano 편집기로 열어보세요.\n");
	printf("(명령어 실행 후 [컨트롤+x]를 눌러 빠져나오세요.)\n");
	just_run_command("nano test");
	system("clear");
	
	printf("nano 텍스트 편집기에서는 기본적으로 방향키로 문자, 라인 이동이 가능합니다.\n");
	next_line();
	
	printf("이번에는 텍스트를 입력하여 저장해보겠습니다.\n"); 
	next_line();
	
	printf("아까와 같이 nano [파일명]으로 텍스트 편집기를 킨 후\n");
	printf("원하는 내용을 적은 뒤에 [컨트롤+x]로 저장합니다.\n");
	next_line();
	
	printf("내용이 변경되게 되면 '수정한 버퍼 내용을 저장하시겠습니까?'\n");
	printf("라는 확인을 하게 되고, y를 누르게 되면 저장할 이름을 정합니다.\n");
	next_line();
	
	printf("nano test로 'test'라는 파일을 열었기 때문에, \n");
	printf("저장할 이름은 기본적으로 'test'로 지정되어 있습니다.\n");
	next_line();
	
	printf("따라서 해당 파일에 저장하고 싶다면, 이름을 변경하지 않고\n");
	printf("Enter를 눌러 저장하면 됩니다.\n\n");
	next_line();
	
	printf("[실습] test 파일을 nano 편집기로 열어서 아무 내용이나 적어보세요.\n");
	printf("(저장할 땐 원본 파일명인 'test'로 저장하세요.)\n");
	just_run_command("nano test");
	system("clear");
	
	printf("내용이 잘 저장되었다면 \"cat\" 명령어를 통해 확인할 수 있습니다.\n\n");
	printf("[실습] test 파일의 내용을 \"cat\" [파일명]으로 확인해보세요.\n");
	just_run_command("cat test");
	
	printf("\n\n방금 입력한 내용이 출력됩니다.\n");
	next_line();
	
	printf("\"nano\"의 자주 사용하는 옵션들입니다.\n\n");
	printf("  [ -B <파일명> ]      : 변경 이전 파일이 '<파일명>~'이름으로 백업됩니다.\n\n");
	printf("  [ -m <파일명> ]      : 마우스를 사용합니다.\n\n");
	printf("  [ +<라인> <파일명> ]  : 파일을 열자마자 특정 라인으로 이동합니다.\n\n");
	next_line();
	
	system("clear");
	printf("\"nano\" 편집기 내에서도 다양한 기능들이 존재하는데, 다음과 같습니다.\n\n");
	printf("  부가 기능\n");
	printf("  [ Ctrl+g (F1) ] : 도움말 표시\n");
	printf("  [ Ctrl+x (F2) ] : nano 종료\n");
	printf("  [ Ctrl+o (F3) ] : 파일 저장\n");
	next_line();
	
	system("clear");
	printf("  유용한 기능\n");
	printf("  [ Ctrl+w (F6) ] : 문자 검색\n\n");
	printf("  [ Ctrl+\\ ]      : 문자 검색 후 수정\n\n");
	printf("  [ Ctrl+k (F9) ] : 현재 줄 잘라내기\n\n");
	printf("  [ Ctrl+u ]      : 이전에 자른 줄을 붙여넣기\n\n");
	printf("  [ Alt+]         : 현재 괄호에 매칭되는 괄호 찾기\n");
	printf("                    (코딩시 유용하게 사용될 수 있음)\n\n");
	next_line();
	
	system("clear");
	printf("  라인 이동\n");
	printf("  [ Ctrl+y (F7) ] : 이전 화면으로 이동\n\n");
	printf("  [ Ctrl+v (F8) ] : 다음 화면으로 이동\n\n");
	printf("  [ Ctrl+a ]      : 현재 라인의 시작 위치로 이동\n\n");
	printf("  [ Ctrl+e ]      : 현재 라인의 끝 위치로 이동\n\n");
	printf("  [ Alt+( ]       : 현재 문단의 시작으로 이동\n\n");
	printf("  [ Alt+) ]       : 현재 문단의 끝으로 이동\n\n");
	printf("  [ Alt+\\ ]       : 파일의 첫 라인으로 이동\n\n");
	printf("  [ Alt+/ ]       : 파일의 마지막 라인으로 이동\n\n");
	next_line();
	
	printf("\"nano\" 편집기를 이용해 다양한 파일들을 확인하고 수정해보세요.\n");
	next_line();
	
	printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
	printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
	printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
	next_line();
	
	printf("\"nano\" 명령어의 학습이 끝났습니다.\n");
	printf("고생하셨습니다.\n");
	
	delete_defdir();
}
