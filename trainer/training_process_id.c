#include "func.h"

void training_process_id(void)
{
	system("clear");

	printf("[프로세스]\n\n\n");

	printf("프로세스란\n");
	printf("디스크에 저장된 프로그램이 주기억장치인 RAM에 올려져서\n");
	printf("운영 체제에 제어되는 상태입니다.\n");
	next_line();

	printf("프로세스화란\n");
	printf("디스크에 저장된 프로그램을 주기억장치인 RAM에 올려서\n");
	printf("프로그램이 실행된 상태로 만드는 것 입니다.\n");
	next_line();

	printf("프로그램이 실행되려면 먼저 프로세스화가 되어야 합니다.\n");
	next_line();

	printf("프로세스는 주기억장치인 RAM으로부터 메모리를 할당 받아 데이터를 올려두고\n");
	printf("CPU를 통해 원하는 동작을 수행합니다.\n");
	next_line();

	system("clear");
	printf("프로세스와 관련된 ID의 종류를 알아보겠습니다.\n\n");
	next_line();

	printf("[ PID ] : 운영 체제에서 프로세스를 식별하기 위해 프로세스에 부여하는 번호입니다.\n");
	next_line();

	printf("[ PPID ] : 부모 프로세스의 PID를 의미합니다.\n\n");
	next_line();

	printf("부모 프로세스란\n");
	printf("자식 프로세스를 만들어내는 프로세스입니다.\n");
	printf("생성된 자식 프로세스는 할 일이 끝나면 결과를 부모 프로세스에게 돌려주고 종료합니다.\n");
	next_line();

	printf("예를 들어 운영 체제에서 어떠한 게임을 켠다고 가정한다면\n");
	printf("운영 체제는 부모 프로세스가 되고 어떠한 게임은 자식 프로세스가 되는 것입니다.\n");
	next_line();
	
	printf("[ PGID ] : 프로세스 그룹을 식별하기 위해 부여되는 번호입니다.\n");
	printf("	   (프로세스 그룹은 1개 이상의 프로세스 묶음을 의미합니다.)\n");
	next_line();

	printf("[ SID ] : 세션을 식별하기 위해 부여되는 번호입니다.\n");
	printf("	  (세션은 1개 이상의 프로세스 그룹의 묶음을 의미합니다.)\n");
	next_line();

	printf("[PGID]와 [SID]의 차이점은 \"프로세스의 묶음\"과 \"프로세스 그룹의 묶음\"입니다.\n");
	next_line();

	printf("PID와 PPID 등 프로세스에 관련된 내용은 리눅스 명령어 중 \"ps\"로 확인할 수 있습니다.\n");
	next_line();

	system("clear");
	
	printf("[ID]\n\n");

	printf("먼저 계정이란\n");
	printf("로그인할 때 사용되는 사용자의 아이디와 패스워드를 의미합니다.\n");
	next_line();

	printf("리눅스 시스템은 다중 사용자가 사용할 수 있는 서버용 운영 체제이기 때문에\n");
	printf("사용자 분류에 따라 사용자에게 부여되는 권한이 달라집니다.\n");
	next_line();

	printf("리눅스에서 계정은 크게 2가지가 있습니다.\n\n");
	printf("[ root ] : 막강한 권한을 가지고 있으며 시스템의 대부분을 관리할 수 있습니다.\n");
	printf("	   (슈펴 유저라고도 불리웁니다.)\n\n");
	printf("[ 일반 사용자 ] : 일반적인 사용자들입니다.\n");
	next_line();

	system("clear");

	printf("권한과 관련된 ID의 종류를 알아보겠습니다.\n\n");
	next_line();

	printf("[ UID ] : User ID의 약자이며, 프로세스의 실제 소유자입니다.\n");
	printf("다른 말로는 \"RUID(Real UID)\"라고도 하며\n");
	printf("사용자가 로그인할 때 사용한 계정의 UID를 의미합니다.\n");
	next_line();

	printf("[ EUID ] : Effective ID의 약자이며, 현재 명령을 수행하는 주체의 UID를 의미합니다.\n");
	next_line();

	printf("일반적으로 대부분의 프로세스는 UID와 EUID가 동일한 값을 가지고 있지만\n");
	printf("일부 특별한 경우에는 서로 다른 값을 가지고 있기도 합니다.\n");
	next_line();

	printf("일부 특별한 경우는 두 가지가 있습니다.\n");
	next_line();
	
	printf("1. 실행 파일에 \"SetUID\"가 설정되어 있는 경우.\n\n");
	printf("\"Setuid\"가 설정되어 있는 경우, 해당 실행 파일을 실행한 프로세스의 UID는\n");
	printf("\"사용자 계정의 UID\"가 아니라 \"실행 파일 소유자의 UID\"가 됩니다.\n\n");
	printf("이 때 실행 \"파일 소유자의 UID\"를 \"EUID\"라고 합니다.\n\n");
	next_line();

	printf("2. \"su\" 명령어를 이용하여 다른 계정으로 전환한 경우.\n\n");
	printf("일반적으로 사용자가 로그인하면 처음에는 UID와 EUID가 같은 값을 갖습니다.\n");
	printf("하지만 \"su\" 명령어를 이용하여 다른 사용자로 전환하면 UID와 EUID가 달라지게 됩니다.\n");
	next_line();

	printf("시스템에서 자신이 어떤 계정으로 로그인 되어 있는지 간단하게 알고 싶을 경우 \n");
	printf("\"whoami\" 명령어를 이용합니다.\n\n");
	printf("이 때 \"whoami\" 명령어는 EUID를 기반으로 사용자 계정을 출력해줍니다.\n");
	next_line();

	printf("\"whoami\"와 비슷한 명령어로 \"who am i\"가 있습니다.\n");
	next_line();

	printf("이 둘은 다른 명령어이며 차이점은\n");
	printf("\"EUID\"를 확인하는 것과 \"UID\"를 확인하는 것입니다.\n");
	next_line();

	system("clear");

	printf("[SetUID]\n\n");
	printf("'set' 이라는 단어는 '변경하다'라는 뜻을 가지고 있고\n");
	printf("'UID'는 'User ID'의 약자입니다\n");
	next_line();

	printf("즉, \"SetUID\"는 파일의 권한 부분과 관련하여 일시적으로 UID를 변경하는 것입니다.\n");
	next_line();

	printf("\"SetUID가 설정된 파일을 실행하면 특정 작업을 수행하기 위해 \n");
	printf("일시적으로 파일 소유자의 권한을 얻게 됩니다.\n");
	next_line();

	printf("예를 들어 소유자가 'root'인 파일에 \"SetUID\"가 설정되어 있다면\n");
	printf("일반 사용자가 해당 파일을 실행 했을 때 잠시 동안은 파일의 소유자인\n");
	printf("'root'의 권한을 얻게 됩니다.\n");
	next_line();

	printf("계정과 관련하여 아주 중요하고 꼭 알아둬야 하며\n");
	printf("사용자의 패스워드를 변경하면 패스워드가 저장되는 파일인\n");
	printf("\"/etc/passwd\"(와)과 \"/etc/shadow\" 파일이 있습니다.\n");
	next_line();

	printf("그 중 \"/etc\" 디렉토리 밑에 \"passwd\" 파일을 \"ls -l\" 명령으로 보면 다음과 같습니다.\n\n");

	printf("-rw-r--r-- 1 root root xxxx xx월 xx xx:xx /etc/passwd\n");
	next_line();

	printf("위의 \"passwd\" 파일의 권한 부분을 보면 \"-rw-r--r--\"(와)과 같이 되어 있습니다.\n");
	next_line();

	printf("\"파일의 소유자\"는 '읽기'와 '쓰기'가 가능하지만\n");
	printf("\"그룹\"과 \"다른 사용자\"는 '읽기'만 가능합니다.\n");
	next_line();
	
	printf("\"passwd\" 파일의 소유자와 그룹 부분을 보면 'root'로 되어 있습니다.\n");
	next_line();

	printf("즉, \"passwd\" 파일은 'root' 사용자만 '읽기'와 '쓰기'가 가능하고\n");
	printf("그룹과 다른 사용자는 '읽기'만 가능한 것입니다.\n");
	next_line();

	printf("그러므로 일반 사용자가 \"passwd\" 파일을 '읽기'는 가능해도\n");
	printf("'쓰기'가 불가능하여 수정이 불가능합니다.\n");
	next_line();

	printf("하지만 \"SetUID\"를 이용한다면 일반 사용자여도 \"passwd\" 파일을 수정할 수 있습니다.\n");
	next_line();

	printf("\"SetUID bit\"가 설정된 파일은 일반 사용자가 실행했을 때\n");
	printf("일반 사용자의 권한으로 실행하는 것이 아니라\n");
	printf("해당 파일의 소유자 권한으로 실행하는 것이기 때문입니다.\n");
	next_line();

	printf("\"/usr/bin/passwd\" 파일은 위의 \"/etc/passwd\"(와)과는 다른 파일입니다.\n");
	next_line();

	printf("\"/usr/bin/passwd\" 파일을 \"ls -l\" 명령으로 보면 다음과 같습니다.\n\n");

	printf("-rwsr-xr-x 1 root root xxxx xx월 xx xxxx /usr/bin/passwd\n");
	next_line();
	
	printf("위의 \"passwd\" 파일의 권한 부분을 보면 \"-rwsr-xr-x\"(와)과 같이 되어 있습니다.\n");
	next_line();

	printf("권한 부분에서 \"rws\"라고 적힌 부분은 현재 \"SetUID\"가 적용되었다는 의미이며\n");
	printf("실행 권한을 의미하는 'x' 자리에 's'가 표기되어 있습니다.\n");
	next_line();
	
	printf("'x' 자리에 's'로 표기된다는 것만 다르고 의미는 다음과 같습니다.\n");
	printf("\"소유자가 'root'이며, 'root'에게는 읽기, 쓰기, 실행 모든 권한을 줍니다.\"\n");
	next_line();
	

	printf("'s'가 'x'를 포함하기 때문에 's'로 표기되는 것이며\n");
	printf("만약 실행 권한이 없는데 \"SetUID\"가 설정되었다면 대문자 'S'로 표기됩니다.\n");
	next_line();

	printf("그러므로 위의 \"/usr/bin/passwd\" 파일은 일반 사용자가 실행했을 때\n");
	printf("'root'의 권한으로 실행하게 됩니다.\n");
	next_line();

	printf("이처럼 어떤 사용자라도 \"SetUID\"가 설정된 파일을 실행한다면\n");
	printf("\"파일 소유자의 권한\"을 잠깐 동안 얻어서 실행합니다.\n");
	next_line();

	printf("파일에 \"SetUID\"를 설정하는 방법은\n");
	printf("\"chmod\" 명령어를 이용하여 부여할 권한에 '4000'을 더해주면 됩니다.\n");
	printf("ex) chmod 4741 [파일 이름]\n");
	next_line();

	printf("\"SetUID\"는 파일의 소유자 권한을 얻지만 이를 이용하여\n");
	printf("'root' 권한도 얻을 수 있으므로 해킹에 이용됩니다.\n");
	next_line();

	system("clear");

	printf("<참고>\n\n\n");
	printf("리눅스에서 어떠한 명령어를 실행시킬 때의 과정은 다음과 같습니다.\n\n");
	printf("1. 현재 작업 디렉토리에서 찾습니다.\n\n");
	printf("2. $PATH에서 찾습니다.\n\n");
	printf("3. 실행 권한을 확인합니다.\n\n");
	printf("4. 권한이 있다면 실행시킨 UID로 실행합니다.\n\n");
	printf("5. 권한이 없다면 해당 파일에 SetUID가 설정되어 있는지 확인합니다.\n\n");
	printf("6. 설정되어 있다면 명령어 소유자의 EUID로 실행합니다.\n\n");

}
