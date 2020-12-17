#include "func.h"

void training_make()
{
	create_defdir();
	system("clear");

	printf("이번에 학습할 명령어는 \"make\" 입니다.\n\n");

	printf("\"make\"는 파일 관리 유틸리티로서\n");
	printf("여러 소스 파일의 빌드 작업을 간소화 시켜줍니다.\n");
	next_line();

	printf("\"make\" 명령어의 실행 파일은 \"/usr/bin/make\"(으)로 있습니다.\n");
	next_line();

	printf("사용법은 \"make [옵션] [target]\" 입니다.\n");
	printf("ex) make\n");
	next_line();

	printf("기본적으로 [옵션]과 [target]을 사용하지 않고\n");
	printf("\"make\"만 입력하여 사용합니다.\n\n\n");
	next_line();

	printf("[컴파일 과정]\n\n");
	printf("컴파일 진행 중에 나오는 파일들을 나열하면\n");
	printf("'.c' -> '.i' -> '.s' -> '.o' -> '실행 파일' 입니다.\n\n");
	next_line();

	printf("예를 들어 'foo.c' 파일과 'main.c' 파일이 있습니다.\n\n");
	next_line();

	printf("터미널에서 위의 두 파일을 빌드하려면\n\n");
	printf("$ gcc -c -o foo.o foo.c\n");
	printf("$ gcc -c -o main.o main.c\n");
	printf("$ gcc -o foo foo.o main.o\n\n");
	printf("와 같이 입력해야 합니다.\n");
	next_line();

	printf("하지만 코드가 수정되었다면, 위와 같은 작업을 계속 반복해야 합니다.\n");
	next_line();

	printf("만약 프로젝트의 크기가 커지면 소스 코드의 수도 많아지게 되고\n");
	printf("수 십, 수 백 개의 파일을 'gcc'를 이용하여 일일히 하다보면 시간이 오래 걸립니다.\n");
	next_line();

	printf("이렇게 컴파일처럼 반복되는 과정을\n");
	printf("명령어 한 번으로 수행하겠끔 만든 것이 \"make\" 입니다.\n");
	next_line();

	printf("\"make\"는 해당 디레토리 안에 \"Makefile\"이라는 이름을 가진 파일을 찾습니다.\n");
	printf("그렇기 때문에 \"make\"를 이용하려면 \"Makefile\"이라는 파일이 있어야 합니다.\n");
	next_line();

	printf("\"make\"를 이용하면 좋은 점은\n");
	printf("수행하고자 하는 반복적인 명령을 자동화 해주므로 시간이 절약되고\n");
	printf("프로그램의 종속 구조를 빠르게 파악 할 수 있어서 관리가 용이합니다.\n");
	next_line();


	printf("\"Makefile\"은 컴파일 시 수행될 다양한 옵션을 정의해놓은 파일이며\n");
	printf("sciprt 언어의 문법적 특성을 가지고 있습니다.\n\n");
	next_line();

	system("clear");
	printf("\"Makefile\"의 요소는 크게 4가지로 나뉩니다.\n\n");
	printf("[ 목적 파일 (Target) ]\n");
	printf("명령어가 수행되어 나온 결과를 저장할 파일입니다.\n\n");
	printf("[ 의존성 파일 (Dependency) ]\n");
	printf("'목적 파일'을 만들기 위해 필요한 재료입니다.\n\n");
	printf("[ 명령어 (Command) ]\n");
	printf("실행 될 명령어입니다.\n\n");
	printf("[ 매크로 (macro) ]\n");
	printf("치환 될 문자를 정의합니다.\n\n");
	next_line();

	printf("\"Makefile\"의 문법 구조는 다음과 같습니다.\n");
	printf("[매크로]\n\n");
	printf("[목적 파일] : [의존성 파일]\n");
	printf("    [명령어]\n\n");
	printf("[목적 파일] : [의존성 파일]\n");
	printf("    [명령어]\n\n");
	next_line();

	printf("다음은 예시입니다.\n\n");
	printf("ab : a.o b.o main.o\n");
	printf("    gcc -o abc a.o b.o main.o\n\n");
	printf("a.o : a.c\n");
	printf("    gcc -c -o a.o a.c\n\n");
	printf("b.o : b.c\n");
	printf("    gcc -c -o b.o b.c\n\n");
	printf("main.o : main.c\n");
	printf("    gcc -c -o main.o main.c\n\n");
	next_line();

	printf("위의 예시를 설명하자면 다음과 같습니다.\n\n");
	next_line();
	printf("[매크로]는 위의 예시에서는 사용되지 않았습니다.\n\n");
	next_line();
	printf("':'를 기준으로 왼쪽에는 [목적 파일] 입니다.\n\n");
	next_line();
	printf("':'를 기준으로 오른쪽은 [목적 파일]이 필요로 하는 [의존성 파일] 입니다.\n\n");
	next_line();
	printf("'gcc' 구문은 [목적 파일]이 생성되기 위해 수행될 [명령어] 이며\n");
	printf("반드시 'tab 키'를 한 번 하고 난 뒤 입력해야 합니다.\n\n");
	next_line();

	printf("참고) \"Makefile\"의 내용은 아래에서 위로 수행되는 흐름입니다.\n");
	next_line();

	system("clear");
	printf("처음의 'foo.c' 파일과 'main.c' 파일을 빌드하는 문법은 다음과 같습니다.\n\n");
	printf("foo : foo.o main.o\n");
	printf("    gcc -o foo foo.o main.o\n\n");
	printf("foo.o : foo.c\n");
	printf("    gcc -c -o foo.o foo.c\n\n");
	printf("main.o : main.c\n");
	printf("    gcc -c -o foo.o main.c\n\n");
	printf("clean :\n");
	printf("    rm -f *.o foo\n\n");
	next_line();

	printf("위의 \"Makefile\" 내용을 바탕으로 \"make\"를 통해 빌드를 하고 나면\n");
	printf("'.o' 파일들과 '실행파일'이 생성됩니다.\n");
	next_line();

	printf("자신이 만든 코드를 배포할 때는 소스 코드만을 필요로 하기 때문에\n");
	printf("'.o' 파일과 실행 파일을 한 번에 제거할 필요가 있습니다.\n");
	next_line();

	printf("그러기 위해 관습적으로 'clean' 이라는 타겟을 만들어 놓습니다.\n\n");
	next_line();

	printf("'clean'은 '더미 타켓' 이라고 하며\n");
	printf("파일을 생성하지 않는 개념적인 타겟으로 문법은 다음과 같습니다.\n\n");
	printf("clean :\n");
	printf("    [명령어]\n\n");
	next_line();

	printf("'clean'의 예시로는 다음과 같습니다.\n\n");
	printf("clean :\n");
	printf("    rm -f *.o foo\n");
	next_line();

	printf("실제로 'clean'을 수행하려면 다음과 같이 입력하면 됩니다.\n");
	printf("사용법 : \"make clean\"\n\n");
	next_line();

	printf("지금까지 \"Makefile\"의 내용은 일일히\n");
	printf("[목적 파일]과 [의존성 파일], [명령어]를 적어줬습니다.\n");
	next_line();

	printf("지금까지의 작성 방법은 파일의 수가 적다면 괜찮지만\n");
	printf("파일이 많아진다면 일일히 적어주기도 힘들 것입니다.\n");
	next_line();

	system("clear");
	printf("[매크로]를 이용한 \"Makefile\" 작성 방법을 알아보겠습니다.\n");
	next_line();

	printf("[매크로]는 위에서 배웠던 코드에서 중복되는 파일 이름들을 특정 단어로 치환하면 됩니다.\n\n");
	next_line();

	printf("[매크로]의 작성 규칙은 다음과 같습니다.\n\n");
	printf("1. 반드시 치환될 위치보다 먼저 정의가 되어 있어야 합니다.\n\n");
	printf("2. tab으로 시작해서는 안되고, ':', '=', '#', '\"\"' 등은 이름으로 사용할 수 없습니다.\n\n");
	printf("3. 매크로를 사용할 때는 소괄호나 중괄호로 둘러싸고 앞에 '$'를 붙입니다.\n\n");
	next_line();

	printf("사용 예시는 다음과 같습니다.\n\n");
	printf("CC = gcc\n");
	printf("CFLAGS = -W -WALL\n");
	printf("TARGET = foo\n\n");
	printf("$(TARGET) : foo.o main.o\n");
	printf("    $(cc) $(CFLAGS) -o $(TARGET) foo.o main.o\n\n");
	printf("$foo.o : foo.c\n");
	printf("    $(cc) $(CFLAGS) -c -o foo.o foo.c\n\n");
	printf("$main.o : main.c\n");
	printf("    $(cc) $(CFLAGS) -c -o main.o main.c\n\n");
	next_line();

	printf("위의 내용은 실제 동작 시 동일하게 적힌 단어들 위치에\n");
	printf("미리 지정되었던 값으로 치환됩니다.\n");
	next_line();

	printf("하지만, 위의 내용은 치환만 되었을 뿐 코드가 간소화 되지는 않았습니다.\n");
	next_line();

	system("clear");
	printf("'내부 매크로'라는 것을 이용하여 코드를 간소화 해보겠습니다.\n\n");
	printf("CC = gcc\n");
	printf("CFLAGS = -W -Wall\n");
	printf("TARGET = foo\n");
	printf("OBJECTS = foo.o main.o\n\n");
	printf("all : $(TARGET)\n");
	printf("$(TARGET) : $(OBJECT)\n");
	printf("    $(CC) $(CFLAGS) -o $@ $^\n\n");
	printf("clean :\n");
	printf("    rm *.o foo\n\n");

	printf("위의 코드는 이전의 코드들과 같은 동작을 하지만 훨씬 간소화되었습니다.\n\n");
	next_line();

	printf("\"make\"에서 지원하는 [내부 메크로]는 다음과 같습니다.\n\n");
	printf("[ $@ ] : 현재 [목적 파일]의 이름\n");
	printf("[ $^ ] : 현재 [목적 파일]이 필요로 하는 [의존성 파일] 리스트\n");
	printf("[ $* ] : 현재 [목적 파일]의 이름에서 확장자만 제거\n");
	printf("[ $? ] : 현재 [목적 파일]이 필요로 하는 [의존성 파일] 중 변경된 것들의 목록\n");
	printf("[ $< ] : [의존성 파일] 중 첫 번째 파일\n\n");
	printf("더 많은 [내부 매크로]는 아래의 사이트에서 확인할 수 있습니다.\n");
	printf("\"www.gnu.org/software/make/manual/html_node/Automatic-Variables.html\"\n\n");
	next_line();

	system("clear");
	printf("[Tip]\n");
	printf("내부 매크로를 사용하지 않고 아무리 많은 파일들이 있더라도\n");
	printf("한 번에 빌드할 수 있습니다.\n");
	next_line();

	printf("'a.c', 'b.c', 'd.c', 'e.c', 'f.c' 파일이 있다고 하였을 때\n");
	printf("다음과 같이 작성하면 됩니다.\n\n");

	printf("abdef : *.o\n");
	printf("    gcc -o abdef *.o\n\n");
	printf("*.o : *.c\n");
	printf("    gcc -c *.c\n\n");
	printf("all : abdef\n\n");
	printf("clean : rm -f *.o abdef\n\n");
	next_line();

	system("clear");
	printf("\"make\"와 \"Makefile\"은 코드를 작성하고 빌드함에 있어서 매우 유용한 유틸리티입니다.\n");
	next_line();

	printf("이 트레이닝에서 배운 것만으로도 사용함에 있어서 불편함은 없습니다.\n");
	next_line();

	printf("하지만 \"gcc\" 명령어의 여러 옵션들과\n");
	printf("\"Makefile\"의 다양한 작성 방법을 알면 더 효율적으로 사용할 수 있습니다.\n");
	next_line();

	printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
	printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
	printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
	next_line();

	printf("\"make\" 명령어의 학습이 끝났습니다.\n");
	printf("고생하셨습니다.\n");

	delete_defdir();
}
