#include "func.h"

void training_touch(void)
{
	create_defdir();
	system("clear");

	//////////////////////////////////////////////////////////////////////////////////////////////////////

	system("touch test");
	
	printf("이번에 학습할 명령어는 'touch' 입니다.\n\n");
	printf("\"touch\"는 특정 파일의 날짜 및 시간 정보를 변경하는 명령어입니다.\n");
	next_line();
	
	printf("\"touch\" 명령어의 실행 파일은 \"/usr/bin/touch\"(으)로 있습니다.\n");
	next_line();
	
	printf("아무런 옵션을 주지 않고 사용하면 서버의 현재 시간으로 \n\n");
	printf("파일의 최근 사용 시간(access time), 최근 수정 시간(modify time),\n");
	printf("최근 변경 시간(change time)을 변경합니다.\n");
	next_line();
	
	printf("'access time', 'modify time', 'change time'은 보통\n");
	printf("'atime', 'mtime', 'ctime'으로 줄여 사용합니다\n");
	next_line();
	
	printf("'atime', 'mtime', 'ctime'을 파일의 '타임스탬프' 값이라고 합니다.\n");
	next_line();
	
	printf("사용법은 : \"touch [옵션] [파일명]\"입니다.\n");
	printf("ex) touch file1\n");
	next_line();
	
	printf("먼저 미리 생성한 'test'라는 파일의 타임 스탬프 정보를 보여드리겠습니다.\n");
	next_line();
	
	printf("타임 스탬프를 보는 명령어는 \"stat\" 명령어 입니다.\n");
	system("stat test");
	next_line();
	
	printf("'Access', 'Modify', 'Change' 오른쪽에 있는 날짜로 시작되는 값이 각각\n");
	printf("'atime', 'mtime', 'ctime'을 나타냅니다.\n\n");
	next_line();
	
	printf("[실습] touch 명령어를 이용해서 'test' 파일의 타임스탬프를 현재 시간으로 바꿔보세요.\n");
	printf("TIP : 아무런 옵션을 주지 않고 사용하면 서버의 현재 시간으로 \n");
	printf("파일의 최근 사용 시간(access time)과 최근 수정 시간(modify time)을 변경\n");
	
	// run_command의 인자로 특정 명령어를 넘겨주어 그 외의 입력값에 대해서 실행시키지 않음
	run_command("touch test");
	
	printf("\n\n아래는 변경된 'test' 파일의 타임스탬프 입니다.\n");
	printf("\n");
	system("stat test");
	next_line();
	
	printf("옵션 없이 사용하여 해당 파일을 현재 시간으로 변경할 수도 있지만\n");
	printf("자신이 원하는 시간으로 타임스탬프 값을 변경할 수도 있습니다.\n");
	next_line();
	
	printf("'-t' 옵션은 자신이 원하는 시간으로 타임스탬프를 변경할 수 있습니다.\n");
	printf("이 때는 파일의 'atime'과 'mtime'만 변경됩니다.\n");
	next_line();
	
	printf("'-t' 옵션 다음에 시간을 [YYYYMMDDhhmm.ss] 형태로 지정하면 됩니다.\n\n");
	next_line();
	
	printf("[리눅스 지식]\n\n");
	printf("[YYYYMMDDhhmm.ss]과 같은 형태는 시스템에서 날짜를 지정하는 방식인데\n");
	printf("앞으로도 이와 같은 형식의 날짜 표기를 자주 보게 될 것입니다.\n");
	next_line();
	
	printf("YYYY는 Year의 약자로, '년도'를 2020과 같이 4자리로 표현하는 것을 의미하고\n");
	printf("MM은 Month의 약자로 '월'을 2자리로 표현하는 것을 의미합니다.\n");
	next_line();
	
	printf("DD는 Day의 약자로 '일'을 2자리로 표현하는 것을 의미하고\n");
	printf("hh와 mm은 각각 hour과 minute로 '시'와 '분'을 각각 2자리로 표현하는 것을 의미합니다.\n");
	next_line();
	
	printf("마지막으로 ss는 second의 약자로 초를 2자리로 표현하는 것을 의미합니다.\n");
	next_line();
	
	printf("따라서 \"2000년 1월 2일 3시 4분 5초\" 라는 날짜는\n");
	printf("[YYYYMMDDhhmm.ss] 형식으로 200001020304.05로 표기하면 됩니다.\n\n");
	next_line();
	
	printf("[실습] '-t' 옵션을 \"touch\" 명령어와 조합하여 'test' 파일의 'atime', 'mtime'을 \n");
	printf("2099년 1월 1일 1시 1분 1초로 변경해보세요.\n");
	printf("사용법 : \"touch -t [변경할 시간] [파일명]\"\n");
	
	run_command("touch -t 209901010101.01 test");
	
	printf("\n\n아래는 변경된 'test' 파일의 타임스탬프 입니다.\n");
	printf("\n");
	system("stat test");
	next_line();
	
	printf("'-a' 옵션은 현재 시간으로 파일의 'atime'과 'mtime'을 변경합니다.\n");
	next_line();
	
	printf("아무 옵션을 주지 않고 \"touch [파일명]\"의 형식으로 사용하면\n");
	printf("모든 타임스탬프가 현재 시간으로 변경되지만\n");
	printf("'-a' 옵션은 'ctime'에는 영향을 미치지 않습니다\n");
	next_line();
	
	printf("한편, \"touch\" 명령어는 새로운 파일을 만들 때도 자주 사용합니다.\n");
	next_line();
	
	printf("아무런 옵션 없이 \"touch [디렉토리에 없는 파일명]\"의 형식으로\n");
	printf("0바이트를 가진 비어 있는 파일을 생성할 수 있습니다.\n\n");
	next_line();
	
	printf("[실습] \"touch\" 명령어를 이용해 'testfile'이라는 빈 파일을 만들어보세요.\n");
	printf("사용법은 : \"touch [디렉토리에 없는 파일명]\"입니다.\n");
	run_command("touch testfile");
	
	printf("\n\n아래는 \"ls\" 명령어를 통해 출력한 현재 디렉토리에 있는 파일 목록입니다.\n\n");
	system("ls");
	printf("'testfile'이라는 새로운 파일이 생성된 것을 확인할 수 있습니다.\n");
	
	next_line();
	
	printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
	printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
	printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
	next_line();
	
	printf("\"touch\" 명령어의 학습이 끝났습니다.\n");
	printf("고생하셨습니다.\n");
	
	delete_defdir();
}
