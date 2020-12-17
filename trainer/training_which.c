#include "func.h"

void training_which(void)
{

    create_defdir();

    system("clear");

    printf("이번에 학습할 명령어는 \"which\" 입니다.\n\n");

    printf("\"which\" 명령어는 특정 명령어의 실행 파일 혹은 링크 위치를\n");
    printf("환경 변수를 기반으로 검색하고 찾아주는 명령어입니다.\n");
    next_line();

    printf("\"which\" 명령어의 실행 파일은 \"/usr/bin/which\"(으)로 있습니다.\n\n");
    next_line();

    printf("사용법 : \"which [옵션] [명령어 이름]\" 입니다.\n");
    printf("ex) which whoami\n");
    next_line();

    printf("예를 들어, 'ls'라는 명령어의 위치를 보려면 'which ls'를 입력하시면 됩니다.\n\n");
    next_line();

    printf("[실습] \"which\" 명령어를 이용하여 \"pwd\" 명령어의 위치를 알아보세요.\n");
    just_run_command("which pwd");

    printf("\n\n잘 따라오셨다면 \"/usr/bin/pwd\" 라고 출력되었을 것입니다.\n");
    next_line();

    printf("해석하자면\n");
    printf("'root' 디렉토리 밑에 'usr' 디렉토리 밑에 'bin' 디렉토리 밑에 위치하고 있습니다.\n");
    next_line();

    printf("\"which\" 명령어의 옵션은 '-a' 하나 입니다.\n\n");
    printf("  [ -a ]: 입력된 찾고자 하는 명령어가 검색되는 모든 경로를 출력해줍니다.\n\n");
    next_line();

    printf("\"which\" 명령어는 간단히 사용할 수 있고, 기능도 심플합니다.\n");
    next_line();

    printf("\"which\" 명령어의 옵션은 위에서 배운 것 외에도 여러가지가 있습니다.\n");
    next_line();

    printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
    printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
    printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
    next_line();

    printf("\"which\" 명령어의 학습이 끝났습니다.\n");
    next_line();

    delete_defdir();
}
