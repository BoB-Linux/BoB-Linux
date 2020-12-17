#include "func.h"

void roadmap_job(void)
{
    system("clear");
    printf("[보안 로드맵]\n");
    printf("  └ [보안 직업군]\n\n");

    printf("보안 직업군 파트입니다.\n\n");
    printf("해당 파트에서는 보안과 관련된 직업들을 소개합니다\n");
    next_line();

    char menu[20] = "";
    while (1)
    {
        system("clear");
        printf("[보안 로드맵]\n");
        printf("  └ [보안 직업군]\n\n");
        printf("1 : 보안 관제\n2 : 모의 해킹 전문가\n3 : 보안 컨설턴트\n4 : 보안 제품 개발자\n5 : 디지털 포렌식 전문가\n6 : 악성코드 분석가\nq : 종료(quit)\n\n실행할 직업군을 선택하세요 : ");

        fgets(menu, sizeof(menu), stdin);

        // 나머지 입력 값 제거
        menu[strlen(menu) - 1] = '\0';

        // 입력값 검증 부분
        if (!strncmp(menu, "1", strlen("1")) && strlen(menu) == strlen("1"))
        {
            roadmap_job_monitoring();
            next_quit_roadmap();
        }
        else if (!strncmp(menu, "2", strlen("2")) && strlen(menu) == strlen("2"))
        {
            roadmap_job_pentest();
            next_quit_roadmap();
        }    
        else if (!strncmp(menu, "3", strlen("3")) && strlen(menu) == strlen("3"))
        {
            roadmap_job_consult();
            next_quit_roadmap();
        }
        else if (!strncmp(menu, "4", strlen("4")) && strlen(menu) == strlen("4"))
        {
            roadmap_job_dev();
            next_quit_roadmap();
        }
        else if (!strncmp(menu, "5", strlen("5")) && strlen(menu) == strlen("5"))
        {
            roadmap_job_forensic();
            next_quit_roadmap();
        }
        else if (!strncmp(menu, "6", strlen("6")) && strlen(menu) == strlen("6"))
        {
            roadmap_job_malware();
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
