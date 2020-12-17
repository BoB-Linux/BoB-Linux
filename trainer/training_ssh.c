#include "func.h"

void training_ssh(void)
{
	create_defdir();

	system("clear");

	printf("이번에 학습할 명령어는 \"ssh\" 입니다.\n\n");

	printf("\"ssh\"는 프로토콜 이름이며, \"Secure Shell\"의 약자입니다.\n");
	next_line();

	printf("\"ssh\" 명령어의 실행 파일은 \"/usr/bin/ssh\"(으)로 있습니다.\n");
	next_line();

	printf("\"ssh\"는 원격지에 있는 컴퓨터를 shell로 안전하게 제어하기 위한\n");
	printf("프로토콜 혹은 이 프로토콜을 이용하는 프로그램들을 의미합니다.\n");
	next_line();

	printf("\"ssh\" 이전의 원격 제어 프로토콜로는 \"telnet\"과 같은 것들이 있었습니다.\n");
	next_line();

	printf("하지만 \"telnet\"과 같은 것들은 데이터를 주고 받는 것에 있어서 암호화 시키지 않고\n");
	printf("평문, 즉 데이터를 보호하지 않고 그대로 보냅니다.\n");
	next_line();

	printf("데이터를 평문으로 보내게 되면, 공격자가 중간에서 데이터를 가로챘을 때\n");
	printf("어떤 데이터인지 바로 알 수 있습니다.\n");
	next_line();

	printf("\"ssh\"는 \"secure\"이라는 단어가 들어가는데\n");
	printf("이유는 위와 같은 상황이 벌어지더라도 암호화되어 데이터가 보호됩니다.\n");
	printf("그렇기 때문에 중간에서 데이터를 가로채어 보더라도 암호문이 보이기 때문에\n");
	printf("어떤 데이터인지 알 수 없습니다.\n");
	next_line();

	printf("'MacOS'와 'Linux'에는 기본적으로 \"ssh 클라이언트\"가 설치 되어 있습니다.\n");
	next_line();

	printf("윈도우도 'cmd'에서 \"ssh 클라이언트\"를 사용할 수 있지만\n");
	printf("'putty' 또는 'Xshell'과 같은 GUI로 된 클라이언트들이 있습니다.\n");
	next_line();

	printf("\"ssh 클라이언트\"를 이용하여 대상 서버에 접속하려면\n");
	printf("대상 서버에는 \"ssh 서버\"가 설치되어 있고\n");
	printf("포트포워딩을 통한 외부 접속이 가능해야 합니다.\n");
	next_line();

	printf("\"ssh\" 프로토콜을 이용하여 대상 서버에 접속하게 되면\n");
	printf("리눅스의 CLI 환경과 비슷하게 보여집니다.\n");
	next_line();

	printf("주의할 점은 \"ssh\"를 처음 접하게 되면 많이 혼란스러울 수 있습니다.\n");
	printf("\"ssh\"는 프로토콜이며, ssh 프로토콜을 이용하여 접속하는 것입니다.\n");
	next_line();

	printf("'putty'와 'Xshell' 같은 클라이언트들은 모두\n");
	printf("ssh 프로토콜을 이용할 수 있는 프로그램들입니다.\n");
	next_line();

	printf("이 트레이닝에서는 'CMD' 혹은 '터미널 창'이나 '콘솔'에서 이용할 수 있는\n");
	printf("\"ssh\" 명령어를 알아보겠습니다.\n");
	next_line();

	printf("\"ssh\" 명령어의 자주 쓰이는 옵션은 다음과 같습니다.\n\n");
	printf("  [ '-p' ] : 원격지 서버에 접속할 때 연결할 포트를 설정합니다.\n");
	printf("  [ '-l' ] : 원격지 서버에서 사용할 로그인 이름을 설정합니다.\n");
	printf("  [ '-V' ] : 디버깅에 유용한 자세한 정보 표시 모드를 활성화합니다.\n");
	printf("  [ '-P' ] : 특권이 부여되지 않는 포트를 사용합니다.\n\n");
	next_line();

	printf("\"ssh\" 프로토콜을 이용하여 원격지 서버에 접속하고 나서 나올 때에는 \n");
	printf("\"exit\" 명령을 입력하면 됩니다.\n");
	next_line();

	printf("\"ssh\" 명령어의 사용법은 \"ssh [옵션] [원격지 서버]\" 입니다.\n");
	printf("ex) ssh rookie@192.168.0.3\n");
	next_line();

	printf("또한 \"ssh\" 프로토콜의 기본으로 설정되어 있는 포트는 '22'번 입니다.\n");
	next_line();

	printf("이 트레이닝에서는 자신의 컴퓨터를 대상으로 실습해보겠습니다.\n\n");
	next_line();

	printf("먼저, 기본적으로 알아야 할 것이 있는데\n");
	printf("처음으로 \"ssh\"를 이용하여 접속한다면 'yes' 혹은 'no'를 입력받을 수 있습니다.\n");
	next_line();

	printf("이 때는 'yes'를 입력하고 로그인 할 사용자의 비밀번호를 입력하면 됩니다.\n");
	printf("반대로 'no'를 입력한다면 접속을 중지합니다.\n");
	next_line();

	printf("\"ssh\" 명령어를 이용하여 'rookie' 사용자로 '127.0.0.1'에 접속해보세요.\n");
	printf("사용법 : ssh [사용자이름]@[원격지 서버]\n");
	printf("나오고 싶을 때는 \"exit\"를 입력하면 됩니다.\n");
	just_run_command("ssh rookie@127.0.0.1");

	printf("\n\n성공적으로 접속을 하였다면 CLI 환경의 Shell(으)로 접속되고\n");
	printf("프롬프트가 보이며 'hello' 라는 문구가 보일 것입니다.\n");
	next_line();

	printf("만약 원격지 서버에서 '22'번 포트가 아닌 '3421'포트로 지정하여 열어두었다면\n");
	printf("'-p' 옵션을 이용하여 접속할 수 있습니다.\n");
	next_line();

	printf("'rookie' 사용자로 '127.0.0.1'에 접속하는데\n");
	printf("포트 번호는 '3421' 로 접속해보세요.\n");
	printf("사용법 : ssh -p [포트번호] [사용자이름]@[원격지 서버]\n");
	nothing_print_fake_run_command("ssh -p 3421 rookie@127.0.0.1");

	printf("\n\n명령어를 올바르게 입력하였다면\n");
	printf("실제 시스템에서는 정상적으로 원격지 서버에 접속할 수 있을 것입니다.\n");
	next_line();

	system("clear");
	printf("\"ssh\"에서 비밀번호를 입력하지 않거나 \n");
	printf("비밀번호보다 더 높은 보안 수준이 필요할 때 사용하는 것이 있습니다.\n");
	next_line();

	printf("\"SSH-key\"를 이용하는 것입니다.\n");
	next_line();

	printf("\"ssh server\"에는 public key가 존재하도록 하고\n");
	printf("\"ssh client\"에는 private key가 존재하도록 합니다.\n");
	next_line();

	printf("그러면 사용자가 원격지 서버에 접속할 때 비밀번호를 입력하지 않더라도\n");
	printf("'public key'와 'private key'를 비교하여 바로 접속이 가능합니다.\n");
	next_line();

	printf("비밀번호를 요구하진 않지만 보안 수준은 더욱 높은 방법입니다.\n");
	next_line();

	printf("윈도우에서는 putty를 이용하면 되지만\n");
	printf("MacOS나 Linux는 \"ssh-keygen\" 명령을 이용하면 됩니다.\n");
	next_line();

	printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
    	printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
    	printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
    	next_line();

    	printf("\"ssh\" 명령어의 학습이 끝났습니다.\n");
    	printf("고생하셨습니다.\n");
	


	delete_defdir();
}
