#include "func.h"

void roadmap_department(void)
{
	char menu[20] = "";

	system("clear");

	printf("[보안 로드맵]\n");
   	printf("  └ [정보 보호 또는 보안 관련 학과]\n\n\n");
	printf("먼저 \"정보 보안\"과 \"정보 보호\" 모두 맞는 표현입니다.\n");
	next_line();

	printf("\"정보 보호\"는 보호의 대상인 '정보'를 보호하는 것에 '목적'을 둡니다.\n");
	next_line();

	printf("\"정보 보안\"은 보호의 대상인 '정보'를 보호하기 위한 '방법'을 말합니다.\n");
	next_line();

	printf("최근 들어 대학이라는 타이틀을 가지고 있더라도 취업하기는 쉽지 않습니다.\n");
	next_line();

	printf("그래서 대학을 꼭 가지 않더라도 자신이 하고자 하는 것이 있다면\n");
	printf("다른 방법으로도 이뤄낼 수 있습니다.\n");
	next_line();

	printf("하지만 대학교를 가는 것과 안 가는 것은 차이가 있습니다.\n");
	next_line();

	printf("물론 대학교를 안가고 자신이 실력이 높고 인성이 좋아 주변으로부터 인정을 받고\n");
	printf("제의 받거나 바로 취직이 된다면 좋겠지만 이러한 경우는 엄청난 노력이 필요합니다.\n");
	next_line();

	printf("그래서 보통 대학교를 가야 할지 가지 말아야 할지 고민된다면\n");
	printf("일단 대학교를 준비하면서 공부하는 것이 좋습니다.\n");
	next_line();

	printf("대학교를 준비하다가 본인의 선택에 따라 가도 되고 안 가도 되지만\n");
	printf("대학교를 안 간다고 정하고 공부를 놔버리면\n");
	printf("자신의 앞날에 있어서 기회를 스스로 막아버리는 것입니다\n");
	next_line();

	printf("요즘은 '학점은행제'라는 제도도 있으니 이를 이용하는 방법도 있습니다.\n");
	next_line();

	printf("대학을 꼭 가지 않아도 되지만, 대학을 가서 사람들과 어울리며 사회성도 기르고\n");
	printf("여러 대회나 각종 이벤트들에 팀으로 참여하여 스펙을 쌓는 것을 추천드립니다.\n");
	next_line();

	printf("또한, 대학교에는 동아리가 있습니다.\n");
	next_line();

	printf("동아리를 보고 어느 대학을 갈 지 선택하는 것도 중요합니다.\n");
	next_line();

	printf("대학교를 추천드리는 이유는 환경이 달라지기 때문입니다.\n");
	next_line();

	printf("자신이 들어간 학과에는 비슷한 꿈을 가진 사람들끼리 모여있기 때문에\n");
	printf("동기 부여 및 도움을 주거나 혹은 도움을 받을 수 있습니다.\n");
	next_line();


	system("clear");

	printf("\"정보 보호 및 보안\" 관련 학과에서 배우는 내용은\n");
	printf("\"컴퓨터 공학\" 이라는 학과와는 약간의 차이가 있습니다.\n");
	next_line();

	printf("보안 관련 학과에서는 범위를 좁혀 '정보 보호'나 '보안' 또는 '해킹이나 크래킹'\n");
	printf("그리고 '바이러스' 등 각종 보안과 관련된 문제들에 대해 배웁니다.\n");
	next_line();

	printf("보안 관련 학과가 있는 학교는 지역별로 나눌 수 있습니다.\n");
	printf("\"(https://namu.wiki/w/정보보안학과\"에 정리되어 있습니다.)\n\n");
	next_line();

	printf("또한, 보안 전공 뿐만 아니라 다른 전공 대학들의 정보까지 알고 싶다면\n");
	printf("\"커리어넷\" 이라는 사이트를 이용하면 좋습니다.\n");
	printf("(www.career.go.kr)\n");
	next_line();

	printf("여기서는 보안에 관련된 학과가 있는 대학교를 간단히 볼 수 있습니다.\n\n");
	while(1)
	{
		printf("1  : 서울\n");
		printf("2  : 경기도\n");
		printf("3  : 강원도\n");
		printf("4  : 대전광역시\n");
		printf("5  : 충청북도\n");
		printf("6  : 충청남도\n");
		printf("7  : 부산광역시\n");
		printf("8  : 경상북도\n");
		printf("9  : 경상남도\n");
		printf("10 : 광주광역시\n");
		printf("11 : 전라북도\n");
		printf("12 : 전라남도\n");
		printf("13 : 대학원\n");
		printf("q  : 종료(quit)\n\n");
		printf("지역을 선택해주세요 : ");
		fgets(menu, sizeof(menu), stdin);
	
		menu[strlen(menu) - 1] = '\0';
		
		if (!strncmp(menu, "1", strlen("1")) && strlen(menu) == strlen("1"))
	        {
	            roadmap_department_seoul();
	            next_quit_roadmap();
	        }
	        else if (!strncmp(menu, "2", strlen("2")) && strlen(menu) == strlen("2"))
	        {
	            roadmap_department_gyeonggido();
	            next_quit_roadmap();
	        }    
	        else if (!strncmp(menu, "3", strlen("3")) && strlen(menu) == strlen("3"))
	        {
	            roadmap_department_gangwondo();
	            next_quit_roadmap();
	        }
	        else if (!strncmp(menu, "4", strlen("4")) && strlen(menu) == strlen("4"))
	        {
	            roadmap_department_daejeon();
	            next_quit_roadmap();
	        }
	        else if (!strncmp(menu, "5", strlen("5")) && strlen(menu) == strlen("5"))
	        {
	            roadmap_department_chungcheongbukdo();
	            next_quit_roadmap();
	        }
	        else if (!strncmp(menu, "6", strlen("6")) && strlen(menu) == strlen("6"))
	        {
	            roadmap_department_chungcheongnamdo();
	            next_quit_roadmap();
	        }
	        else if (!strncmp(menu, "7", strlen("7")) && strlen(menu) == strlen("7"))
	        {
	            roadmap_department_busan();
	            next_quit_roadmap();
	        }
	        else if (!strncmp(menu, "8", strlen("8")) && strlen(menu) == strlen("8"))
	        {
	            roadmap_department_gyeongsangbukdo();
	            next_quit_roadmap();
	        }
	        else if (!strncmp(menu, "9", strlen("9")) && strlen(menu) == strlen("9"))
	        {
	            roadmap_department_gyeongsangnamdo();
	            next_quit_roadmap();
	        }
	        else if (!strncmp(menu, "10", strlen("10")) && strlen(menu) == strlen("10"))
	        {
	            roadmap_department_gwangju();
	            next_quit_roadmap();
	        }
	        else if (!strncmp(menu, "11", strlen("11")) && strlen(menu) == strlen("11"))
	        {
	            roadmap_department_jeollabukdo();
	            next_quit_roadmap();
	        }
	        else if (!strncmp(menu, "12", strlen("12")) && strlen(menu) == strlen("12"))
	        {
	            roadmap_department_jeollanamdo();
	            next_quit_roadmap();
	        }
	        else if (!strncmp(menu, "13", strlen("13")) && strlen(menu) == strlen("13"))
	        {
	            roadmap_department_ma();
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
