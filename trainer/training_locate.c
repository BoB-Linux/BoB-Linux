#include "func.h"

void training_locate(void)
{
    create_defdir(); 
    
    system("clear");

    printf("이번에 학습할 명령어는 \"locate\" 입니다.\n\n");
    
    printf("\"locate\" 명령어는 \"find\" 명령어와 비슷하게 파일을 검색하지만\n");
    printf("다양한 패턴의 파일들을 찾고자 할 때 매우 유용하게 사용됩니다.\n");
    next_line();
    
    printf("\"locate\" 명령어의 실행 파일은 \"usr/bin/locate\"(으)로 있습니다.\n");
    next_line();
    
    printf("\"find\" 명령어는 다양한 옵션이 있어서 원하는 파일을 거의 완벽하게 찾을 수 있지만\n");
    printf("검색 속도가 느린 단점이 있습니다.\n");
    next_line();
    
    printf("그에 반해 \"locate\" 명령어는\n");
    printf("미리 파일시스템을 검색하여 현재 존재하고 있는 파일들의 목록을 데이터베이스화 한\n");
    printf("검색 DB를 만들어서 검색하기 때문에\n\n");
    printf("검색하고 싶은 문자열이나 패턴만으로 검색할 때는 locate가 더 빠르고 좋습니다.\n");
    next_line();
    
    printf("하지만 \"locate\" 명령어는 속도는 빠르지만 사용 전에 \"sudo updatedb\"라는 명령어로\n");
    printf("DB 파일을 생성 혹은 업데이트를 해줘야 한다는 번거로움이 있습니다.\n");
    next_line();
    
    printf("그래도 매번 사용 전에 해주면 좋겠지만 최근에 무언가를 삭제하는 등의\n");
    printf("변경사항이 있을 때가 아니라면 굳이 안해줘도 되고\n");
    printf("시스템에서 자동으로 매일 새벽에 자동으로 업데이트 작업을 진행해줍니다.\n");
    next_line();
    
    printf("만약 시스템에서 \"locate\" 명령어가 실행되지 않는다면\n");
    printf("\"mlocate\"라는 패키지를 설치해주어야 합니다.\n");
    printf("Debian 계열의 시스템에서는 \"sudo apt install mlocate\"를 입력하여 설치해줍니다.\n");
    next_line();
    
    printf("사용법은 \"locate [옵션] [검색할 문자열 or 패턴]\" 입니다.\n");
    printf("ex)locate pwd\n");
    next_line();
    
    printf("\"locate\" 명령어를 사용 전에 \"sudo updatedb\" 명령어로 DB를 업데이트 해줘야 합니다.\n");
    printf("기본으로 Ubuntu에서는 \"/var/lib/mlocate/mlocate.db\"로 DB가 존재하고 지정되어있습니다.\n\n");
    next_line();
    
    printf("[실습] \"sudo updatedb\"라고 입력하여 DB를 업데이트 해주세요.\n");
    just_run_command("sudo updatedb");
    
    printf("\n\n이제 DB가 성공적으로 업데이트 되었을 것입니다.\n\n");
    next_line();
    
    printf("[실습] \"locate\" 명령어를 이용하여\n");
    printf("\"find\"라는 단어가 들어간 파일들의 경로들을 출력하세요.\n");
    printf("사용법 : locate [검색할 명령어]\n");
    just_run_command("locate find");
    
    printf("\n\n잘 따라오셨다면 \"find\" 단어가 들어간 여러 파일들의 경로들이 출력되었을 것입니다.\n");
    next_line();
    
    system("clear");
    printf("\"locate\" 명령어에서 자주 쓰이는 옵션들은 다음과 같습니다.\n");
    next_line();
    
    printf("  [ -e ] : 검색에서 제외할 디렉토리를 지정합니다.\n");
    printf("  [ -l ] : 결과에서 몇 개만 보여줄 것인지 제한합니다.\n");
    next_line();
    
    printf("실행 결과에서 n개만 보여주겠끔 하는 옵션을 실습하겠습니다.\n\n");
    next_line();
    
    printf("[실습] \"locate -l 10 *.deb\"을(를) 입력하여 '-l' 옵션을 실습해보세요\n");
    printf("사용법 : locate [옵션] [검색할 문자열 or 패턴]\n");
    just_run_command("locate -l 10 *.deb");
    
    printf("\n\n잘 입력하셨다면, 10개의 .deb 확장자를 가진 파일들의 경로가 출력되었을 것입니다.\n");
    printf("(아무것도 출력되지 않는다면 '.deb' 확장자의 파일이 없다는 것입니다.)\n");
    next_line();
    
    printf("간단하게 \"locate\" 명령어에 대해 배우고 실습해보았습니다.\n");
    next_line();
    
    printf("\"locate\" 명령어의 옵션은 위에 나온 것들 말고도 여러가지가 있습니다.\n");
    next_line();

    printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
    printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
    printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
    next_line();

    printf("\"locate\" 명령어의 학습이 끝났습니다.\n");
    printf("고생하셨습니다.\n");
    
    delete_defdir();
}
