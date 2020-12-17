#include "func.h"

void training_sudo(void)
{
	system("clear");
	create_defdir();
	struct passwd *pwd;
	pwd = getpwuid(getuid());
	//////////////////////////////////////////////////////////////////////////////////////////////////////

	printf("이번에 학습할 명령어는 \"sudo\"입니다.\n\n");
	printf("\"sudo\" 명령어는 root 권한을 잠시 획득하기 위한 명령어입니다.\n");
	next_line();
	
	printf("\"sudo\" 앞에 붙여 실행한 명령어는 root의 권한으로 실행됩니다.\n");
	next_line();
	
	printf("\"sudo\" 명령어의 실행 파일은 \"/usr/bin/sudo\"(으)로 있습니다.\n");
	next_line();
	
	printf("\"sudo\" 명령어의 사용법은 : \"sudo [명령어]\"입니다.\n");
	printf("ex) sudo rm test\n");
	next_line();
	
	printf("위의 형태로 명령어를 실행하면, 현재 로그인되어 있는 사용자의\n");
	printf("비밀번호를 입력 후 사용하게 됩니다.\n");
	next_line();
	
	printf("root 권한은 리눅스의 최상위 권한으로써,\n");
	printf("리눅스 시스템 자체를 건드릴 수 있으므로 사용에 주의가 필요합니다.\n");
	next_line();

	printf("특정 명령어를 root 권한으로 실행하고 싶다면\n");
	printf("'sudo [명령어]'를 입력하면 됩니다.\n");
	next_line();

	printf("[실습] bash 명령어를 root 권한으로 실행시켜봅시다.\n");
	printf("사용법 : sudo [명령어]\n");
	fake_run_command("sudo bash");
	next_line();
	// 트레이닝 1

	printf("일반 유저에서 관리자 권한을 가진 'root' 유저로 전환하고 싶다면\n");
	printf("\"sudo -s\" 명령어를 입력하면 됩니다.\n\n");
	next_line();

	printf("[실습] 가상으로 \"sudo\" 명령어를 이용해 일반 유저에서 root 유저로 전환해봅시다.\n");
	printf("사용법 : sudo [옵션]\n");
	fake_run_command("sudo -s");
	printf("[sudo] password for %s:\n", pwd->pw_name);
	
	printf("\n\nsudo 명령어 사용시에는 현재 로그인 되어 있는 사용자의 패스워드를 입력해야 합니다.\n");
	next_line();
	
	printf("위와 같은 문장이 출력된 후에 비밀번호를 입력한다면 다음과 같이 프롬프트가 변화합니다.\n");
	printf("root@localhost:#\n");
	next_line();
	
	// 트레이닝 2   
	printf("사용자의 계정이 'root'로 바뀌면서 명령줄 왼쪽의 문구가\n");
	printf("'$'에서 '#'으로 바뀐 것을 볼 수 있습니다.\n");
	next_line();

	printf("\"sudo\" 명령어로 권한 상승시, '/etc/sudoers' 파일을 참조하며\n");
	printf("해당 파일에 기록된 사용자만 root 권한 상승이 가능합니다.\n");
	next_line();
	
	printf("기록되지 않은 사용자에서 root 권한 상승을 하게 되면\n");
	printf("'{계정이름} is not in the sudoers file.' 라는 에러 문구가 뜨게 됩니다.\n");
	next_line();

	printf("모든 명령어에 대해 권한 상승이 허용된 사용자는 다음과 같이 기록됩니다.\n");
	printf("{계정 이름} ALL=(ALL:ALL) ALL\n");
	next_line();
	
	printf("여러분들이 경험을 쌓아 하나의 서버를 관리하게 된다면\n");
	printf("\"/etc/sudoers\" 파일을 신중하게 작성하게 될 것입니다.\n");
	next_line();
	
	printf("특히, 위의 예시처럼 모든 명령어에 대한 권한을 사용자에게 주는 경우\n");
	printf("해당 사용자의 권한이 너무 커져버리기 때문에 일반적으로 적절한 조치는 아닙니다.\n");
	next_line();
	
	printf("일반 사용자에게는 필요한 만큼의 최소 권한만 주는 것이 \n");
	printf("보안을 위한 권한 관리의 기본이라고 할 수 있겠습니다.\n");
	next_line();
	
	printf("참고로 다른 사용자로 변경하는 명령어로는 'su' 명령어가 있습니다.\n");
	printf("\"sudo\"와 글자가 비슷하므로, 혼동하지 않도록 합니다.\n");
	next_line();
	
	printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
	printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
	printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
	next_line();
	
	printf("\"sudo\" 명령어의 학습이 끝났습니다.\n");
	printf("고생하셨습니다.\n");
	
	delete_defdir();
}
