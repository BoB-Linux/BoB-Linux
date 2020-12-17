#include "func.h"

void roadmap_company(void)
{
	system("clear");
	printf("[보안 로드맵]\n");
	printf("  └ [보안 관련 기업 & 기관]\n\n");

	printf("보안 관련 기업 & 기관 파트입니다.\n\n");
	printf("해당 파트에서는 보안과 관련된 일을 하는 대표적인 기업 및 기관들을 소개합니다\n");
	next_line();

	char menu[20] = "";
	while (1)
	{
		system("clear");
		printf("[보안 로드맵]\n");
		printf("  └ [보안 관련 기업 & 기관]\n\n");
		printf("1 : 안랩(Ahnlab)\n2 : 이니텍\n3 : SK 인포섹\n4 : 금융보안원\n5 : 국가정보원(NIS)\n6 : 한국인터넷진흥원(KISA)\nq : 종료(quit)\n\n실행할 기업이나 기관을 선택하세요 : ");

		fgets(menu, sizeof(menu), stdin);

		// 나머지 입력 값 제거
		menu[strlen(menu) - 1] = '\0';

		// 입력값 검증 부분
		if (!strncmp(menu, "1", strlen("1")) && strlen(menu) == strlen("1"))
		{
		    roadmap_company_ahnlab();
		    next_quit_roadmap();
		}
		else if (!strncmp(menu, "2", strlen("2")) && strlen(menu) == strlen("2"))
		{
		    roadmap_company_initech();
		    next_quit_roadmap();
		}    
		else if (!strncmp(menu, "3", strlen("3")) && strlen(menu) == strlen("3"))
		{
		    roadmap_company_infosec();
		    next_quit_roadmap();
		}
		else if (!strncmp(menu, "4", strlen("4")) && strlen(menu) == strlen("4"))
		{
		    roadmap_company_fsec();
		    next_quit_roadmap();
		}
		else if (!strncmp(menu, "5", strlen("5")) && strlen(menu) == strlen("5"))
		{
		    roadmap_company_nis();
		    next_quit_roadmap();
		}
		else if (!strncmp(menu, "6", strlen("6")) && strlen(menu) == strlen("6"))
		{
		    roadmap_company_kisa();
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
