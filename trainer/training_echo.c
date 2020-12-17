#include "func.h"

int run_command(char valid_cmd[]);
void next_quit();

void training_echo(void)
{
    create_defdir();
    system("clear");

    //////////////////////////////////////////////////////////////////////////////////////////////////////
    
    printf("이번에 학습할 명령어는 \"echo\" 입니다.\n\n");
    
    printf("\"echo\" 명령어는 주어진 문자열을, 문자열 사이에 포함된 공백과\n");
    printf("줄 마지막에 있는 개행문자를 포함하여 표준출력으로 출력하는 명령어입니다.\n\n");
    next_line();
    
    printf("\"echo\" 명령어의 실행 파일은 \"/usr/bin/echo\"로 있습니다.\n");
    next_line();
    
    printf("사용법은 \"echo [옵션] [출력할 문자열]\" 입니다.\n\n");
    printf("[옵션]은 선택 사항이며 해당 명령어에 지정할 옵션을 적어주는 부분이고\n");
    printf("[출력할 문자열]은 \"echo\" 명령을 통해 출력할 문자열을 의미합니다.\n\n");
    next_line();
    
    printf("\"echo\"에서 자주 쓰이는 옵션은 다음과 같습니다.\n\n");
    printf("  [ -n ] : 개행 문자를 출력하지 않게 합니다.\n\n");
    printf("  [ -e ] : 이스케이프 문자를 인식할 수 있도록 합니다.\n\n");
    printf("echo 명령어는 이스케이프 문자를 인식할 수 없는 것이 기본 값입니다.\n\n");
    next_line();
    
    printf("[개행 문자]란 줄의 맨 끝에서 줄바꿈 역할을 해주는 'new line'을 의미하고\n");
    printf("[이스케이프 문자]란 모니터나 프린터의 속성 등을 제어하기 위해\n");
    printf("장치에 보내는 특수 문자열을 의미합니다.\n");
    printf("특수 문자를 역슬래시' \\ '와 함께 붙여 사용합니다.\n\n");
    next_line();
    
    printf("[이스케이프 문자]의 종류는 다음과 같습니다.\n\n");
    printf("[ \\a ] : 경고음 소리 출력합니다. (Alarm)\n");
    printf("[ \\b ] : 백스페이스 역할을 합니다. (Backspace)\n");
    printf("[ \\f ] : 폼 피드 형식(프린터에서 용지 바꿈)으로 출력합니다. (Form Feed)\n");
    printf("[ \\n ] : 개행 문자 역할을 합니다. (New line)\n");
    printf("[ \\r ] : 캐리지 리턴 역할을 합니다. (carrige Return)\n");
    printf("[ \\t ] : 탭 키를 누른 것과 같은 역할을 합니다. (Tab)\n");
    printf("[ \\v ] : 수직 탭 역할을 합니다. (Vertical tab)\n");
    printf("[ \\\\ ] : 역슬래시를 출력해줍니다.\n");
    printf("[ \\0 ] : 널 문자 역할을 합니다.\n");
    printf("[ \\' ] : 작은 따옴표를 출력합니다.\n");
    printf("[ \\\" ] : 큰 따옴표를 출력합니다.\n\n");
    next_line();

    printf("[실습] \"echo hello\"(을)를 명령어를 사용해 문자열 \"hello\"를 출력하도록 입력해보세요.\n");
    printf("사용법 : echo [출력할 문자열]\n");
    just_run_command("echo hello");
    next_line();

    printf("\n명령어가 성공적으로 동작했다면 터미널 창에 'hello'가 띄워졌을 것입니다.\n");
    next_line();

    printf("\"echo\" 명령어는 유용하게 이용될 수 있는 명령어 입니다.\n");
    next_line();
    
    printf("\"echo hello > test1.txt\"처럼 출력 결과를\n");
    printf("리다이렉션(>)을 이용해 입력으로 처리할 수도 있고\n\n");
    printf("\"echo $SHELL\"처럼 환경 변수 이름을 이용해 환경 변수를 확인할 수도 있습니다.\n");
    next_line();
    
    printf("\"echo\" 명령어의 학습이 끝났습니다.\n");
    printf("고생하셨습니다.\n");

    delete_defdir();
}

