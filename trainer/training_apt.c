#include "func.h"

void training_apt(void)
{
    create_defdir();

    system("clear");

    printf("이번에 학습할 명령어는 \"apt\" 입니다.\n\n");
    
    printf("이번 학습에서는 기본적인 개념들과 내용이 많습니다.\n");
    next_line();
    
    printf("\"apt\"는 \"Advanced Packaging Tool\"의 약자입니다.\n");
    next_line();
    
    printf("\"apt\" 명령어의 실행 파일은 \"usr/bin/apt\"(으)로 있습니다.\n");
    next_line();
    
    printf("대표적으로 'Ubuntu'와 'Kali linux'를 포함한\n");
    printf("'Debian 계열의 리눅스 배포판'에서 쓰이는 \"패키지 관리 명령어 도구\"입니다.\n");
    next_line();
    
    printf("Debian 계열에서 패키지 관련 관리 도구로는 대표적으로 \"dpkg\"와 \"apt\"가 있습니다\n");
    next_line();
    
    printf("\"apt\"는 패키지 관련 관리 도구이기 때문에\n");
    printf("대부분 관리자 권한으로 실행되어야 하므로 \"sudo\"와 함께 사용합니다.\n");
    next_line();
    
    printf("원래는 \"apt-get\" 명령어와 \"apt-cache\" 명령어가\n");
    printf("각각 각자의 범주의 기능에 최적화되어 있어서 따로 사용되었으나\n");
    next_line();
    
    printf("두 범주의 기능을 통합하여 하나의 도구에서 운용할 수 있도록 개발된 것이 \"apt\" 입니다.\n");
    next_line();
    
    printf("실제로 Ubuntu 14 이상부터는 \"apt-get\"이나 \"apt-cache\"대신\n");
    printf("\"apt\" 사용하도록 권장하고 있습니다.\n");
    next_line();
    
    printf("하지만 \"apt-get\" 명령어가 \"apt\"보다 예전부터 사용되오던 명령어로서\n");
    printf("\"apt\" 명령어로 되지 않는 작업들은 \"apt-get\" 명령어를 사용해야 합니다.\n");
    next_line();
    
    printf("\"apt\" 혹은 \"apt-get\"은 인덱스를 가지고 있는데\n");
    printf("이 인덱스는 \"/etc/apt\" 디렉토리 밑에 \"sources.list\"라는 파일로 위치하고 있습니다.\n");
    next_line();
    
    printf("이 sources.list 파일의 내용에는 저장소에 관한 정보가 적혀있습니다.\n");
    next_line();
    
    printf("\"apt\" 혹은 \"apt-get\"으로 패키지를 설치하거나 업데이트 할 때\n");
    printf("sources.list 파일에 적힌 저장소 정보를 얻어와서 설치 및 업데이트를 진행합니다.\n");
    next_line();
    
    printf("리눅스는 초창기에 프로그램을 설치할 때\n");
    printf("소스코드를 다운로드하여 컴파일하고 설치하는 방법이었습니다.\n");
    next_line();
    
    printf("하지만 윈도우처럼 압축을 풀면 실행 파일이 들어있는 것이 아니라\n");
    printf("일일히 압축을 풀고, 컴파일을 한 뒤에 생성되는 실행파일을 실행하는 방식이었는데\n");
    printf("과정은 다음과 같습니다.\n\n");
    printf("1. 압축을 풉니다.\n");
    printf("2. 압축을 풀고 나서 만들어진 디렉토리로 이동합니다.\n");
    printf("3. configure을 입력해서 환경을 만듭니다.\n");
    printf("4. 'make'라는 소프트웨어를 컴파일하는 유틸리티를 이용하여 컴파일을 합니다.\n");
    printf("5. make install로 설치를 진행합니다.\n");
    printf("\n이렇게 5 단계를 거쳐 생성된 실행 파일을 실행했습니다.\n");
    next_line();
    
    printf("위의 방법은 분명 초보자에게 절대적으로 쉽지 않은 작업일 것입니다.\n");
    next_line();
    
    printf("그리하여 이후에 나온 방법이 윈도우처럼 프로그램을 설치하고 나서\n");
    printf("바로 실행할 수 있게 해주는 '설치 파일'을 만들게 됩니다.\n");
    next_line();
    
    printf("이 때 설치에 필요한 것들을 묶은 '설치 파일'을 \"패키지\"라고 불렀습니다.\n");
    next_line();
    
    printf("윈도우로 따지면 \"윈도우 설치 마법사\"와 같다고 볼 수 있습니다.\n\n");
    next_line();
    
    printf("리눅스 배포판에는 여러 종류가 있습니다.\n");
    next_line();
    
    printf("그 여러 종류 중에서 'Redhat 계열'과 'Debian 계열'을 비교해보겠습니다.\n");
    next_line();
    
    printf("Redhat은 Redhat 자체적으로 만든 패키지 관련 관리 도구로\n");
    printf("rpm(Redhat Package Manager)을 사용하여 설치하고 제거하고 검증을 합니다.\n");
    next_line();
    
    printf("그리고 Redhat은 패키지(설치파일)를 '.rpm' 확장자의 파일로 배포하고 있습니다.\n");
    next_line();
    
    printf("하지만 설치 관련하여 의존성의 문제로 인해 탄생한 것이 자동 설치 도구인 \"yum\"입니다.\n");
    next_line();
    
    printf("Redhat 계열에서 \"yum\"은 Debian 계열에서 \"apt\"와 같습니다.\n");
    printf("자동 설치 도구를 이용하면 패키지(설치파일) 다운로드부터 설치까지\n");
    printf("모든 것이 자동으로 진행됩니다.\n");
    next_line();
    
    printf("그런데 위에서 말한 의존성의 문제라는 것은 무엇일까요.\n");
    next_line();
    
    printf("쉽게 말하자면\n");
    printf("'A'라는 프로그램을 실행하려는데 'B'라는 프로그램이 있어야\n");
    printf("'A' 프로그램이 실행되는 것입니다.\n");
    next_line();
    
    printf("예를 들어서 사람이 살아가면서 활동을 하려면 에너지가 필요합니다.\n");
    next_line();
    
    printf("이 에너지는 사람이 섭취하는 음식으로부터 얻어지므로\n");
    printf("음식이 꼭 있어야 에너지를 낼 수 있습니다.\n");
    next_line();    
    
    printf("먄약 음식이 없다면 사람은 에너지를 내지 못할 것입니다.\n");
    next_line();
    
    printf("위에서 에너지를 내기 위해 꼭 음식이 있어야 하는 것처럼\n");
    next_line();
    
    printf("무언가를 실행하기 위해서는 이를 위해 또 다른 무언가가 필요한데\n");
    printf("그 또 다른 무언가가 없어서 실행할 수 없다면, 이것이 의존성 문제입니다.\n");
    next_line();
    
    printf("즉, 특정 프로그램을 실행할 때 다른 프로그램에 의존하는 것으로\n");
    printf("의존하는 다른 프로그램이 있어야만 실행되는 것을 의미합니다.\n");
    next_line();
    
    printf("의존성 문제를 해결해 주는 방법으로는 특정 프로그램이 의존하는\n");
    printf("다른 프로그램들을 설치해주는 것입니다.\n");
    next_line();
    
    printf("만약 특정 프로그램이 의존하는 다른 프로그램들이 많다면\n");
    printf("사용자 입장에서는 엄청 힘들 것입니다.\n\n");
    printf("자동 설치 도구는 이러한 의존성 문제를 해결해주어 쉽게 패키지 설치가 가능합니다.\n");
    next_line();
    
    printf("Redhat에 패키지 관리 도구로 \"rpm\"이 있다면, Debian에는 \"dpkg\"가 있고\n");
    printf("Redhat에 자동 설치 도구로 \"yum\"이 있다면, Debian에는 \"apt\"가 있습니다.\n");
    next_line();
    
    printf("Debian 계열에서 '패키지(설치파일)'의 확장자명은 '.deb' 입니다.\n");
    next_line();
    
    printf("그리고 해당 파일이 어떤 것을 설치하기 위한 것인지에 대한 정보를 담는\n");
    printf("일종의 약속된 작성 방식이 있습니다.\n");
    next_line();
    
    printf("그 약속은 \"패키지이름_버전-릴리즈-아키텍쳐.deb\" 라고 표기하는 것입니다.\n");
    printf("ex) vim_8.0.1453-1ubuntu1_amd64.deb\n");
    next_line();
    
    printf("하지만 \"dpkg\" 역시 의존성 문제를 해결해주지 못합니다.\n");
    printf("프로그램 설치에 있어서는 의존성 문제도 해결해주는 \"apt\" 명령어가 좋습니다.\n");
    next_line();
    
    printf("이제 \"apt\" 명령어의 사용법에 대해 알아보겠습니다.\n");
    next_line();
    
    printf("참고 사항으로 \"apt\" 대신 \"apt-get\" 사용해도 되지만\n");
    printf("\"Ubuntu\"에서는 \"apt\"의 사용을 권장하고 있습니다.\n\n");
    next_line();
    
    printf("실제 시스템에서 \"apt\" 명령어를 사용할 때 사용자로부터 동의를 구할 수 있습니다.\n");
    next_line();
    
    printf("명령어를 입력한 후 'y'혹은 'n'을 입력하라고 나오면\n");
    printf("'y'키 혹은 엔터를 눌러 진행하시면 됩니다.\n");
    next_line();
    
    printf("혹은 명령어 입력 시 '-y' 옵션을 주는 방법도 있습니다.\n");
    next_line();
    
    printf("\"apt\" 명령어 혹은 \"apt-get\" 명령어는\n");
    printf("\"/etc/apt/sources.list\" 파일의 내용에 적힌 저장소를 기반으로 합니다.\n");
    next_line();
    
    printf("다음의 내용은 \"apt\" 명령어들입니다.\n");
    next_line();
    
    system("clear");
    printf("sudo apt update                 : 패키지 인덱스 정보(/etc/apt/sources.list)를\n");
    printf("                                  업데이트 합니다.\n");
    printf("sudo apt upgrade                : 설치된 패키지들을 새 버전으로 업그레이드합니다.\n");
    printf("sudo apt dist-upgrade           : 설치된 패키지들을 의존성 검사하며 업그레이드합니다.\n");
    printf("sudo apt full-upgrade           : 전체 시스템을 새 버전으로 업그레이드합니다.\n");
    printf("sudo apt remove <패키지명>      : 설정 파일은 지우지 않고 패키지만 제거합니다.\n");
    printf("sudo apt purge <패키지명>       : 대부분의 설정 파일까지 제거합니다.\n");
    printf("sudo apt install <패키지명>     : 패키지를 설치합니다.\n");
    printf("sudo apt --reinstall install <패키지명> : 패키지를 재설치합니다.\n");
    printf("sudo add-apt-repository <저장소이름>    : 저장소를 추가합니다.\n");
    printf("sudo add-apt-repository --remove <저장소 이름> : 저장소를 제거합니다.\n");
    printf("sudo apt autoremove             : 불필요한 패키지를 제거합니다.\n");
    printf("sudo apt clean                  : apt를 이용하여 설치된 .deb 패키지를 제거합니다.\n");
    printf("                                  (/var/cache/apt/archive에 .deb 패키지가 설치됩니다.\n");
    next_line();

    printf("sudo -qq list <패키지명>        : 특정 패키지의 설치 여부를 확인합니다.\n");
    printf("sudo apt search <패지키명>      : 패키지를 검색합니다.\n");
    printf("sudo apt show <패키지명>        : 패키지에 대한 정보를 보여줍니다.\n");
    printf("sudo apt edit-sources           : 소스 리스트를 편집합니다.\n");
    printf("sudo apt list                   : 레포지토리에 등록된 패키지 목록을 조회합니다.\n");
    printf("sudo apt list --installed       : 설치된 패키지 목록을 조회합니다.\n");
    printf("                                  (wc -l 명령어를 pipe로 이어주면 숫자로 표기됩니다.)\n");
    printf("sudo apt list --upgradable      : 설치된 패키지 중 업그레이드 대상 패키지 목록을\n");
    printf("                                  조회합니다.\n");
    printf("                                  (wc -l 명령어를 pipe로 이어주면 숫자로 표기됩니다.)\n");
    printf("sudo apt list --all-versions    : 패키지의 모든 버전 목록을 조회합니다.\n");
    printf("                                  (wc -l 명령어를 pipe로 이어주면 숫자로 표기됩니다.)\n\n");
    next_line();
    
    system("clear");
    printf("\"apt\" 명령어 실습에서는 실제 시스템의 패키지를 대상으로 하게 됩니다.\n");
    next_line();
    
    printf("현재 진행 중인 실습을 종료하고 다음 실습으로 넘어가고 싶다면\n");
    printf("중간에 Ctrl + c 키를 입력하시면 됩니다.\n\n");
    printf("4개의 명령어만 실습해보겠습니다.\n");
    next_line();
    
    printf("Debian 계열 리눅스 시스템을 처음으로 켜면\n");
    printf("\"sudo apt update\"를 입력하여 패키지 인덱스 정보를 업데이트 해줍니다.\n\n");
    next_line();
    
    printf("[실습] \"sudo apt udpate\"를 입력하여 패키지 인덱스 정보를 업데이트 해보세요.\n");
    just_run_command("sudo apt update");
    
    printf("\n잘 입력하셨다면 패키지 인덱스 정보가 업데이트 되었을 것입니다.\n");
    next_line();
    
    printf("다음으로 설치되어 있는 패키지들을 새 버전으로 업그레이드해보겠습니다.\n\n");
    next_line();
    
    printf("[실습] \"sudo apt upgrade\"를 입력하여 설치되어 있는 패키지들을 새 버전으로 업그레이드 해보세요.\n");
    just_run_command("sudo apt upgrade");
    
    printf("\n잘 입력하셨다면\n");
    printf("위의 명령어로 패키지들을 업그레이드를 할 수 있다는 것을 확인하실 수 있을 것입니다.\n");
    next_line();
    
    printf("이번에는 특정 패키지를 설치해보겠습니다.\n\n");
    next_line();
    
    printf("[실습] \"sudo apt install gcc\"를 입력하여 'gcc' 패키지를 설치해보세요.\n");
    just_run_command("sudo apt install gcc");
    
    printf("\n\n잘 입력하셨다면 'gcc'가 이미 설치되어 있다고 뜰 것입니다.\n");
    printf("(기본적으로 리눅스는 gcc가 설치되어있습니다.)\n");
    next_line();
    
    printf("마지막으로 방금 설치한 'gcc' 패키지를 제거해보겠습니다.\n\n");
    next_line();
    
    printf("[실습] \"sudo apt remove gcc\"을 입력하여 'gcc' 패키지를 제거해보세요.\n");
    printf("학습의 진행을 위해 'y'키 혹은 'n'키를 누르라는 메세지가 나오면 'n'(을)를 입력해주세요\n");
    just_run_command("sudo apt remove gcc");
    
    printf("\n방금 실습한 명령어로 'gcc' 패키지를 제거하실 수 있습니다.\n");
    next_line();
    
    printf("하지만 'remove' 옵션은 설정 파일까지 제거하지는 않습니다.\n");
    printf("'purge' 옵션을 이용해야 대부분의 설정 파일까지 제거할 수 있습니다.\n");
    next_line();
    
    printf("추후에 리눅스 시스템에서 \"apt\" 명령어의 다양한 옵션들을 실습해보시길 바랍니다.\n");
    next_line();
    
    printf("\"apt\" 명령어의 옵션은 위에 나온 것들 말고도 여러가지가 있습니다.\n");
    next_line();
    
    printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
    printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
    printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
    next_line();
    
    printf("\"apt\" 명령어의 학습이 끝났습니다.\n");
    printf("고생하셨습니다.\n");

    delete_defdir();
}
