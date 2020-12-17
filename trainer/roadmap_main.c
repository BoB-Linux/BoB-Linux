#include "func.h"

void roadmap_main(void)
{
    system("clear");
    printf("보안 로드맵 파트입니다.\n\n");
    printf("해당 파트에서는 보안과 관련된 진로에 대한 정보를 제공합니다.\n");
    next_line(); 

    char menu[20] = "";
    while (1)
    {
        system("clear");
        printf("[보안 로드맵]\n\n");
        printf("1 : 보안 직업\n");
	printf("2 : 보안 및 해킹 분야\n");
	printf("3 : 보안 관련 학과\n");
	printf("4 : 보안 관련 기업\n");
	printf("5 : 보안 / 해킹 대회\n");
	printf("6 : 보안 관련 교육 프로그램\n");
	printf("q : 종료(quit)\n\n");
	printf("실행할 로드맵을 선택하세요 : ");

        fgets(menu, sizeof(menu), stdin);

        // 나머지 입력 값 제거
        menu[strlen(menu) - 1] = '\0';

        // 입력값 검증 부분
        if (!strncmp(menu, "1", strlen("1")) && strlen(menu) == strlen("1"))
        {
            roadmap_job();
            next_quit_roadmap();
        }
        else if (!strncmp(menu, "2", strlen("2")) && strlen(menu) == strlen("2"))
        {
            roadmap_field();
            next_quit_roadmap();
        }    
        else if (!strncmp(menu, "3", strlen("3")) && strlen(menu) == strlen("3"))
        {
            roadmap_department();
            next_quit_roadmap();
        }
        else if (!strncmp(menu, "4", strlen("4")) && strlen(menu) == strlen("4"))
        {
            roadmap_company();
            next_quit_roadmap();
        }
        else if (!strncmp(menu, "5", strlen("5")) && strlen(menu) == strlen("5"))
        {
            roadmap_contest();
            next_quit_roadmap();
        }
        else if (!strncmp(menu, "6", strlen("6")) && strlen(menu) == strlen("6"))
        {
            roadmap_edu_program();
            next_quit_roadmap();
        }
        else if ( (!strncmp(menu, "q", strlen("q")) && strlen(menu) == strlen("q")) || (!strncmp(menu, "Q", strlen("Q")) && strlen(menu) == strlen("Q")) )
        {
            next_quit_roadmap();
        }
        else
        {
            system("clear");
            printf("잘못된 입력입니다. 다시 입력해주세요.\n\n");
        }
    }

}
