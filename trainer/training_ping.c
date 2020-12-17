#include "func.h"

void training_ping(void)
{
	create_defdir();
	system("clear");

	//////////////////////////////////////////////////////////////////////////////////////////////////////

    	printf("이번에 학습할 명령어는 \"ping\"입니다.\n\n");
	printf("\"ping\" 명령어는 네트워크 실습에서 상당히 많이 사용하게 되는 명령어로\n");
	printf("주로 대상 간의 통신 여부를 확인하기 위해 사용합니다.\n");
	next_line();
	
	printf("\"ping\" 명렁어의 실행 파일은 \"/usr/bin/ping\"(으)로 있습니다.\n");
	next_line();
	
	printf("\"ping\"은 icmp 패킷을 전송하는 도구로 다양한 방법에 이용할 수 있습니다.\n\n");
	printf("심지어 과거에는 \"ping\"을 이용해 서버를 마비시키는\n");
	printf("'ping of death'라는 공격이 있을 정도였습니다.\n");
	next_line();
	
	printf("가장 간단한 사용법은 : \"ping [타겟 IP 또는 주소]\"입니다.\n");
	printf("ex) ping 127.0.0.1\n");
	printf("\n해당 명령어는 타겟 IP로 일정한 시간 간격(1초)마다 'ICMP Request' 패킷을 전송합니다.\n");
	next_line();
	
	printf("ICMP 패킷을 전송받은 서버는 해당 패킷을 받았다는 의미로 \n");
	printf("'ICMP Reply'를 전송할 수도 있습니다.\n");
	next_line();
	
	printf("여기서 할수도 있다는 의미는, naver와 같은 대부분의 서버는 \n");
	printf("보안상의 이유로 ping을 차단합니다.\n");
	next_line();
	
	printf("직접 google과 naver에 \"ping\"을 보내며 실습을 진행하도록 합시다\n");
	printf("사용법 : \"ping [옵션] [타겟 IP 또는 주소]\"\n\n");
	next_line();
	
	system("clear");
	printf("[실습] \"ping\" 명령어를 이용해 www.google.com에 ping을 보내보세요.\n");
	printf("참고로 \"ping\" 명령어는 특별한 옵션 없이는 취소할 때 까지 계속 전송됩니다.\n");
	printf("원하는 만큼 보낸 후에 [Ctrl+c]를 입력해 취소할 수 있습니다.\n");
	run_command("ping www.google.com");

	printf("\n\nping이 종료된 후에는 \"ping\"에 대한 통계가 출력됩니다.\n");
	printf("몇 개의 패킷이 전송되었고, 손실되었는지에 대한 간력한 정보를 알 수 있습니다.\n");
	next_line();
	
	printf("\"ping\" 명령어 실행 중에 계속해서 출력되는 메시지는 \n");
	printf("우리가 보낸 \"ping\"에 대한 응답(reply)입니다.\n\n");
	printf("해당 서버와의 응답 속도나 ttl(time to live)를 알 수 있습니다.\n");
	next_line();
	
	printf("ttl은 패킷이 무한정 네트워크 상에서 배회하는 것을 막기 위해 설정된 일종의 제한입니다.\n");
	next_line();
	
	printf("하나의 hop(홉) 또는 설정된 시간에 따라 ttl이 감소하게 되고, 0이 된 패킷은 폐기됩니다.\n");
	next_line();
	
	printf("따라서 ttl의 숫자가 높을 수록 더 짧은 네트워크 경로를 통해\n");
	printf("reply 패킷이 우리에게 도달한 것을 알 수 있습니다.\n\n");
	next_line();
	
	printf("이런식으로 \"ping\"에 대한 reply를 통해서\n");
	printf("대상 서버에 대한 여러 가지 정보들을 얻을 수 있습니다.\n");
	next_line();
	
	printf("이번에는 reply가 오지 않는 서버인 www.naver.com에 \"ping\"을 보내보겠습니다.\n\n");
	next_line();
	
	printf("[실습] \"ping\" 명령어를 이용해 www.naver.com에 \"ping\"을 보내보세요.\n\n");
	printf("사용법 : \"ping [옵션] [타겟 IP 또는 주소]\"\n");
	printf("\n참고로 \"ping\" 명령어는 특별한 옵션 없이는 취소할 때 까지 계속 전송됩니다.\n");
	printf("원하는 만큼 보낸 후에 [Ctrl+c]를 입력해 취소할 수 있습니다.\n");
	run_command("ping www.naver.com");

	printf("\n\n\"ping\"을 보냈다는 메시지만 출력되며 더 이상의 메시지가 출력되지 않습니다.\n");
	next_line();
	
	printf("이는 naver 측에서 ICMP 패킷을 차단하기 때문입니다.\n");
	printf("우리의 ICMP Request가 도달하지 않으므로, Reply 또한 오지 않아 응답이 없게 됩니다.\n");
	next_line();

	printf("이제부터는 \"ping\"의 옵션에 대해 알아보겠습니다.\n");
	printf("가장 많이 사용되는 옵션 중 하나는 -c(count) 옵션입니다.\n");
	next_line();
	
	printf("옵션의 이름 그대로 전송할 패킷의 갯수를 정하여 전송합니다.\n\n");
	printf("[실습] 다시 한 번 -c 옵션을 이용하여 www.google.com에 2개의 패킷을 보내 보세요.\n");
	run_command("ping -c 2 www.google.com");
	
	printf("\n\n두 번의 패킷에 대한 reply가 전송된 것을 확인할 수 있습니다.\n");
	next_line();
	
	printf("이외에도 다양한 옵션이 존재합니다.\n\n");
	printf("  [ -D 옵션 ] : 각 패킷에 대한 reply에 타임스탬프를 붙여 출력합니다.\n\n");
	printf("  [ -i 옵션 ] : 패킷이 전송되는 간격(interval)을 바꿀 수 있습니다.\n");
	printf("                이 옵션은 관리자 권한만 사용할 수 있습니다.\n\n");
	printf("  [ -f 옵션 ] : interval을 매우 빠르게 하여 패킷을 범람시키는(flood) 옵션입니다.\n");
	printf("                이 역시 관리자 권한만 사용할 수 있습니다.\n\n");
	next_line();

	printf("앞에서는 도메인을 통해 \"ping\"을 전송했지만 IP를 이용해 \"ping\"을 보낼 수 있습니다.\n");
	next_line();
	
	printf("\"ping\" 명령어를 이용해 '127.0.0.1' IP 주소에 4개의 패킷을 보내보세요.\n");
	printf("사용법 : \"ping [옵션] [타겟 IP 또는 주소]\"\n");
	run_command("ping -c 4 127.0.0.1");
	
	printf("\n\n'127.0.0.1'라는 IP 주소는 자신의 localhost 주소입니다.\n");
	printf("즉. 방금은 \"ping\"을 자기 자신에게 보낸 것이 됩니다.\n\n");
	next_line();
	
	printf("localhost 주소는 \"ping\" 명령어가 정상적으로 작동하는지 외에도\n");
	printf("여러 가지 방법으로 사용됩니다.\n");
	next_line();
	
	printf("이후 콘솔 혹은 터미널에 \"man\" 명령어나 \"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
   	printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
	printf("ping 명령어 학습이 끝났습니다. 고생하셨습니다.\n");

    // Delete default directory
	delete_defdir();
}
