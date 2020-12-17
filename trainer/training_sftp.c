#include "func.h"

void training_sftp(void)
{
	create_defdir();

	system("clear");

	printf("이번에 학습할 명령어는 \"sftp\" 입니다.\n\n");

	printf("\"sftp\"는 \"ssh\" 프로토콜을 이용하여 파일을 전송합니다.\n");
	next_line();
	
	printf("\"sftp\" 명령어의 실행 파일은 \"/usr/bin/sftp\"(으)로 있습니다.\n");
	next_line();

	printf("예전에 파일을 전송하기 위해 사용되는 \"ftp\" 이라는 프로토콜 및 명령어가 있었습니다.\n");
	next_line();

	printf("하지만 \"ftp\"는 파일을 전송함에 있어서 암호화를 하지 않고\n");
	printf("데이터를 평문으로 전송했습니다.\n");
	next_line();
	
	printf("위와 같이 데이터를 평문으로 보내게 된다면\n");
	printf("공격자가 중간에서 데이터를 가로챘을 때 어떤 데이터인지 바로 알아볼 수 있습니다.\n");
	next_line();

	printf("그리하여 평문으로 전송하는 \"ftp\"에 \"ssh\" 프로토콜을 더하여\n");
	printf("데이터를 전송할 때 암호화하여 전송하게 됩니다.\n");
	next_line();

	printf("\"sftp\"는 \"ssh\" 로 접속하는 것이 아니라\n");
	printf("일반적으로 \"FTP client\"를 이용하여 접속합니다.\n");
	next_line();

	printf("전송할 때의 데이터만 \"ssh\"를 이용해서 전송합니다.\n");
	next_line();

	printf("\"ftp\"는 기본적으로 설정된 포트가 '20'번과 '21'번입니다.\n");
	next_line();

	printf("하지만 \"sftp\"는 \"ssh\"의 포트인 '22'번을 사용합니다.\n");
	next_line();

	printf("\"sftp\" 명령어의 사용법은 \"sftp [옵션] [원격지 서버]\" 입니다.\n");
	printf("ex) sftp rookie@192.168.0.3\n");
	next_line();

	printf("\"sftp\" 명령어의 자주 쓰이는 옵션은 다음과 같습니다.\n\n");
	printf("  [ '-P' ] : 원격지 서버에 접속할 때 연결할 포트를 설정합니다.\n");
	printf("	     (ssh 명령어의 '-p' 옵션과 같습니다.\n");
	printf("  [ '-i' ] : ssh private key 위치를 지정합니다.\n");
	printf("  [ '-b' ] : batch file을 이용하여 업로드합니다.\n\n");
	next_line();

	printf("\"sftp\" 명령은 \"ssh\" 명령과 사용 방법이 같습니다.\n");
	next_line();

	printf("그러므로 이 트레이닝에서는 따로 실습을 진행하지 않고\n");
	printf("어떤 명령어를 이용하는지 알아보겠습니다.\n");
	next_line();

	printf("(원격지 서버에 접속하는 실습은 \"ssh\" 트레이닝에서 실습할 수 있습니다.)\n");
	next_line;
	
	system("clear");

	printf("\"sftp\" 명령을 이용하여 원격지 서버에 접속하고 나면 \"sftp client\"가 실행됩니다.\n");
	next_line();

	printf("이 \"sftp client\"는 리눅스의 프롬프트와는 좀 다르게 생겼습니다.\n");
	printf("아래와 같이 보일 것입니다.\n\n");
	printf("sftp>\n");
	next_line();
	
	system("clear");
	printf("\"sftp client\"가 실행된 상태에서는 리눅스의 기본적인 명령어들을 이용할 수 있습니다.\n");
	printf("(\"cd\", \"ls\", \"mkdir\", \"pwd\" 등)\n");
	next_line();

	printf("\"sftp\"를 이용하여 파일을 전송하고 전송 받을 때에는\n");
	printf("\"put\"과 \"get\"을 자주 이용합니다.\n");
	next_line();

	printf("\"sftp client\"인 상태에서 \"put\"은\n");
	printf("자신의 컴퓨터에 있는 파일을 원격지 서버에 업로드합니다.\n");
	next_line();
	
	printf("\"sftp client\"인 상태에서 \"get\"은\n");
	printf("원격지 서버에 있는 파일을 자신의 컴퓨터에 다운로드합니다.\n");
	next_line();

	printf("또한 \"sftp>\" 프롬프트 상태에서\n");
	printf("리눅스의 기본 명령어들의 옵션들도 동일하게 사용가능합니다.\n");
	next_line();

	system("clear");

	printf("\"sftp\" 명령은 따로 실습을 진행하지는 않았지만\n");
	printf("추후에 원격지 서버로 파일을 업로드하거나 \n");
	printf("자신의 컴퓨터로 다운로드할 때 유용한 명령어입니다.\n");
	next_line();

	printf("자신의 컴퓨터나 노트북에 리눅스를 설치하여\n");
	printf("\"sftp\" 명령으로 파일을 업로드하거나 다운로드 해보세요.\n");
	next_line();

	printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
    	printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
    	printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
    	next_line();

    	printf("\"sftp\" 명령어의 학습이 끝났습니다.\n");
    	printf("고생하셨습니다.\n");

	delete_defdir();
}
