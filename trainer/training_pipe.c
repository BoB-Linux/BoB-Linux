#include "func.h"

void training_pipe(void)
{   
	create_defdir();

	system("clear");

	printf("이번에 배울 것은 \"pipe(파이프)\"라고 불리는 ' | ' 문자 입니다.\n");
	next_line();

	printf("파이프라는 것은 하나의 명령어라기보다는\n");
	printf("리눅스의 쉘 프롬프트(터미널)에서 여러 명령어를 한 줄에 입력하여\n");
	printf("한 번에 수행할 수 있게 도와주는 기능 중 하나입니다.\n");
	next_line();

	printf("리눅스에서 여러 명령어를 한 줄에 입력하여 한 번에 수행할 수 있게 도와주는 기능은\n");
	printf("파이프 이외에도 '세미콜론(;)', '더블 앰퍼샌드(&&)', '더블 버티컬바(||)'가 있습니다.\n");
	next_line();

	printf("[세미콜론(;)]\n");
	printf("\"touch\" 명령어로 test1이라는 파일을 만들고\n");
	printf("\"cat\" 명령어로 test1에 입력을 한 뒤\n");
	printf("\"cat\"명령어로 test1 파일의 내용을 보고 싶다면\n");
	next_line();

	printf("\"touch test1\"\n");
	printf("\"cat > test1\"\n");
	printf("\"cat test1\"\n\n이렇게 3번 입력하여야 합니다.\n");
	next_line();

	printf("하지만 세미콜론(;)을 이용하면\n");
	next_line();

	printf("\"touch test1; cat > test1; cat test1\" 라고 입력하여\n");
	printf("한 줄로 3가지 명령어를 실행하게 됩니다.\n");
	next_line();

	printf("게다가 세미콜론(;)은 입력된 명령어들 중 한 개가 실패해도 그 다음 명령어는 실행됩니다.\n");
	next_line();

	printf("즉, 위에 명령어 3개로 예시를 들자면 \"touch test1 \" 명령어가 실패해도\n");
	printf("\"cat > test1\"와 \"cat test1\"은 실행됩니다.\n");
	next_line();

	printf("한 번 실습을 해보겠습니다.\n\n");
	next_line();

	printf("[실습] \"touch test1; cat > test1; cat test1\"을 입력하시고\n");
	printf("아무 내용 입력한 뒤 Ctrl + d로 저장하세요.\n");
	just_run_command("touch test1; cat > test1; cat test1");

	printf("\n\n잘 따라하셨다면 파일이 만들어졌을 것이고, 내용을 입력하고\n");
	printf("내용을 확인하실 수 있었을 것입니다.\n");
	next_line();

	printf("즉. touch test1 명령어로 파일이 만들어지고,\n");
	printf("cat > test1을 통해 내용을 입력받았고\n");
	printf("cat test1 명령어가 실행되어 입력한 내용이 출력되었습니다.\n");
	next_line();
	
	system("clear");
	printf("[pipe(|)]\n");
	printf("pipe(|)는 리눅스에서 2개의 프로세스를 연결시켜주는 연결 통로 역할을 합니다.\n");
	next_line();

	printf("파이프는 프로세스의 통신을 위해 도입한 것으로\n");
	printf("어떤 프로세스의 표준 출력이 -> 어떤 프로세스의 표준 입력으로 쓰이게 하는 것입니다.\n");
	next_line();

	printf("잘 이해가 안되실 수 있습니다!\n");
	next_line();

	printf("앞에 명령어의 실행 결과로 나온 출력 결과를\n");
	printf("-> 뒤에 실행하는 명령어의 입력 값으로 넣어준다는 말입니다.\n\n");
	next_line();
	printf("앞에서 밀가루 반죽을 모양틀을 이용해 모양을 떠서 나온 결과인 별모양 밀가루 반죽을\n");
	printf("-> 뒤에서 진행할 오븐에 밀가루 반죽을 넣어 빵 굽는 작업에\n");
	printf("별모양 밀가루 반죽을 넣는다 라고 이해하시면 됩니다.\n");
	next_line();

	printf("파이프는 한 번에 사용 가능한 수의 제한이 없습니다.\n");
	next_line();

	printf("그래서 이전 명령어의 출력값을 필터링 하거나 사용자가 볼 수 있게 할 때 주로 사용합니다\n");
	next_line();

	printf("주로 \"awk\", \"cut\", \"grep\", \"more\" 같은 명령어들과 조합하여 사용됩니다.\n\n");
	next_line();

	printf("[실습] \"cat ~/.bashrc | more\"을 입력하여 pipe 기능을 실습해보세요.\n");
	printf("(q를 입력하면 종료됩니다.)\n");
	just_run_command("cat ~/.bashrc | more");

	printf("\n\n잘 따라하셨다면 .bashrc 파일의 내용을 한 페이지씩 볼 수 있었을 것입니다.\n");
	next_line();

	printf("위의 명령어의 해석을 해드리자면\n\n");
	printf("\"cat\"으로 .bashrc 파일의 내용을 출력하는데, 바로 출력하지 않고\n");
	printf("\"more 명령어\"의 입력으로 보내어\n");
	printf("\"more 명령어\"가 정해진 규칙에 따라 한 페이지씩 보일 수 있게 한 것입니다.\n");
	next_line();
	
	system("clear");
	printf("[더블 앰퍼샌드(&&)]\n");
	next_line();

	printf("더블 앰퍼샌드(&&)는 위에서 배운 세미콜론(;)과는 다르게\n");
	printf("이전의 명령어가 정상적으로 동작되지 않으면 뒤에 명령어는 실행되지 않습니다.\n");
	next_line();

	printf("바로 실습해보도록 하겠습니다.\n\n");
	next_line();

	printf("[실습] \"touch && cat > test1\"이라고 입력해보세요.\n");
	just_run_command("touch && cat > test1");

	printf("\n\n잘 따라하셨다면 \"cat > test1\" 명령은 실행되지 않았을 것입니다.\n");
	next_line();

	printf("더블 앰퍼샌드(&&)는 앞 명령어가 제대로 실행되지 않으면 뒤의 명령어도 실행되지 않기에\n");
	printf("\"touch\"명령어가 제대로 실행되지 않아 \"cat\" 명령어는 자동으로 실행되지 않은 것입니다.\n");
	next_line();
	
	system("clear");
	printf("[더블 버티컬바(||)\n");
	next_line();

	printf("더블 버티컬바(||)는 위에서 배운 세미콜론(;)과 비슷합니다.\n");
	next_line();

	printf("더블 버티컬바(||)는 'or'의 의미를 가지고 있어서\n");
	printf("이전의 명령어가 제대로 동작하지 않아도 각각 모든 명령을 수행합니다.\n");
	next_line();

	printf("더블 버티컬바(||)는 간단히 실습해보겠습니다.\n\n");
	next_line();

	printf("[실습] \"touch || echo hello world\"라고 입력해보세요.\n");
	just_run_command("touch || echo hello world");

	printf("\n\n잘 따라하셨다면 \"touch\" 명령어가 제대로 동작하지 않아도\n");
	printf("화면에 \"hello world\" 문구가 보일 것입니다.\n");
	next_line();

	printf("이렇게 한 줄에서 여러 명령어를 한 번에 수행할 수 있게 해주는 기능 4가지를 배웠습니다\n");
	next_line();

	printf("\"세미콜론(;)\", \"pipe(|)\", \"더블 앰퍼샌드(&&)\", \"더블 버티컬바(||)\"\n");
	printf("이 4가지 모두 자주 쓰이고 유용하게 쓰이니 숙지해두시면 좋습니다.\n");
	next_line();

	printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
	printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
	printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
	next_line();

	printf("\"pipe(|)\" 외 3가지에 대한 학습이 끝났습니다.\n고생하셨습니다.\n");

	delete_defdir();
}
