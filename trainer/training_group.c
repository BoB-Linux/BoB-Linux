#include "func.h"

void training_group(void)
{
	create_defdir();
	system("clear");

	//////////////////////////////////////////////////////////////////////////////////////////////////////

	printf("이번에 학습할 명령어는 그룹 관련 명령어들 입니다.\n\n");

	printf("리눅스에서는 사용자(Owner), 그룹(Group), 기타 사용자(Other)로 구분하여\n");
	printf("권한을 관리합니다.\n");
	next_line();

	printf("서버를 운용하려면 사용자를 그룹별로 묶어서 관리할 줄 알아야 할 것입니다.\n");
	next_line();

	printf("그룹과 관련된 대표적인 명령어는\n");
	printf("\"groups\", \"groupadd\", \"groupdel\", \"gpasswd\" 명령어가 있습니다.\n");
	next_line();

	printf("\"groups\"(와)과 \"gpasswd\"(은)는 \"/usr/bin\" 디렉토리 밑에 실행파일이 존재합니다.\n\n");
	printf("\"groupadd\"(와)과 \"groupdel\"(은)는 \"/usr/sbin\" 디렉토리 밑에 실행파일이 존재합니다.\n");
	next_line();

	//groups
	system("clear");
	printf("[groups]\n\n\n");

	printf("가장 먼저 배울 명령어는 \"groups\" 입니다.\n\n");
	printf("\"groups\" 명령어는 매우 기초적인 명령어이며\n");
	printf("특정 계정이 속한 그룹 이름을 출력하는 명령어입니다.\n");
	next_line();

	printf("사용법은 \"groups [계정 이름]\" 입니다.\n");
	printf("ex) groups rookie\n\n");
	next_line();

	printf("[실습] \"groups\" 명령어를 이용하여 'test' 계정이 속한 그룹을 출력해보세요.\n");
	printf("사용법 : groups [계정 이름]\n");
	nothing_print_fake_run_command("groups test");

	printf("\n\ntest : tester\n");
	next_line();

	printf("\n위의 출력 결과를 보면, 'test'라는 계정이 속한 그룹은 'tester'라는 것을 보여줍니다.\n");
	next_line();

	//groupadd
	system("clear");
	printf("[groupadd]\n\n\n");

	printf("\"groupadd\" 명령어는 새로운 그룹을 생성하는 명령어 입니다.\n");
	next_line();

	printf("사용법은 \"groupadd [옵션] [생성할 그룹 이름]\" 입니다.\n");
	printf("ex) sudo groupadd rookies\n");
	next_line();

	printf("\"groupadd\" 명령어는 새로운 그룹을 생성하는 명령어이기 때문에\n");
	printf("관리자 권한을 가진 계정만이 사용할 수 있습니다.\n\n");
	next_line();

	printf("[실습] \"groupadd\" 명령어를 이용하여 'test_group'이라는 그룹을 생성해보세요\n");
	printf("사용법 : sudo groupadd [생성할 그룹 이름]\n");
	fake_run_command("sudo groupadd test_group");

	printf("\n\n그룹을 생성했을 때는, 별 다른 메시지를 출력하진 않습니다.\n");
	next_line();

	printf("그룹의 목록은 그룹을 관리하는 파일인 \"/etc/group\"을 확인하면 됩니다.\n\n\n");
	next_line();

	printf("\"groupadd\" 명령어의 자주 쓰이는 옵션은 다음과 같습니다.\n\n");
	printf("  [ -g ] : 새로운 그룹을 생성하면서 GID를 부여하고 싶을 때 사용합니다.\n");
	printf("           RedHat을 제외하고는 0 ~ 999까지 예약되어 있으므로\n");
	printf("           '999' 이상의 번호가 부여됩니다.\n\n");
	printf("  [ -p ] : 생성하는 그룹에 암호를 부여합니다.\n\n");
	printf("  [ -r ] : 예약된 GID(0 ~ 999)로 할당할 때 사용합니다.\n\n");
	next_line();

	//groupdel
	system("clear");
	printf("[groupdel]\n\n\n");

	printf("\"groupadd\"가 그룹을 생성하는 명령어라면, 그룹을 삭제하는 명령어는 \"groupdel\" 입니다.\n");
	next_line();

	printf("사용법은 \"groupdel [옵션] [삭제할 그룹 이름]\" 입니다.\n");
	printf("ex)sudo groupdel rookies\n");
	next_line();

	printf("\"groupdel\"도 역시 관리자 권한을 가진 계정만이 사용할 수 있는 명령어입니다.\n\n");
	next_line();

	printf("[실습] \"groupdel\"(을) 이용하여 'tester' 그룹을 삭제해보세요.\n");
	printf("사용법 : sudo groupdel [삭제할 그룹 이름]\n");
	fake_run_command("sudo groupdel tester");
	next_line();

	printf("\n위의 실습처럼 \"groupdel\" 명령어를 사용하면 그룹을 삭제할 수 있습니다.\n");
	next_line();

	printf("\"groupdel\" 명령어의 자주 쓰이는 옵션은 '-f' 입니다.\n\n");
	printf(" [-f, --force] : 강제로 삭제합니다.\n");
	next_line();

	//gpasswd
	system("clear");
	printf("[gpasswd]\n\n\n");

	printf("마지막으로 \"gpasswd\"라는 명령어를 배워보겠습니다.\n");
	next_line();

	printf("\"gpasswd\"는 특정 그룹에 사용자를 포함시키거나 제외시킬 때 또는\n");
	printf("그룹 패스워드 관련 설정이나 관리자를 지정할 때 사용하는 명령어입니다.\n");
	next_line();

	printf("사용법은 \"gpasswd [옵션] [대상 그룹 이름]\" 입니다.\n");
	printf("ex) gpasswd -r rookies\n\n");
	next_line();

	printf("'-a' 옵션은 특정 사용자를 그룹에 포함시킵니다.\n");
	printf("ex) gpasswd -a [대상 계정 이름] [대상 그룹 이름]\n\n");
	next_line();

	printf("[실습] \"gpasswd\"와 '-a' 옵션을 이용하여 'test' 계정을 'test_group'에 포함시켜보세요.\n");
	printf("사용법 : gpasswd [옵션] [대상 계정 이름] [대상 그룹 이름]\n");
	nothing_print_fake_run_command("gpasswd -a test test_group");

	printf("\n\nAdding user test to group test_group\n\n");
	next_line();

	printf("[실습] 위에서 배운 \"groups\" 명령어로 'test' 계정의 그룹 목록을 확인해보세요.\n");
	printf("사용법 : groups [사용자 계정]\n");
	nothing_print_fake_run_command("groups test");

	printf("\ntest : tester test_group\n");
	next_line();

	printf("'test' 계정의 그룹 목록에 test_group이 추가 된 것을 확인할 수 있습니다.\n\n");
	next_line();

	printf("\"gpasswd\" 명령어의 자주 쓰이는 옵션은 다음과 같습니다.\n\n\n");
	printf("  [ -a ] : 그룹 관리자가 해당 그룹에 사용자를 추가합니다.\n\n");
	printf("  [ -A ] : root가 해당 그룹에 관리자를 지정합니다.\n\n");
	printf("  [ -d ] : 그룹 관리자가 해당 그룹에서 사용자를 없앱니다.\n\n");
	printf("  [ -M ] : root가 그룹 멤버를 지정합니다.\n\n");
	printf("  [ -r ] : 그룹 패스워드를 제거합니다.\n\n");
	printf("  [ -R ] : 해당 그룹 멤버만 접근할 수 있도록 제한합니다.\n\n");
	next_line();

	printf("이번 학습에서는 그룹 관련 명령어를 배워보았습니다.\n\n");
	printf("여러 계정을 관리하는 관리자의 입장에서 유연한 계정 관리를 위해\n");
	printf("그룹을 활용할 수 있습니다.\n\n");
	next_line();

	printf("참고로 그룹 관리자는 해당 그룹에 속하지 않아도 됩니다.\n\n");
	printf("그룹 관리자는 사용자들을 해당 그룹의 2차 그룹으로 묶을 수 있고\n");
	printf("패스워드를 설정할 수 있습니다.\n\n");
	next_line();

	printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
	printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
	printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
	next_line();

	printf("그룹 관리 관련 명령어 학습이 끝났습니다.\n");
	printf("고생하셨습니다.\n");

	// Delete default directory
	delete_defdir();
}
