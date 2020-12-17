#include "func.h"

void roadmap_field(void)
{
	char menu[20] = "";
	system("clear");

	
	printf("[보안 로드맵]\n");
   	printf("  └ [보안 및 해킹 분야]\n\n\n");

	printf("보안과 해킹은 아주 밀접한 관계입니다.\n");
	next_line();

	printf("보안속에 해킹이 포함되어 있지만 이러한 해킹에도\n");
	printf("여러 가지 종류와 기법들이 나뉩니다.\n");
	next_line();

	printf("먼저 정보 보안 분야는 크게 7가지가 있습니다.\n\n");
	printf("1. 보안 관제\n");
	printf("2. 침해 대응\n");
	printf("3. 보안 솔루션\n");
	printf("4. 모의 해킹\n");
	printf("5. 보안 컨설팅\n");
	printf("6. 디지털 포렌식\n");
	printf("7. 악성 코드 분석\n\n");
	next_line();

	printf("위의 분류는 보안에서의 분야들을 나눈 것입니다.\n");
	printf("위의 분야들은 로드맵 중 '보안 직업' 부분을 보시면 자세히 알 수 있습니다.\n");
	next_line();

	while(1)
	{
		printf("해킹 분야로는 크게 6가지로 나뉩니다.\n\n");
		printf("1 : 웹 해킹\n");
		printf("2 : 리버스 엔지니어링\n");
		printf("3 : 시스템 해킹\n");
		printf("4 : 디지털 포렌식\n");
		printf("5 : 네트워크 해킹\n");
		printf("q : 종료\n\n\n");
		
		printf("번호를 선택하여 분야들을 알아보세요 : ");
	
		fgets(menu, sizeof(menu), stdin);
		menu[strlen(menu) - 1] = '\0';
		
		if (!strncmp(menu, "1", strlen("1")) && strlen(menu) == strlen("1"))
		{
			roadmap_field_web();
		        next_quit_roadmap();
		}
		else if (!strncmp(menu, "2", strlen("2")) && strlen(menu) == strlen("2"))
		{
		        roadmap_field_reversing();
		        next_quit_roadmap();
		}    
		else if (!strncmp(menu, "3", strlen("3")) && strlen(menu) == strlen("3"))
		{
			roadmap_field_system();
		        next_quit_roadmap();
		}
		else if (!strncmp(menu, "4", strlen("4")) && strlen(menu) == strlen("4"))
		{
		        roadmap_field_digital_forensic();
		        next_quit_roadmap();
		}
		else if (!strncmp(menu, "5", strlen("5")) && strlen(menu) == strlen("5"))
		{
		        roadmap_field_network();
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
