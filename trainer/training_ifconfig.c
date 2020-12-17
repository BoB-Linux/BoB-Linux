#include "func.h"

void training_ifconfig(void)
{
	system("clear");
    create_defdir();
	//////////////////////////////////////////////////////////////////////////////////////////////////////

    printf("이번에 학습할 명령어는 \"ifconfig\" 입니다.\n\n");

    printf("\"ifconfig\" 명령어는 'Interface configuration'의 약자이며\n");
    printf("네트워크 인터페이스를 확인하고 설정할 수 있는 명령어입니다.\n");
    next_line();

    printf("\"ifconfig\" 명령어의 실행 파일은 \"/usr/sbin/ifconfig\"(으)로 있습니다.\n\n");
    next_line();

    printf("[실습] \"ifconfig\" 명령어를 입력하여 네트워크 인터페이스를 확인해보세요.\n");
    just_run_command("ifconfig");
    // 네트워크 인터페이스 출력 실습

    printf("\n\n\"ifconfig\"만 입력하면 활성화된 인터페이스의 세부 사항을 보여줍니다.\n\n");
    next_line();

    printf("\"enp0s3\"(와)과 \"lo\"(은)는 네트워크 인터페이스의 이름입니다.\n");
    next_line();

    printf("[lo] 인터페이스의 경우, 'loop back'의 약자로\n");
    printf("자기 자신과 통신하기 위한 가상 인터페이스입니다.\n");
    next_line();

    printf("[flags] : 네트워크 카드의 상태를 말합니다.\n");
    next_line();

    printf("[mtu] : 네트워크 인터페이스의 최대 전송 단위입니다.\n");
    next_line();
    
    printf("[inet] : 네트워크 인터페이스에 할당된 아이피 주소(ipv4)를 의미하며\n");
    printf("[inet6] : 네트워크 인터페이스에 할당된 ipv6 주소를 의미합니다.\n\n");
    printf("일반적으로 '내부 아이피'라 부르는 주소는 ipv4 형식인 [inet] 주소입니다.\n");
    next_line();

    printf("[netmask] : 쉽게 생각하여 네트워크에 할당할 수 있는 아이피 주소의\n");
    printf("            최대 값을 의미합니다.\n");
    next_line();

    printf("[brodcast] : 네트워크에 속하는 모든 호스트에게 데이터를 보낼 수 있는\n");
    printf("             주소를 의미합니다.\n");
    next_line();

    printf("[prefixlen] : ip주소에서 서브넷 마스크로 사용될 비트 수를 의미합니다.\n");
    next_line();

    printf("[scopeid] : IPv6의 범위입니다.\n");
    printf("            LOOKPBACK / LINKLOCAL / SITELOCAL / COMPATv4 / GLOBAL\n");
    next_line();

    printf("[ether] : 네트워크 인터페이스의 하드웨어 주소이며\n");
    printf("          다른 말로는 맥(MAC) 주소라고 부릅니다.\n");
    next_line();

    printf("[RX packets] : 받은 패킷의 정보를 의미합니다.\n\n");
    printf("[TX packets] : 보낸 패킷의 정보를 의미합니다.\n");
    next_line();

    printf("[collisions] : 충돌된 패킷 수를 의미합니다.\n\n");
    next_line();

    printf("\"ifconfig\" 명령어를 사용하여 특정 인터페이스를 비활성화 또는 활성화 할 수도 있습니다.\n");
    printf("\"ifconfig [인터페이스 이름] up/down\"(와)과 같이 사용합니다.\n\n");
    next_line();

    printf("[실습] 'enp0s3'(이)라는 인터페이스를 비활성화 해보겠습니다.\n");
    printf("사용법 : ifconfig [인터페이스 이름] down\n");
    fake_run_command("ifconfig enp0s3 down");

    printf("\n\n위의 실습처럼 \"ifconfig\" 명령어로 인터페이스를 down 또는 up 할 수 있습니다.\n\n");
    next_line();

    printf("비활성화한 인터페이스는 단순 'ifconfig' 명령어로는 나타나지 않지만\n");
    printf("'-a' 옵션을 주면 비활성화 한 인터페이스까지 모두 볼 수 있습니다.\n\n");
    next_line();

    printf("[실습] \"ifconfig\"에 '-a' 옵션을 사용하여 비활성화인 인터페이스까지 출력해보세요.\n");
    printf("사용법 : ifconfig [옵션]\n");
    just_run_command("ifconfig -a");

    printf("\n\n위의 결과는 비활성화 된 인터페이스까지 전부 출력한 것입니다.\n\n");
    printf("아까 했던 실습의 출력과 같다면 비활성화 된 인터페이스가 없는 것입니다.\n\n");
    next_line();

    printf("만약 원하는 인터페이스의 정보만 보고 싶다면\n");
    printf("\"ifconfig [인터페이스 이름]\"으로 가능합니다.\n\n");
    next_line();

    printf("[실습] \"ifconfig\" 명령어를 이용하여 'lo' 인터페이스의 정보만 출력해보세요.\n");
    printf("사용법 : ifconfig [인터페이스 이름]\n");
    just_run_command("ifconfig lo");

    printf("\n\n위의 출력 결과는 \"lo\" 인터페이스만 출력한 내용입니다.\n\n\n");
    next_line();
    // 특정 인터페이스 정보만 출력하도록 실습

    printf("각 네트워크 인터페이스에 할당된 정보를 바꾸고 싶을 때는 아래와 같이 입력하면 됩니다.\n\n");
    printf("IP 주소 변경        : ifconfig [인터페이스 이름] [IP]\n\n");
    printf("netmask 주소 변경   : ifconfig [인터페이스 이름] netmask [IP]\n\n");
    printf("brodcast 주소 변경  : ifconfig [인터페이스 이름] brodcast [IP]\n\n");
    printf("맥(MAC)주소 변경    : ifconfig [인터페이스 이름] hw ether [IP]\n\n\n");
    printf("위의 내용은 따로 실습을 진행하지는 않겠습니다.\n");
    printf("추후에 리눅스 시스템을 구축하여 실습해보시길 바랍니다.\n");
    next_line();

    printf("정보를 바꿀 때는 항상 주의해야 하며\n");
    printf("함부로 정보를 바꾸지 않는 것을 추천드립니다.\n");
    next_line();

    printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
    printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
    printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
    next_line();

    printf("\"ifconfig\" 명령어의 학습이 끝났습니다.\n");
    printf("고생하셨습니다.\n");
    delete_defdir();
}
