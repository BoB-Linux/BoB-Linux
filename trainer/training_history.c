#include "func.h"

void training_history()
{
    create_defdir();
    system("clear");

    printf("이번에 학습할 것은 쉘의 \"history\" 기능입니다.\n\n");
    next_line();

    printf("쉘에는 \"history\" 라고 하여 이전에 입력하였던 명령어를 기억하고\n");
    printf("쉽게 다시 사용할 수 있는 기능을 제공합니다.\n");
    next_line();
    
    printf("키보드에서 방향키 위쪽을 누르면 바로 직전에 입력한 명령어가 나오게 됩니다.\n\n");
    printf("위쪽을 더 누르면 더 이전에 입력한 명령어들이 보이고\n");
    printf("아래쪽을 누르면 다시 최근에 입력한 명령어를 시간 순으로 볼 수 있습니다.\n");
    next_line();
    
    printf("사용한 명령어는 각자의 홈 디렉토리의 \".bash_history\" 파일에 저장이 됩니다.\n\n");
    printf("최대 저장되는 개수는 'HISTSIZE' 라는 환경 변수를 확인해 보면 됩니다.\n\n");
    next_line();
    
    printf("[실습] \"echo $HISTSIZE\"를 입력해 보세요.\n");
    nothing_print_fake_run_command("echo $HISTSIZE");
    printf("1000\n\n");

    printf("\n출력된 'HISTSIZE'의 값 만큼 사용자가 사용한 명령어를 저장을 할 수 있습니다.\n");
    next_line();
    
    printf("방향키로 입력했던 명령어를 찾아도 되지만\n");
    printf("history 기능은 더욱 편리한 옵션들을 제공합니다.\n");
    next_line();
    
    printf("!!  : 마지막으로 실행한 명령문 실행\n");
    printf("!n  : n번째 명령어 실행\n");
    printf("!string : string으로 시작하는 가장 최근의 명령문 실행\n\n");
    next_line();
    
    printf("[실습] \"!!\"(을)를 입력해보세요.\n");
    nothing_print_fake_run_command("!!");
    printf("1000\n\n");
	
    printf("\n좀 전에 실행하였던 \"echo $HISTSIZE\" 명령어 가 다시 수행된 것을 볼 수 있습니다.\n");
    next_line();

    // to do : history 명령어 써서 지금까지 입력했던 명령어 출력
    printf("추후에 실제 시스템에서 사용자가 이전에 입력했던 명령어들을 한 번에 확인하고 싶다면\n");
    printf("\"history\"라고 입력하면됩니다.\n\n");
    next_line();

    printf("\"history\" 기능의 학습이 끝났습니다.\n");
    printf("고생하셨습니다.\n");
    delete_defdir();
}
