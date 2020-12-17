#include "func.h"

void file_check(){ 
    int Result = access("./index.html", 0 ); // unistd.h
    if (Result == 0) remove("./index.html"); // stdio.h
} // 파일 존재 확인 후, 존재시 삭제

void training_wget(void)
{
	create_defdir();
	system("clear");


	printf("이번에 배울 명령어는 \"wget\"입니다.\n\n");
	printf("\"wget\" 명령어는 웹 상에 있는 파일을 다운받는 명령어이며\n");
	printf("지원되는 프로토콜은 'HTTP', 'HTTPS', 'FTP'가 있습니다.\n");
	next_line();
	
	printf("\"wget\" 명령어의 실행파일은 \"/usr/bin/wget\"(으)로 있습니다.\n");
	next_line();

	printf("기본적으로 웹 상에 있는 파일을 다운받을 때는\n");
	printf("\"wget [URL 링크]\"와 같이 사용합니다.\n");
	next_line();
	
	printf("즉, 사용법은 : \"wget [옵션] [URL]\" 입니다.\n\n");
	next_line();

	printf("[실습] '네이버(https://www.naver.com)'의 웹 페이지 파일을 다운받아보세요.\n");
	file_check();
	just_run_command("wget https://www.naver.com");
	
	printf("\n\nwget을 통해 다운로드 받은 파일에 대한 정보가 출력됩니다.\n\n");
	printf("접속한 URL의 IP 정보와 '200'이라는 HTTP 상태코드 등\n");
	printf("여러가지 정보를 확인할 수 있습니다.\n");
	next_line();
	
	printf("또한, 우리가 방금 다운로드 받은 파일은 용량이 낮은 파일이라 확인하지 못했지만\n");
	printf("파일이 다운로드 받아지는 상태가 표시됩니다.\n");
	next_line();
	
	printf("다운로드 받은 파일인 'index.html'을 확인해보겠습니다.\n\n");
	next_line();
	
	printf("[실습] \"cat\"을 이용하여 index.html의 내용을 확인해보세요.\n");
	just_run_command("cat index.html");
	
	printf("\n\n우리가 네이버에 접속하여 볼 수 있는 내용이 텍스트로 출력됩니다.\n");
	printf("데이터를 그대로 받아오기에 조금 알아보기 힘들 것입니다.\n");
	next_line();
	
	printf("이렇게 html 파일을 다운로드 받을 수도 있지만\n");
	printf("우리가 흔히 인터넷에서 다운로드 받는 자료들도 \"wget\"으로 받을 수 있습니다.\n");
	next_line();
	
	printf("인터넷에서 클릭을 통해 다운로드를 받는 방식은\n");
	printf("어떤 아이콘을 클릭하면 그에 해당하는 링크로 이동되는 원리입니다.\n");
	next_line();
	
	printf("따라서 해당 링크 주소를 얻을 수 있다면\n");
	printf("동일한 파일을 \"wget [해당 주소]\" 명령어를 통해 다운로드 받을 수 있습니다.\n");
	next_line();
	
	printf("\"wget\" 명령어는 \"curl\" 명령어와 흡사한 점이 많으니\n");
	printf("비교하며 공부해보시길 권해드립니다.\n");
	next_line();
	
	printf("학습한 내용 외에도 \"wget\"에는 다양한 옵션이 존재합니다.\n\n");
	next_line();
	
	printf("\"wget\"의 자주 쓰이는 옵션은 다음과 같습니다.\n\n");
	printf("  [ -c <URL> ] : 파일 이어받기\n\n");
	printf("  [ -0 <URL> ] : 파라미터 형태의 링크에서 파일 다운로드\n\n");
	printf("  [ -r <URL> ] : 디렉터리 구조를 유지한채 다운로드\n\n");
	printf("  [ -nd -r --accept=<확장자> <URL> ] : 특정 확장자 파일만 다운로드\n\n");
	printf("  [ -nd -r --reject=<확장자> <URL> ] : 특정 확장자 파일만 빼고 다운로드\n\n");
	next_line();
	
	printf("이와 같이 옵션을 사용하면 더욱 유용하게 활용할 수 있습니다.\n");
	next_line();
	
	printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
	printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
	printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
	next_line();
	
	printf("\"wget\" 명령어의 학습이 끝났습니다.\n");
	printf("고생하셨습니다.\n");

	delete_defdir();
}
