#include "func.h"

void training_env(void)
{
    create_defdir();
    system("clear");
    //////////////////////////////////////////////////////////////////////////////////////////////////////
    
    printf("이번에 학습할 명령어는 \"env\" 입니다.\n\n");
    next_line();

    printf("\"env\" 명령어는 환경변수를 출력하고 수정할 수 있는 명령어입니다.\n\n");
    next_line();
    
    printf("\"env\" 명령어의 실행 파일은 \"/usr/bin/env\"(으)로 있습니다.\n");
    next_line();
    
    printf("사용법은 \" env [옵션] [환경변수 이름]=\"[값]\" \" 입니다.\n");
    printf("옵션 없이 \"env\"만 입력할 경우 현재 환경 변수 목록을 출력합니다.\n\n");
    next_line();

    printf("주의할 점은 \" env [환경변수 이름]=\"[값]\" \"(을)를 사용할 때\n");
    printf("[환경변수 이름]과 '='(와)과 [값] 사이에 띄어쓰기는 없어야 합니다.\n\n");
    next_line();

    printf("[실습] \"env\" 명령어를 이용하여 \"myVal\"이라는 이름으로 \"hello\" 라는 값을 저장하도록 선언해보세요.\n");
    printf("사용법 : env [환경변수 이름]=\"[값]\"\n");
    nothing_print_fake_run_command("env myVal=\"hello\"");
    printf("\nmyVal=hello\n");
    
    printf("\n\n출력된 결과를 보면, \"env\" 명령어로 환경 변수를 생성하고 값을 지정하였습니다.\n");
    next_line();

    printf("이제 선언된 환경변수를 수정해봅시다.\n\n");
    next_line();
    
    printf("[실습] \"env\" 명령어를 이용하여 \"myVal\"의 변수를 \"linux\" 라는 값으로 수정해보세요.\n\n");
    printf("사용법 : env [환경변수 이름]=\"[값]\"\n");
    nothing_print_fake_run_command("env myVal=\"linux\"");
    printf("\nmyVal=linux\n");


    printf("\n\n'myVal'의 '값'이 성공적으로 수정된 것을 확인할 수 있습니다.\n\n");
    next_line();

    printf("\"env\" 명령어는 '-u' 옵션을 사용해 환경 변수를 해제할 수 있습니다.\n");
    printf("[실습] \"env -u myVal\"을 입력해보세요.\n");
    fake_run_command("env -u myVal");
    next_line();
    
    printf("\n이제 'myVal'의 '값'이 성공적으로 해제되었을 것입니다.\n");
    next_line();
    
    printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
    printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
    printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
    next_line();
    
    printf("\"env\" 명령어의 학습이 끝났습니다.\n");
    printf("고생하셨습니다.\n");

    delete_defdir();
}

