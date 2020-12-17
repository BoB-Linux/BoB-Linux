#include <pwd.h>

#include "func.h"

void training_whoami(void)
{
	struct passwd *lpwd;
	lpwd = getpwuid(geteuid());

	create_defdir();
	system("clear");

	printf("이번에 학습할 명령어는 \"whoami\" 입니다.\n\n");

	printf("이 명령어는 현재 내가 어떤 계정으로 로그인이 되어있는지 볼 때 이용하는 명령어입니다.\n");
	next_line();

	printf("\"whoami\" 명령어의 실행 파일은 \"/usr/bin/whoami\"(으)로 있습니다.\n");
	next_line();

	printf("\"whoami\" 명령어는 현재 로그인한 사용자 계정의 이름,\n'EUID(Effective User ID)'를 보여줍니다.\n");
	next_line();

	printf("\"whoami\" 명령어는 영어에서 \"내가 누구인가\"를 말할 때\n\"who am i?\" 라고 하는 것에서 비롯되었습니다.\n");
	next_line();

	printf("\"whoami\" 명령어는 '현재 로그인한 사용자의 이름'을 보여줍니다.\n");
	next_line();

	printf("만일 사용자가 'User1'으로 처음 로그인을 했다가\n'User2'으로 로그인하여 계정을 바꾼 후 \"whoami\" 명령어를 입력한다면\n\n");
	printf("현재 로그인 되어있는 계정은 'User2'이기 때문에 'User2'를 보여줄 것입니다.\n");
	next_line();

	printf("\"whoami\" 명령어는 '현재 로그인 되어 있는 사용자의 이름'을 \n보여준다는 것을 기억하셔야 합니다.\n\n");
	printf("후에 나올 비슷한 명령어와의 차이점이 될 점입니다.\n");
	next_line();

	printf("\"whoami\" 명령어가 보여주는 결과는 뒤에서 언급 될 \"id\" 명령어에 옵션 \n'u' 와 'n'을 줘서 \"id -un\"의 결과와 같습니다.\n");
	next_line();

	printf("\"whoami\" 명령어는 리눅스 이외에도 \n다른 Unix 계열의 운영체제와 윈도우 혹은 윈도우 서버에서도 사용 가능한 명령어입니다.\n\n");
	next_line();

	printf("[실습] \"whoami\" 명령어를 직접 입력하여 \n현재 로그인 되어 있는 사용자 계정의 이름을 확인해보세요.\n");
	just_run_command("whoami");
	printf("\n\n위에 보이시는 \"%s\"(이)가 현재 로그인된 사용자 계정의 이름 즉, 'EUID'입니다.\n", lpwd->pw_name);
	next_line();

	printf("사용자 계정의 ID를 보여주는 명령어는 \"whoami\"와 비슷하게 생긴 \"who am i\"가 있습니다.\n");
	next_line();

	printf("\"whoami\"와 \"who am i\" 명령어의 차이점은 EUID를 보여주는지, UID를 보여주는지 입니다.\n\n");
	printf("즉 \"현재 로그인된 사용자 계정(EUID)\"를 보여주는지 \n\"특정 사용자를 나타내는 고유 숫자(UID)\"를 보여주는지 입니다.\n");
	next_line();

	printf("\"whoami\"는 현재 로그인이 되어있는 계정을 보여주지만\n");
	next_line();

	printf("\"who am i\"는 처음 'User1'으로 로그인 한 후 'User2'로 로그인하여 사용자 계정을 바꿔도\n");
	printf("현재 로그인 되어 있는 'User2'가 아닌 처음 로그인 했던 'User1'을 보여줍니다.\n");
	next_line();
	
	printf("참고) : \"who am i\" 명령어는 ssh로 서버에 접속했을 때 유용하게 사용할 수 있습니다.\n\n");
	next_line();

	printf("그리고 비슷한 명령어로는 다음의 것들이 있습니다.\n\n");
	printf("  \"who\"     : 현재 시스템에 로그인 되어 있는 사용자를 출력해줍니다.\n");
	printf("  \"w\"       : 로그인된 사용자와 수행 중인 작업을 출력해줍니다.\n");
	printf("  \"users\"   : 시스템에 로그인 되어있는 사용자의 아이디를 출력해줍니다.\n");
	printf("  \"logname\" : 사용자의 계정을 출력해줍니다. (\"users\"와 같은 결과값을 보여줍니다.)\n");
	printf("  \"id\"      : 시스템에 등록된 아이디 정보를 출력해줍니다.\n");
	printf("               (더 자세히는 현재 사용자 정보인 UID와 GID 등을 보여줍니다.)\n\n");
	next_line();

	printf("다른 운영체제에서도 \"whoami\" 명령어를 사용해보시고 \n관련된 다른 명령어들도 한 번씩 실습하여 결과를 확인해보세요.\n");
	next_line();

	printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
	printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
	printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
	next_line();

	printf("\"whoami\" 명령어의 학습이 끝났습니다.\n");
	next_line();

	delete_defdir();
}
