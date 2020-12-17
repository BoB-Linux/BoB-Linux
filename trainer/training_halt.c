#include "func.h"

void training_halt(void)
{
    create_defdir();
    system("clear");
    //////////////////////////////////////////////////////////////////////////////////////////////////////
    
    printf("이번에 학습할 명령어는 \"halt\" 입니다.\n\n");
    next_line();

    printf("\"halt\" 명령어는 시스템을 종료하는 명령어입니다.\n");
    next_line();

    printf("\"halt\" 명령어의 실행 파일은 \"/usr/sbin/halt\"(으)로 있습니다.\n");
    next_line();

    printf("사용법은 \"halt [옵션]\" 입니다.\n");
    next_line();

    printf("주의해야 할 점은 시스템만 종료되고, 시스템의 전원은 꺼지지 않는다는 점입니다.\n");
    printf("대체 명령어로 'init', 'shutdown' 명령어 사용을 권장드립니다.\n");
    next_line();

    printf("\"halt\" 명령어의 자주 쓰이는 옵션들은 다음과 같습니다.\n\n");
    printf("  [ -d ] : /var/log/wtmp 파일에 로그를 남기지 않습니다.\n");
    printf("  [ -f ] : 강제로 종료합니다.\n");
    printf("  [ -n ] : 종료할 때 싱크를 하지 않습니다.\n");
    printf("  [ -w ] : 실제로 시스템을 종료하지 않고, /var/log/wtmp 파일에 로그만 남깁니다.\n\n");
    next_line();

    printf("[실습] halt 명령어를 사용하여 시스템을 종료해보세요.\n");
    printf("(실제 적용되지는 않습니다.)\n");
    fake_run_command("halt");
    next_line();

    printf("\n비슷하게 시스템 종료를 수행하는 명령어로는 'shutdown', 'init', 'poweroff' 가 있고\n");
    printf("시스템 재부팅을 수행하는 명령어로는 'shutdown', 'init', 'reboot'가 있습니다.\n");
    next_line();
    
    printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
    printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
    printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
    next_line();

    printf("\"halt\" 명령어의 학습이 끝났습니다.\n");
    printf("고생하셨습니다.\n");

    delete_defdir();
}
