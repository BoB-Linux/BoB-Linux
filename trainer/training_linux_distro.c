#include "func.h"

void training_linux_distro(void)
{
    system("clear");
    //리눅스 배포판 종류
    printf("[2. 리눅스 배포판과 종류]\n\n");
    printf("\"Linux 배포판\"은 'Linux'라는 커널에 여러 자유 소프트웨어들과\n");
    printf("라이브러리들을 포함하여 만들어진 운영 체제 입니다.\n\n");
    next_line();

    printf("\"Windows\" 운영 체제에는 '95', 'xp', '7', '10' (와)과 같이 여러 버전이 있습니다.\n\n");
    printf("\"Linux\"도 \"Windows\"처럼 여러 버전이 존재하는데\n");
    printf("운영 체제의 핵심인 '커널'과 다수의 소프트웨어들의 코드가 공개되어 있어서\n\n");
    
    printf("수 많은 사용자들이 자신이 사용할 목적이나 연구를 위해\n");
    printf("변형하거나 수정하여 배포하기 때문에\n");
    next_line();
    
    printf("\"Windows\"보다 몇 배 이상 많은 버전이 존재하고\n");
    printf("이 버전들을 \"리눅스 배포판\" 이라고 합니다.\n\n\n");
    next_line();

    system("clear");
    printf("\"Linux 배포판\"을 크게 3가지 계열로 나누자면 다음과 같습니다.\n\n");
    printf("1. \"Slackware(슬랙웨어)\" 계열\n");
    printf("2. \"Debian(데비안)\" 계열\n");
    printf("3. \"RedHat(레드햇)\" 계열\n");
    next_line();

    printf("위의 3가지 리눅스 배포판 계열를 제외하고도 여러가지가 있지만\n");
    printf("그 중 가장 최초의 리눅스 배포판은 \"SLS(Softlanding Linux System)\" 입니다.\n");
    next_line();

    system("clear");
    //SLS
    printf("[SLS(Softlanding Linux System)]\n\n");
    printf("1992년 5월에 '피터 맥도날드'에 의해 만들어진 초기 리눅스 배포판입니다.\n\n\n");
    printf("\"SLS\"(은)는 한 때 가장 유명한 리눅스 배포판이었지만, 버그가 많은 배포판이었습니다.\n");
    next_line();
    
    system("clear");
    //slackware
    printf("[Slackware]\n\n");
    printf("\"Slackware\"는 '패트릭 볼커딩'이 \"SLS\"에 존재하는 버그들을 잡기 시작하고\n");
    printf("이 결과로 만들어진 배포판이며, 현재까지도 살아있는 가장 오래된 배포판입니다.\n\n\n");
    
    printf("\"Slackware\"는 \"가장 Unix다운 리눅스 배포판\"이라는 목적에 따라\n");
    printf("사용자에게 시스템의 권한을 최대한 넘겨주었고\n");
    printf("그리하여 사용자가 의도하지 않는 결과는 거의 일어나지 않습니다.\n\n\n");
    next_line();
    
    printf("하지만, Unix와 비슷하게 만든다는 목적으로 인해\n");
    printf("사용자들이 불편을 감수해야 하는 것들이 있습니다.\n\n");
    
    printf("그 중 하나는 프로그램을 설치할 때\n");
    printf("설치에 필요한 것들을 자동으로 처리해주지 않는다는 것입니다.\n\n\n");
    
    printf("\"SlwackWare\" 계열의 배포판에는\n");
    printf("\"SuSE\", \"Porteus\", \"Vector Linux\", \"Slackintosh\" 등이 있습니다.\n");
    next_line();
    
    system("clear");
    //Debian
    printf("[Debian]\n\n");
    printf("\"Debian\"은 \"Slackware\" 다음으로 오래된 배포판이며\n");
    printf("인기가 많고 영향력이 있는 배포판입니다.\n\n\n");
    
    printf("현재는 \"Debian GNU/Linux\"만 정식 지원하고\n");
    printf("'GNU 프로젝트'의 지원을 받아 '데비안 프로젝트'라는 공동체에서 개발하고 있습니다.\n\n");
    next_line();
    
    printf("\"Debian\"은 안정성과 보안에 중점을 두어 개발되고 있으며\n");
    printf("\"RedHat\"과는 달리 오픈 소스쪽에 가깝습니다.\n\n\n");
    
    printf("\"Debian\" 계열의 배포판에는\n");
    printf("\"Ubuntu\", \"Kubuntu\", \"Lindows\", \"Backtrack\" 등이 있습니다.\n");
    next_line();
    
    system("clear");
    //RedHat
    printf("[RedHat]\n\n");
    
    printf("\"RedHat\"은 기업용 서버 운영 체제로 가장 인기 있으며\n");
    printf("\"RedHat 리눅스\"는 유료 버전과 무료 버전 둘 다 배포했었지만\n\n");
    
    printf("현재 \"RedHat 리눅스\"의 의미는 상용으로 판매되는\n");
    printf("'RHEL(RedHat Enterprise Linux)'만을 의미합니다.\n\n");
    next_line();
    
    printf("\"RedHat\" 계열의 리눅스 중에는 유명한 \"Fedora\"와 \"CentOS\"가 있습니다.\n\n");
    next_line();
    
    printf("\"Fedora\"는 기존의 'RedHat 리눅스'의 무료 버전 배포를 중단하고\n");
    printf("이름을 \"Fedora\"로 바꾼 것입니다.\n\n");
    
    printf("\"Fedora\"는 기업용 리눅스인 \"RHEL\"에 들어갈 기능들을\n");
    printf("테스트 하는 용도로 사용되고 있으며, 개발자들에게 주로 쓰이는 운영 체제 입니다.\n\n");
    
    printf("\"Centos\"는 'The Community ENTerprise Operating System'의 약자이며\n");
    printf("\"RHEL\"과 완전히 호환되는 기업용 무료 리눅스 운영 체제입니다.\n");
    next_line();
    
    printf("\"RHEL\"을 무료로 바꾼 배포판이라고 자주 언급되며\n");
    printf("중소 기업이나 개인적인 서버로 사용하기 좋습니다.\n\n");
    
    printf("\"RedHat\" 계열의 배포판에는\n");
    printf("\"Oracle Enterprise\", \"AsianLinux\", \"OpenNode\" 등이 있습니다.\n");
    next_line();
    
    system("clear");
    printf("이렇게 큰 뿌리를 맡고 있는 리눅스 배포판 계열 3가지에 대해 배웠습니다.\n\n");
    printf("하지만, 위의 3가지는 리눅스 배포판들을 큰 계열로 나눈 것이며\n\n");
    
    
    printf("리눅스 배포판들은 수도 없이 많고\n");
    printf("현재도 많은 사용자들이 변형하여 사용하거나 배포하고 있습니다.\n\n");
    next_line();
    
    printf("그리고 사용자들에게 많이 사용되는 배포판은\n");
    printf("\"Ubuntu\", \"kali linux\", \"Jentoo Linux\" 등이 있습니다.\n\n");
    
    printf("더 많은 리눅스 배포판들을 확인해보고 싶다면\n");
    printf("아래의 링크로 접속하여 확인해보시면 됩니다.\n\n");
    printf("http://futurist.se/gldt/\n");
    next_line();
}
