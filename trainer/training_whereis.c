#include "func.h"

void training_whereis(void)
{
    create_defdir();
    system("clear");

    printf("이번에 배울 명령어는 \"whereis\" 입니다.\n\n");
    printf("\"whereis\" 명령어는 검색하고자 하는 명령어의\n");
    printf("실행 파일(바이너리), 소스코드, 매뉴얼 파일의 위치를 출력합니다.\n");
    next_line();

    printf("\"which\" 명령어와 비슷하지만 조금 더 많은 걸 알려준다고 보시면 됩니다.\n");
    next_line();

    printf("\"whereis\" 명령어의 실행 파일은 \"/usr/bin/whereis\"(으)로 있습니다.\n");
    next_line();
    
    printf("사용법은 \"whereis [옵션] [검색할 명령어]\" 입니다.\n");
    next_line();
    
    printf("바로 실습을 해보겠습니다.\n\n");
    next_line();

    printf("[실습] \"whereis\" 명령어로 \"which\" 명령어에 대해 알아보세요.\n");
    just_run_command("whereis which");

    printf("\n\n잘 따라오셨다면 다음과 같은 내용이 출력되었을 것입니다.\n");
    printf("(혹은 파일이 들어있는 위치)\n\n");
    printf("which: /usr/bin/which /usr/share/man/man1/which.1.gz\n");
    next_line();

    printf("which 명령어의 실행파일 위치는\n");
    printf("'root' 디렉토리 밑에 'usr' 디렉토리 밑에 'bin' 디렉토리 밑과\n");
    printf("'root' 디렉토리 밑에 'bin' 디렉토리 밑에 있고\n\n");
    printf("매뉴얼 파일의 위치는\n");
    printf("'root' 밑에 'share' 밑에 'man' 밑에 'man1' 밑에 .gz 파일로 압축되어 있습니다.\n");
    next_line();

    system("clear");
    printf("\"whereis\" 명령어의 자주 쓰이는 옵션들은 다음과 같습니다.\n\n");
    printf("  [ -b ] : 바이너리 파일만 찾습니다.\n\n");
    printf("  [ -m ] : 매뉴얼 파일만 찾습니다.\n\n");
    printf("  [ -s ] : 소스코드 파일만 찾습니다.\n\n");
    printf("  [ -B ] : 바이너리 파일을 찾을 위치를 제한(지정)합니다.\n\n");
    printf("  [ -M ] : 매뉴얼 파일을 찾을 위치를 제한(지정)합니다.\n\n");
    printf("  [ -S ] : 소스코드 파일을 찾을 위치를 제한(지정)합니다.\n\n");
    printf("  [ -u ] : 특정 파일을 제외합니다.\n\n");
    printf("  [ -f ] : -B, -M, -S 옵션에서 디렉토리를 제한(지정)한 다음, \n");
    printf("           이 옵션을 통해 파일 이름을 지정합니다.\n\n");
    next_line();

    printf("\"whereis\" 명령어 옵션 중 두 개만 실습해보겠습니다.\n\n");
    next_line();

    printf("[실습] '-b' 옵션을 이용하여 \"locate\" 명령어의 실행 파일 위치만 출력하세요.\n");
    printf("사용법 : \"whereis [옵션] [검색할 명령어]\"\n");
    
    // whereis -b locate 
    // 다른 메시지가 출력되므로, fake로 해결
    fake_run_command("whereis -b locate");
    printf("locate: /usr/bin/locate\n");

    printf("\n\n잘 따라하셨다면 \"locate: /usr/bin/locate\" 라고 출력되었을 것입니다.\n");
    printf("(혹은 파일이 들어있는 위치)\n");
    next_line();
    
    printf("\"locate\" 명령어의 실행파일 위치는\n");
    printf("'root' 밑에 'usr' 밑에 'bin' 밑에 위치 하고 있다고 출력해주고 있습니다.\n\n");
    next_line();
    
    system("clear");
    printf("[실습] 이번에는 '-m' 옵션을 이용하여 \"locate\" 명령어의 매뉴얼 파일 위치만 출력하세요.\n");
    printf("사용법 : whereis [옵션] [검색할 명령어]\n");
    just_run_command("whereis -m locate");

    printf("\n\n잘 따라하셨다면 \"locate: /usr/share/man/man1/locate.1.gz\" 라고 출력되었을 것입니다.\n");
    printf("(혹은 파일이 들어있는 위치)\n");
    next_line();
    
    printf("\"locate\" 명령어의 매뉴얼 파일 위치는\n");
    printf("'root' 밑에 'share' 밑에 'man' 밑에 'man1' 밑에 .gz로 압축\n");
    printf("되어있다고 출력해주고 있습니다.\n");
    next_line();
    
    printf("이렇게 \"whereis\" 명령어에 대해 배워보았습니다.\n");
    next_line();
    
    printf("\"whereis\" 명령어의 옵션은 위에 나온 것들 말고도 여러가지가 있습니다.\n");
    next_line();
    
    printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
    printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
    printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
    next_line();
    
    printf("\"whereis\" 명령어의 학습이 끝났습니다.\n");
    next_line();

    delete_defdir();
}
