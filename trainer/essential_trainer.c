#include "func.h"

void essential_trainer()
{
    system("clear");
    printf("기초 명령어 학습입니다.\n");
    next_line();
    
    printf("해당 커리큘럼에서는 리눅스를 사용하는데 필요한 기초적인 필수 명령어를 학습합니다.\n");
    next_line();
    
    printf("명령어의 종류는 [ls, whoami, pwd, mkdir, touch, cat, cd, mv, cp, rm, clear]입니다.\n");
    next_line();
    
    printf("기초 명령어 학습은 리눅스 입문자들을 위한 과정으로\n");
    printf("리눅스를 처음 접해보는 분은 앞의 '기본 설명'을 듣고 오시는 것을 권장합니다.\n");
    next_line();
    
    printf("이전에 기초 명령어 학습을 진행하셨다면\n");
    printf("각 단계를 마칠 때 주어지는 flag 값을 통해 해당 단계 이후부터 시작하실 수 있습니다.\n");
    next_line();
    
    printf("flag가 있다면 입력해주시고, 처음부터 시작하시는 분은 0을 입력해주세요\n입력 : ");
    int flag_value = 0;

    scanf("%d", &flag_value);
    switch(flag_value)
    {
        default:
            printf("잘못된 flag 값입니다. 처음부터 학습을 시작합니다.\n");
        case 0:
            training_ls();
            printf("\n해당 단계의 flag 값은 '703'입니다.\n");
            next_quit();
        case 703:
            training_whoami();
            printf("\n해당 단계의 flag 값은 '905'입니다.\n");
            next_quit();
        case 905:
            training_pwd();
            printf("\n해당 단계의 flag 값은 '1017'입니다.\n");
            next_quit();
        case 1017:
            training_mkdir();
            printf("\n해당 단계의 flag 값은 '1024'입니다.\n");
            next_quit();            
        case 1024:
            training_touch();
            printf("\n해당 단계의 flag 값은 '1106'입니다.\n");
            next_quit();            
        case 1106:
            training_cat();
            printf("\n해당 단계의 flag 값은 '1121'입니다.\n");
            next_quit();            
        case 1121:
            training_cd();
            printf("\n해당 단계의 flag 값은 '1219'입니다.\n");
            next_quit();            
        case 1219:
            training_mv();
            printf("\n해당 단계의 flag 값은 '1223'입니다.\n");
            next_quit();            
        case 1223:
            training_cp();
            printf("\n해당 단계의 flag 값은 '1231'입니다.\n");
            next_quit();            
        case 1231:
            training_rm();
            printf("\n해당 단계의 flag 값은 '808'입니다.\n");
            next_quit();            
        case 808:
            training_clear();
            next_line();
            break;
    }
    system("clear");
    
    printf("\n기초 명령어 학습 과정이 모두 끝났습니다.\n");
    next_line();
    
    printf("이제 여러분은 리눅스의 다양한 명령어들을 배울 준비가 되었습니다.\n");
    next_line();
    
    printf("지금까지 배운 명령어들은 리눅스에서 \n");
    printf("기본적으로 사용하게 될 명령어들입니다.\n\n");
    
    printf("꾸준히 사용하여 능숙해지시길 바랍니다.\n");
    next_line();
    
    printf("다음 파트인 응용 명령어들을 학습하여\n");
    printf("리눅스의 다양한 명령어들을 학습해보시길 바랍니다.\n");
    next_line();
    
    printf("고생하셨습니다.\n");
}
