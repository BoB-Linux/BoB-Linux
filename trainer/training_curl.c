#include "func.h"

void training_curl(void)
{
	create_defdir();
	system("clear");

	//////////////////////////////////////////////////////////////////////////////////////////////////////

	printf("이번에 학습할 명령어는 \"curl\" 입니다.\n\n");

	printf("\"curl\" 명령어는 커맨드 라인에서 URL을 통해\n");
	printf("데이터를 전송하거나 다운로드 하는 것에 사용합니다.\n");
	next_line();

	printf("\"curl\" 명령어의 실행 파일은 \"/usr/bin/curl\"(으)로 있습니다.\n");
	next_line();


	printf("사용법은 \"curl [옵션 / URLs]\" 입니다.\n");
	printf("ex) curl google.com\n\n");
	next_line();

	printf("[실습] \"curl\"을 이용하여 \"http://www.naver.com\"의 데이터를 받아보세요.\n");
	printf("(http 까지 모두 입력하세요)\n");
	printf("사용법 : curl [URL]\n");
	just_run_command("curl http://www.naver.com");

	printf("\n\n몇 줄의 출력 결과가 나온 것을 확인할 수 있습니다.\n\n");
	printf("해당 출력 메시지는 HTTP 프로토콜과 관련된 메시지이며\n");
	printf("\"302 Found\"라는 내용이 포함되어 있을 것입니다.\n");
	next_line();

	printf("\"302 Found\" 메세지는 해당 주소가 다른 주소로 변경되었음을 의미하고\n");
	printf("다른 주소의 정보가 존재한다는 것을 알려주는 것입니다.\n");
	next_line();

	printf("보통 chrome과 같은 인터넷 브라우저로 접속할 때 '302' 코드가 발생되면\n");
	printf("자동으로 변경된 새 주소에 연결하여 사용자에게 데이터를 보여줍니다.\n");
	next_line();

	printf("하지만 \"curl\"에서는 따로 옵션을 주어 수행해야 합니다.\n");
	printf("이 때 사용하는 옵션이 바로 '-L(Location의 약자)'입니다.\n\n");
	next_line();

	printf("[실습] \"curl\"에 '-L' 옵션을 이용하여 \"http://www.naver.com\"의 데이터를 받아보세요.\n");
	printf("사용법 : curl [옵션] [URL]\n");
	just_run_command("curl -L http://www.naver.com");

	printf("\n\n이번에는 더 많은 데이터들이 출력되는 것을 확인할 수 있습니다.\n\n");
	printf("위의 출력 결과는 \"https://www.naver.com\"에서 받아온 데이터입니다.\n");
	next_line();

	printf("실제로 웹 브라우저에서 \"http://www.naver.com\"을 입력하여 접속하려고 하면\n");
	printf("\"https://www.naver.com\"으로 '리다이렉션'됩니다.\n");
	next_line();

	printf("이유는 'http'보다 'https' 프로토콜이 더 안전하기 때문에\n");
	printf("해당 주소를 사용하도록 한 것입니다.\n");
	next_line();

	printf("'-L' 옵션을 통해 리다이렉션된 주소로 이동하여 데이터를 받아왔기 때문에\n");
	printf("\"curl https://www.naver.com\"(와)과 같은 역할을 합니다.\n");
	next_line();

	printf("한편, \"curl\"을 통한 더 많은 정보를 얻고 싶을 때가 있습니다.\n");
	printf("이럴 때는 '-v' 옵션을 추가하여 수행하면 됩니다.\n\n");
	next_line();

	printf("[실습] \"curl\" 명령어에 '-v' 옵션을 이용하여\n");
	printf("\"http://www.naver.com\"에서 데이터를 받아보세요.\n");
	printf("사용법 : curl [옵션] [URL]\n");
	run_command("curl -v http://www.naver.com");

	printf("\n\n처음 \"curl\"을 통해 'http://www.naver.com'의 정보를 받아왔을 때보다\n");
	printf("다양한 정보가 출력됩니다.\n\n");
	printf("위의 출력 결과 중 특히 눈여겨봐야 할 것은 \"Location\" 부분입니다.\n\n");
	next_line();

	printf("\"Location\" 부분이 'https://www.naver.com'(으)로 되어 있는 것을 확인할 수 있습니다.\n");
	next_line();

	printf("'-L' 옵션은 이러한 'Location'의 약자이며\n");
	printf("'Location' 정보를 따라서 리다이렉션된 URL로 접속을 시도합니다.\n");
	next_line();

	printf("\"curl\"은 단순히 데이터를 콘솔에 출력하는 역할도 있지만\n");
	printf("특정 URL을 통해 출력 결과나 파일을 다운로드 받을 수도 있습니다.\n");
	next_line();

	printf("이때 사용하는 옵션은 '-o' 옵션입니다.\n");
	printf("'-o' 옵션은 \"curl -o [저장할 파일 이름] [URL]\"의 형식으로 사용하면 됩니다.\n\n");
	next_line();

	printf("[실습] \"curl\" 명령어에 '-o' 옵션을 이용하여 \"https://www.naver.com\"의 데이터를\n");
	printf("'naver'라는 이름의 파일로 저장되도록 다운로드 해보세요.\n");
	printf("사용법 :  curl -o [저장할 파일 이름] [URL]\n");
	run_command("curl -o naver https://www.naver.com");

	printf("\n\n위에서 출력되는 메시지들은 \"curl\"을 통해 다운로드 되는 파일의 진행 사항입니다.\n\n");
	next_line();

	printf("지금 다운로드 받는 데이터는 텍스트 정보이기 때문에\n");
	printf("용량이 매우 작아 아주 빠르게 다운로드 되었지만\n\n");
	printf("용량이 큰 파일을 다운로드 받을 때는\n");
	printf("진행 사항이 출력되는 것이 사용자에게 도움이 됩니다.\n\n");
	next_line();

	printf("[실습] \"ls -al\" 명령어를 통해 'naver' 파일이 생성된 것을 확인해보세요.\n");
	just_run_command("ls -al");
	next_line();

	printf("\n[실습] 이번에는 \"cat\"을 이용하여 'naver' 파일의 정보를 출력해보세요.\n");
	printf("사용법 :  cat [출력할 파일 이름]\n");
	just_run_command("cat naver");

	printf("\n\n위에서 \"curl\" 명령어를 통해\n");
	printf("\"https://www.naver.com\"의 데이터를 받아왔을 때와 같은 출력 결과입니다.\n");
	next_line();

	printf("이처럼 \"curl\"을 통한 출력 결과를 '-o' 옵션을 통해 파일로 저장할 수도 있습니다.\n\n");
	next_line();

	printf("또한 '특정 다운로드 링크'를 [URL]에 지정하여 입력하면\n");
	printf("입력된 링크를 통하여 파일을 받을 수도 있습니다.\n");
	next_line();

	printf("이번 학습에서는 \"curl\" 명령어를 이용하여 다운로드 위주로 살펴보았지만\n");
	printf("\"curl\" 명령어로 파일을 업로드할 수도 있습니다.\n");
	next_line();


	printf("이 때는 '-T' 옵션을 사용하며\n");
	printf("추후 서버를 구축하시거나, 서버를 다루는 것에 숙련된다면 사용해보시길 바랍니다.\n");
	next_line();

	printf("위의 옵션을 포함하여 \"curl\" 명령어의 자주 쓰이는 옵션은 다음과 같습니다.\n\n");
	printf("  [ -k (--insecure) ]\n");
	printf("https 사이트를 SSL certificate 검증을 하지 않고 연결합니다.\n");
	printf("\"wget\" 명령어의 --no-check-certificate 옵션과 비슷합니다.\n\n");
	printf("  [ -l (--head) ]\n");
	printf("HTTP header만 보여주고 content는 표시하지 않습니다.\n\n");
	printf("  [ -D (--dump-header) <file> ]\n");
	printf("<file>에 HTTP header를 기록합니다.\n\n");
	printf("  [ -L (--location) ]\n");
	printf("서버에서 HTTP 301이나 HTTP302 응답이 왔을 경우 리다이렉션 되는 URL로 따라갑니다.\n\n");
	printf("  [ -s (--silent) ]\n");
	printf("정숙 모드로서, 진행 내역이나 메시지 등을 출력하지 않습니다.\n");
	printf("HTTP response code만 가져올 때 유용하게 쓰입니다.\n\n");
	next_line();

	printf("\"curl\" 명려어와 비슷한 명령어로는 \"wget\" 명령어가 있습니다. \n");
	printf("둘의 사용법은 비슷하므로 하나만 배워도 숙지하기가 쉬울 것입니다.\n");
	next_line();

	printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
	printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
	printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
	next_line();

	printf("\"curl\" 명령어의 학습이 끝났습니다.\n");
	printf("고생하셨습니다.\n");

	delete_defdir();
}
