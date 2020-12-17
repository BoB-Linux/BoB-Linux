#include "func.h"

void roadmap_edu_program(void)
{

    system("clear");
    printf("[보안 로드맵]\n");
    printf("  └ [보안 관련 교육 프로그램]\n\n");

    printf("보안 관련 교육 프로그램 파트입니다.\n\n");
    printf("해당 파트에서는 보안과 관련된 교육 프로그램을 소개합니다.\n");
    next_line();

    char menu[20] = "";
    while (1)
    {
        system("clear");
        printf("[보안 로드맵]\n");
   	printf("  └ [보안 관련 교육 프로그램]\n\n");
        printf("1 : BoB(Best of the Best)\n2 : K-Shield Jr.\nq : 종료(quit)\n\n실행할 교육 프로그램을 선택하세요 : ");

        fgets(menu, sizeof(menu), stdin);

        // 나머지 입력 값 제거
        menu[strlen(menu) - 1] = '\0';

        // 입력값 검증 부분
        if (!strncmp(menu, "1", strlen("1")) && strlen(menu) == strlen("1"))
        {
            roadmap_edu_program_bob();
            next_quit_roadmap();
        }
        else if (!strncmp(menu, "2", strlen("2")) && strlen(menu) == strlen("2"))
        {
            roadmap_edu_program_ksj();
            next_quit_roadmap();
        }    
        else if ( (!strncmp(menu, "q", strlen("q")) && strlen(menu) == strlen("q")) || (!strncmp(menu, "Q", strlen("Q")) && strlen(menu) == strlen("Q")) )
        {
            break;
        }
        else
        {
            system("clear");
            printf("잘못된 입력입니다. 다시 입력해주세요.\n\n");
        }
    }
}
