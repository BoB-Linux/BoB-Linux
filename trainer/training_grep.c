#include "func.h"

void training_grep(void)
{
    create_defdir();

    system("clear");
    
    printf("이번에 학습할 명령어는 \"grep\" 입니다.\n\n");
    
    printf("\"grep\" 명령어는 특정 문자열을 찾고자 할 때 사용하는 검색 명령어입니다.\n");
    printf("이번 내용은 길고 어려움으로 여러번 보시길 바랍니다.\n");
    next_line();
    
    printf("\"grep\" 명령어의 실행 파일은 \"/usr/bin/grep\"(으)로 있습니다.\n");
    next_line();
    
    printf("\"grep\" 명령어는 리눅스에서 자주 사용되는 명령어들 중 하나입니다.\n");
    next_line();
    
    printf("\"grep\" 명령어는 파일로부터 입력을 받아 문자열을 검색할 때\n");
    printf("단순히 '문자열을 매칭'하는 것이 아니라 여러 패턴을 찾을 때 사용되는\n");
    printf("'정규표현식'을 활용한 '패턴 매칭 방식'을 사용합니다.\n");
    next_line();
    
    printf("'문자열'에는 공백, 구두점, 제어문자 등이 포함됩니다.\n");
    next_line();
    
    printf("\"grep\" 명령어는 디렉토리 내에서 지정된 패턴을 포함하는 파일을 출력할 수도 있습니다.\n");
    next_line();
    
    printf("여러 용도로 활용될 수 있는 명령어지만 주로 한 개 이상의 파일에서\n");
    printf("프로그램 수정 등을 위해 변수 또는 함수명을 찾을 때 많이 사용됩니다.\n");
    next_line();
    
    printf("사용법은 \"grep [옵션] [패턴] [파일명]\" 입니다.\n");
    next_line();
    
    printf("위의 사용법 내용 중 [패턴] 부분에는 찾고자 하는 문자열을 찾을 때 사용 될\n");
    printf("정규표현식(정규식)이 들어갑니다.\n");
    next_line();
    
    printf("[파일명] 부분에는 파일명을 따로 지정하면 해당 파일에서만 검색하지만\n");
    printf("애스터리스크(*)와 같은 메타문자를 사용하면 현재 디렉토리의 모든 파일을 대상으로\n");
    printf("문자열을 검색할 수도 있습니다.\n");
    next_line();
    
    printf("\"grep\" 명령어는 주로\n");
    printf("앞의 명령어를 실행한 결과로 나온 출력을 다음 명령어의 입력으로 이어지게 해주는\n");
    printf("'pipe(|)'와 같이 조합하여 이용됩니다.\n\n");
    next_line();
    
    printf("[실습] 프로세스 목록을 보여주는 \"ps\" 명령어와 조합하여\n");
    printf("\"ps aux | grep sh\"를 입력해보세요.\n");
    just_run_command("ps aux | grep sh");
    
    printf("\n\n잘 따라하셨다면 현재 실행 중인 프로세스 목록을 출력한 결과 중\n");
    printf("'sh'라는 문자열이 들어간 행만 검색하여 보여줄 것입니다.\n");
    next_line();
    
    printf("\"grep\" 명령어를 사용하려면 정규표현식이라는 것을 알아두면 좋습니다.\n");
    next_line();
    
    printf("정규표현식이란\n");
    printf("위키백과 문서에는 \"특정한 규칙을 가진 문자열의 집합을 표현하는데 사용하는 형식언어다\"\n");
    printf("라고 되어있습니다.\n");
    next_line();
    
    printf("즉, 쉽게 말하자면 정규 표현식에서 사용되는 '메타 문자'라는 것을 활용하여\n");
    printf("특정 문자열만을 검색하는 것이 아니라\n");
    printf("지정된 패턴에 해당하는 문자열은 모두 검색되게 할 때 사용하는 표현식입니다.\n");
    next_line();
    
    printf("정규표현식은 이 트레이닝에서 다 다루기는 힘드므로\n");
    printf("'메타 문자'와 '의미'에 대해서만 알아보겠습니다.\n");
    next_line();
    
    system("clear");
    printf("[ . ]\n줄바꿈 문자인 '\\n'을 제외한 임의의 문자 한 개가 있는 모든 문자열을 검색합니다.\n");
    printf("        : ex) \"x.\" : 문자 'x' 뒤에 한 문자가 붙은 모든 문자열\n\n");
    next_line();
    
    printf("[ * ]\n반복을 나타내는 메타 문자로\n");
    printf("메타 문자 '*' 앞에 적힌 글자가 0번 이상 반복되는 모든 문자열을 검색합니다.\n\n");
    next_line();
    
    printf("[ {n, m} ]\n이 또한 반복을 나타내는 메타 문자로\n");
    printf("위의 '*'와는 다르게 반복 횟수를 n번 이상 m번 이하로 지정할 수 있습니다.\n\n");
    next_line();
    
    printf("[ ^ ]\n검색하고자 하는 문자열로 시작하는 문자열의 앞에 써줌으로서\n");
    printf("\"^hello\"와 같이 하면 \"hello\"라는 문자열로 시작하는 문자열들을 검색합니다.\n\n");
    next_line();
    
    printf("[ $ ]\n위의 '^'와는 반대로 검색하고자 하는 문자열로 끝나는 문자열의 뒤에 써줌으로서\n");
    printf("\"world$\"와 같이 하면 \"world\"라는 문자열로 끝나는 문자열들을 검색합니다.\n\n");
    next_line();
    
    system("claer");
    
    printf("[ + ]\n메타 문자 '+' 바로 앞의 문자가 하나 이상 있는 모든 문자열을 검색합니다.\n");
    printf("ex) \"he+llo\" : 문자 'h' 다음에 'e'가 하나 또는 하나 이상 있고\n");
    printf("                 'llo'가 맨 뒤에 붙는 모든 문자열\n\n");
    next_line();
    
    printf("[ ? ]메타 문자 '?' 바로 앞에 문자가 없거나 하나인 모든 문자열을 검색합니다.\n");
    printf("ex) \"wh?y\" : 'w'와 'y' 사이에 'h' 문자가 하나 있거나 없는 모든 문자열\n\n");
    next_line();
    
    printf("[ | ]\n'또는', 'or'과 같은 뜻으로 선택문에 쓰입니다.\n");
    printf("ex) hello|world : 'hello' 또는 'world' 문자나 문자열\n\n");
    next_line();
    
    printf("[ \\ ]\n메타 문자 앞에 붙여줌으로서, 메타 문자가 가진 의미를 없애고 문자로 취급합니다.\n");
    printf("ex) \\. : 원래 임의의 문자 한 개를 의미하지만, '\\'가 붙었으므로 문자 '.' 으로 취급\n\n");
    next_line();
    
    system("claer");
    
    printf("[ '[ ]' ]\n메타 문자 '['와 ']' 사이에 있는 문자 한개를 의미합니다.\n");
    printf("ex) [h]i : 'i' 앞에 'h'가 붙은 문자열\n\n");
    next_line();
    
    printf("'[]'는 엄청 많은 활용 방법이 있습니다.\n\n");
    next_line();
    
    printf("메타 문자 '[]'는 '['와 ']' 사이에 '문자 클래스'라고 하여 정규 표현식과는 다르게\n");
    printf("가리키는 '문자의 범위'를 의미합니다.\n");
    printf("ex) [a-z]1 : '1' 앞에 소문자 'a'부터 소문자 'z'까지 포함된 모든 문자열\n");
    next_line();
    
    printf("메타 문자 [] 안에 '^' 기호는 위에서의 '지정된 문자열로 시작하는 문자열'로\n");
    printf("해석되지 않고 다른 의미로 해석됩니다.\n");
    next_line();
    
    printf("메타 문자 '[]'는 '['와 ']' 사이에 '^'를 넣으면 이 기호 뒤에 오는 글자가 포함 안된 문자열들만 검색합니다.\n");
    printf("ex) [^ab]c : 'c' 앞에 문자 하나가 붙은 문자열을 찾지만, 'a'나 'b'가 아닌 문자열들\n");
    next_line();
    
    system("claer");
    
    printf("[ '{ }' ]\n메타 문자 '{'와 '}' 사이에 있는 숫자는 '{}' 앞에 붙은 문자의 개수를 의미합니다.\n");
    printf("ex) a{4}b : 'b' 앞에 'a'가 4개 붙은 문자열\n\n");
    next_line();
    
    printf("또한 '{}' 메타 문자는 숫자의 범위를 지정할 수 있습니다.\n");
    printf("ex1) a{1,4}b : 'b' 앞에 'a'가 1개 이상 4개 이하가 붙은 문자열\n");
    printf("ex2) a{,4}b  : 'b' 앞에 'a'가 없거나 4개 이하가 붙은 문자열\n");
    printf("ex3) a{4,}b  : 'b' 앞에 'a'가 4개 이상 붙은 문자열\n");
    next_line();
    
    system("clear");
    printf("[ '( )' ]\n'('와 ')' 사이에 들어가는 문자열은 하나로 묶어서 하나의 문자로 다룹니다.\n");
    printf("ex) (abde)c : 'c' 앞에 'abde'가 붙은 문자열을 검색합니다.\n\n");
    next_line();
    
    printf("메타 문자는 서로 조합하여 패턴을 만들 수 있습니다.\n");
    printf("ex) [^(abc)]d] : 'd' 앞에 'abc'가 아닌 문자 또는 문자열\n");
    next_line();
    
    system("clear");
    printf("\"grep\" 명령어의 자주 쓰이는 옵션은 다음과 같습니다.\n\n");
    
    printf("  [ -c ] : 패턴이 일치하는 행의 수를 출력합니다.\n\n");
    printf("  [ -i ] : 비교시 대소문자를 구별하지 않습니다.\n\n");
    printf("  [ -v ] : 지정한 패턴과 일치하지 않는 행만 출력합니다\n\n");
    printf("  [ -n ] : 행의 번호를 함께 출력합니다.\n\n");
    printf("  [ -l ] : 패턴이 포함된 파일의 이름을 출력합니다.\n\n");
    printf("  [ -w ] : 패턴이 전체 단어와 일치하는 행만 출력합니다.\n\n");
    printf("  [ -E ] : \"grep\" 명령어의 기본 사용 문법에서\n");
    printf("           [패턴] 부분을 확장 정규 표현식으로 해석합니다\n\n");
    printf("  [ -F ] : \"grep\" 명령어의 기본 사용 문법에서\n");
    printf("           [패턴] 부분을 정규 표현식이 아닌 일반 문자열로 해석합니다.\n\n");
    printf("  [ -z ] : 라인을 줄 바꿈('\\n')이 아닌 NULL(\\0)로 구분합니다.\n\n");
    next_line();
    
    printf("위의 옵션들 중 2개만 실습해보도록 하겠습니다.\n");
    next_line();
    
    printf("먼저 실습 전에 파일을 만들어 내용을 입력하도록 하겠습니다.\n\n");
    next_line();
    
    printf("[실습] \"cat > test.txt\"을 입력하여 아래의 내용을 바로 입력하시고\n");
    printf("Ctrl + d키로 저장하세요. (대소문자를 구분하여 입력하세요.)\n\n");
    printf("Hello world\n");
    printf("good morning World\n");
    printf("i'm studying\n");
    just_run_command("cat > test.txt");
    
    printf("\n\n잘 따라하셨다면 test.txt 파일이 생성되고 위 3개의 문장이 입력되어 있을 것입니다.\n");
    next_line();
    
    printf("이제 실습해 보도록 하겠습니다.\n");
    next_line();
    
    printf("문자열을 검색할 때 대소문자를 구분하지 않고 검색하게 하는 옵션을 실습해보겠습니다.\n\n");
    next_line();
    
    printf("[실습] \"grep -i \"world\" test.txt\"를 입력하여 -i 옵션을 실습해보세요.\n");
    just_run_command("grep -i \"world\" test.txt");
    
    printf("\n\n잘 따라하셨다면 \"Hello world\"와 \"good morning world\"가 출력되었을 것입니다\n");
    next_line();
    
    printf("'-i' 옵션은 문자열을 검색할 때 대소문자를 구분하지 않게 하는 옵션입니다.\n");
    next_line();
    
    printf("이번에는 정규표현식을 이용하여 실습해보겠습니다.\n");
    next_line();
    
    printf("'s'로 시작하여 'g'로 끝나는 문자열을 검색하는데\n");
    printf("해당 문자열의 행 번호도 같이 출력되게 하겠습니다.\n\n");
    next_line();
    
    printf("[실습] \"grep -n \"s.*g\" test.txt\"를 입력하여 실습해보세요.\n");
    just_run_command("grep -n \"s.*g\" test.txt");
    
    printf("\n\n잘 따라하셨다면 \"3:i'm studying\"이 출력되었을 것입니다.\n");
    next_line();
    
    printf("'-n' 옵션은 검색된 문자열의 행 번호를 출력해줍니다.\n\n");
    printf("[패턴] 부분에 들어갈 정규표현식 \"s.*g\"은(는)\n");
    
    printf("'s'로 시작하고 모든 임의의 문자가 반복되고\n");
    printf("'g'로 끝나는 문자열을 검색하라는 의미입니다.\n");
    next_line();
    
    printf("\"grep\" 명령어와 비슷한 \"egrep\", \"fgrep\"이 있습니다.\n\n");
    printf("본질적으로는 3개 다 동일한 역할을 수행하지만\n");
    printf("[패턴]에 쓰일 문자열을 어떻게 처리할 것인지에 대해서 다릅니다.\n");
    next_line();
    
    printf("각각의 차이점은 다음과 같습니다.\n\n");
    printf("\"grep\" - 다중 패턴을 검색합니다.\n");
    printf("\"egrep\" - 정규표현식 패턴을 검색합니다. (\"grep\"에 '-E' 옵션을 준 것과 같습니다.)\n");
    printf("\"fgrep\" - 단순한 패턴을 검색합니다. (\"grep\"에 '-F' 옵션을 준 것과 같습니다.)\n");
    next_line();
    
    printf("\"grep\" 명령어의 옵션은 위에 나온 것들 말고도 여러가지가 있습니다.\n");
    next_line();
    
    printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
    printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
    printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
    next_line();

    printf("\"grep\" 명령어의 학습이 끝났습니다.\n");
    printf("고생하셨습니다.\n");

    delete_defdir();
}
