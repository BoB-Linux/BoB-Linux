#include "func.h"

void training_virtual_console(void)
{
	system("clear");
	printf("[가상 콘솔]\n\n\n");

	printf("가상 콘솔이란\n");
	printf("하나의 모니터를 장착한 시스템에 여러 개의 가상 화면을 제공하여\n");
	printf("사용하게 하는 기능입니다.\n");
	next_line();

	printf("리눅스에서는 기본적으로 6개의 가상 콘솔을 제공합니다.\n\n");
	next_line();

	printf("[GUI]\n\n");
	printf("\"GUI\"는 'Graphical User Interface'의 약자이며\n");
	printf("마우스로 아이콘을 클릭하며  프로그램을 작동시키는 환경입니다.\n\n");
	printf("대표적인 예시로는 윈도우 운영 체제를 켜면 처음에 보이는 바탕화면 그 자체입니다.\n\n");
	next_line();

	printf("[CLI]\n\n");
	printf("\"CLI\"는 'Command-Line Interface'의 약자이며\n");
	printf("키보드로 명령어를 타이핑하여 프로그램을 사용하는 환경입니다.\n\n");
	printf("대표적인 예시로는 윈도우 운영 체제의 \"CMD\"가 있습니다.\n");
	next_line();

	printf("\"CLI\"는 명령어를 사용할 줄 알아야 하기 때문에 처음에는 낯설고 어려울 것입니다.\n");
	printf("하지만 \"CLI\" 환경에 적응되면 \"GUI\"보다 편리한 환경일 수 있습니다.\n");
	next_line();

	printf("\"CLI\"는 다른 말로 \"CUI\" 혹은 \"TUI\" 등으로 불립니다.\n");
	printf("모두 같거나 비슷한 환경을 의미하므로 모두 맞는 명칭입니다.\n");
	next_line();

	system("clear");
	printf("리눅스 배포판에는 \"server\" 버전과 \"Desktop\" 버전이 존재합니다.\n");
	next_line();

	printf("\"Desktop\" 버전의 환경에서는 윈도우 운영 체제와 같이 그래픽으로 되어있어서\n");
	printf("사용자가 사용하기에 편리합니다.\n");
	next_line();
	
	printf("그렇기에 \"Desktop\" 환경에서는 터미널 혹은 명령어 입력 창을 새로 켜고 싶다면\n");
	printf("그저 새로운 창을 켜면 될 것입니다.\n");
	next_line();
	
	printf("하지만 리눅스를 처음 사용해보는 경우, \"server\" 버전의 환경에서는\n");
	printf("터미널 혹은 명령어 입력 창을 여러 개 띄우고 싶어도\n");
	printf("방법을 몰라서 못 띄우는 경우가 대다수일 것입니다.\n");
	next_line();

	printf("이 때 가상 콘솔을 사용하면 됩니다.\n\n");
	next_line();

	printf("X-Window를 사용할 때는\"Ctrl + Alt + F1\"이 기본 창으로 전환하는 단축키이며\n");
	printf("\"Ctrl + Alt + F6\"까지 총 6개의 텍스트 기반의 로그인 창을 제공합니다.\n\n");
	printf("X-Window에서는 'Alt' 키가 특수한 기능으로 사용되기에\n");
	printf("'Ctrl' 키와 조합하여 사용해야 합니다.\n\n");
	next_line();

	printf("X-Window가 아닌 가상 콘솔의 창 전환은\n");
	printf("'Ctrl' 키 없이 \"Alt + F(n)\" 조합으로도 가능합니다.\n");
	printf("( 'F(n)'은 \"F1 ~ F6\" 키를 의미합니다. )\n\n");
	next_line();

	printf("[X-Window]\n\n");
	printf("\"x-Window\"는 디스플레이 장치에 창을 표시하며\n");
	printf("마우스와 키보드 등의 입력 장치의 상호 작용 등을 관리하여\n");
	printf("GUI 환경의 구현을 위한 기본적인 바탕을 제공합니다.\n\n\n");
	next_line();

	printf("[Tip]\n\n");
	printf("\"server\" 환경, 즉 텍스트 모드 기반의 가상 콘솔을 사용할 때에는\n");
	printf("이미 지나간 작업의 내용을 볼 수 없었지만\n\n");
	printf("최근 배포판들은 그래픽카드 메모리를 활용하여\n");
	printf("작업내용을 \"Shift + PgUp\" 또는 \"Shift + PgDn\"으로 스크롤 할 수 있습니다.\n");
	next_line();

}
