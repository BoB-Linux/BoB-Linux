#include "func.h"

void training_clear()
{
    create_defdir();
    system("clear");
    
    printf("이번에 학습할 명령어는 \"clear\" 입니다.\n\n");
    
    printf("\"clear\" 명령어는 터미널의 내용을 모두 지우는 명령어로\n");
    printf("윈도우 cmd에서의 \"cls\" 명령어와 같은 동작을 합니다.\n\n");
    next_line();
    
    printf("[실습] 바로 \"clear\"를 입력해봅시다.\n");
    run_command("clear");
    
    printf("지금까지 화면에 있던 문구들이 다 지워졌을 것입니다.\n\n");
    next_line();
    
    printf("\"clear\" 명령어는 따로 옵션이 없습니다.\n");
    next_line();
    
    printf("항상 새 것과 같은 터미널에서 작업하고 싶다면 \"clear\"를 기억해주세요!\n");
    next_line();
    
    printf("\"Ctrl + L\"(으)로도 \"clear\"와 같이 화면의 내용을 지워줍니다.\n");
    next_line();
    
    printf("\"clear\" 명령어의 학습이 끝났습니다.\n");
    printf("고생하셨습니다.\n");
    
    delete_defdir();
}
