#include "func.h"

void training_linux_defdir(void)
{
    system("clear");
    //리눅스 기본 디렉토리들
    printf("[4. Linux 배포판의 기본 디렉토리들]\n\n");
    printf("\"Linux\"의 디렉토리 또는 파일 시스템 구조는\n");
    printf("\"Windows\"와는 조금 다른 구조로 되어있습니다.\n\n");
    printf("\"Windows\"에서는 '폴더'라고 부르지만, \"Linux\"에서는 '디렉토리'라고 부릅니다.\n");
    next_line();

    printf("\"Linux 시스템\"은 모든 것을 디렉토리 및 파일화 하여 관리합니다.\n\n");
    printf("\"Linux 배포판\"들은 리눅스 파일 시스템 표준인 \"FSSTND(FileSystem STaNDard)\"를 준수하고\n");
    printf("있으므로 기본적인 디렉토리 구조가 비슷합니다.\n\n");
    next_line();
    
    printf("\"FSSTND(FileSystem STaNDard)\"는 1994년 2월에 발표되었으며, 리눅스 뿐만 아니라\n");
    printf("다른 Unix 계열의 운영 체제에서도 일반화하여 추후에 \"FHS\"로 이름이 변경되었습니다.\n\n");
    next_line();
    
    printf("\"FHS\"에서는 다른 물리적 장치에 저장되어 있다고 하더라도 모든 디렉토리가\n");
    printf("루트 디렉토리라고 불리는 ' / '의 밑에 존재하게 되어 있습니다.\n");
    next_line();

    //root Directory
    system("clear");
    printf("[ / ]\n\n");
    printf("\"Linux 배포판들\"에서 가장 중요한 디렉토리로, 모든 디렉토리의 최상위 디렉토리입니다.\n\n");
    
    printf("어떠한 디렉토리 경로를 '절대 경로'로 표기할 때 기준이 되는 디렉토리로서\n");
    printf("모든 디렉토리들은 이 디렉토리로부터 시작하게 됩니다.\n");
    next_line();

    system("clear");
    printf("[ /bin ]\n\n");
    printf("\"Linux 배포판\"에서 기본적인 명령어들의 실행 파일들이 저장되어 있는 디렉토리입니다.\n\n");
    
    printf("\"Linux 시스템\"을 사용하기 위해 꼭 있어야 하고 가장 기본이 되는 명령어들인\n");
    printf("ls, cp, mv, rm 등의 실행 파일들이 이 디렉토리에 존재합니다.\n\n");
    
    printf("'root 사용자'와 '일반 사용자' 모두 사용할 수 있는 디렉토리입니다.\n\n\n");
    next_line();
    
    printf("[ /sbin ]\n\n");
    printf("'ifconfig', 'halt' 등과 같은\n");
    printf("시스템 관리자들이 사용하는 명령어의 실행 파일들이 존재합니다.\n\n");
    printf("오직 'root 사용자'만 실행할 수 있는 실행 파일들입니다.\n");
    next_line();
    
    system("clear");
    printf("[ /boot ]\n\n");
    printf("\"Linux\"를 부팅할 때 이용되는 부트로더가 들어있는 디렉토리입니다.\n\n");
    printf("부팅에 핵심적인 커널 이미지와 부팅 정보 파일을 담고 있는 디렉토리로서\n");
    printf("GRUB과 같은 부팅할 때에 매우 중요한 파일들이 존재합니다.\n\n\n");
    next_line();

    printf("[ /dev ]\n\n");
    printf("'Device'의 약자이며, 물리적인 장치들이 파일화 되어 저장되어 있습니다.\n");
    printf("CD-ROM과 같은 장치 파일들이 존재합니다.\n\n");
    
    printf("한 때는 백도어 파일이 숨겨져 있는 디렉토리로 유명했습니다.\n");
    next_line();

    system("clear");
    printf("[ /etc ]\n\n");
    printf("\"Linux\"에서 대부분의 설정 파일들이 저장되는 디렉토리입니다.\n\n");
    
    printf("시스템 전체에서 사용하는 설정과 비밀번호나 유저 정보들 같은\n");
    printf("중요한 데이터들도 저장됩니다.\n\n");
    next_line();

    printf("[ /home ]\n\n");
    printf("사용자의 홈 디렉토리로, 이 디렉토리 밑에\n");
    printf("대부분 사용자의 ID와 동일한 이름으로 디렉토리가 생성됩니다.\n\n");
    printf("ex) 'rookie'라는 사용자의 홈 디렉토리는 '/home/rookie'와 같이 생성됩니다.\n\n");
    next_line();
    
    printf("[ /lib ]\n\n");
    printf("\"Linux(커널)\"(이)가 필요로 하는 커널 모듈 파일들과 C와 C++ 등으로 작성되어 만들어진\n");
    printf("프로그램들에 필요한 각종 라이브러리 파일들이 존재하는 디렉토리입니다.\n");
    next_line();
    
    system("clear");
    printf("[ /media ]\n\n");
    printf("DVD, CD-ROM, USB 등과 같은 탈부착이 가능한 장치들의\n");
    printf("마운트 포인트로 사용되는 디렉토리입니다.\n\n\n");
    next_line();

    printf("[ /mnt ]\n\n");
    printf("[ /media ] 디렉토리와 비슷한 용도로 탈부착이 가능한 장치들에 대해\n");
    printf("일시적인 마운트 포인트로 사용되는 디렉토리입니다.\n");
    next_line();

    system("clear");
    printf("[ /proc ]\n\n");
    printf("가상 파일 시스템이라고 불리는 디렉토리입니다.\n\n");
    
    printf("각 프로세스 이름에 따라 수 많은 하위 디렉토리들이 존재하고\n");
    printf("현재 실행되는 프로세스에 대한 정보와 데이터가 담겨있습니다.\n\n");
    
    printf("실제 디스크 공간에는 존재하지 않기 때문에 가상 파일 시스템이라고 불립니다.\n\n");
    
    printf("여기에 존재하는 파일들 중에는 현재 실행 중인 커널의 옵션값을\n");
    printf("즉시 변경할 수 있는 파라미터 파일들이 있기 때문에\n");
    printf("시스템 운용에 있어서 매우 중요한 의미를 가집니다.\n");
    next_line();

    system("clear");
    printf("[ /root ]\n\n");
    printf("\"Linux 시스템\"에서 최고 관리자인 'root 사용자'의 개인 홈 디렉토리입니다.\n\n\n");
    next_line();

    printf("[ /tmp ]\n\n");
    printf("공용 디렉토리로 불리며\n");
    printf("시스템을 사용하는 모든 사용자들이 공동으로 사용하는 디렉토리입니다.\n\n");
    
    printf("임시 파일을 저장하는 디렉토리로서 세션 정보 등이 들어 있고\n");
    printf("어떠한 페이지로부터 웹 해킹에 사용되는 파일이 업로드되는 가장 흔한 디렉토리입니다.\n");
    next_line();
    
    system("clear");
    printf("[ /usr ]\n\n");
    printf("시스템이 아닌 일반 사용자들이 주로 사용하는 디렉토리입니다.\n\n");
    
    printf("C++, chsh, cpp, du, find 등과 같이\n");
    printf("일반 사용자들용 명령어들이 \"/usr/bin\" 디렉토리에 저장됩니다.\n\n");
    next_line();
    
    printf("그리고 \"/usr/local\" 디렉토리는 사용자들이 설치한 어플리케이션들이 설치됩니다.\n\n");
    
    printf("또한, \"/usr/sbin\" 디렉토리는 각종 어플리케이션을 설치할 때 생성되는 명령어들과\n");
    printf("네트워크에 관련된 명령어들이 존재합니다.\n\n\n");
    next_line();

    printf("[ /var ]\n\n");
    printf("시스템을 운용할 때 생성되었다가 삭제되는 데이터들을\n");
    printf("일시적으로 저장하는 디렉토리입니다.\n\n");
    
    printf("로그 파일, 데이터베이스 캐싱 파일, 웹 서버 이미지 파일 등이 저장되며\n");
    printf("파일의 크기가 고정적이지 않은 경우 적합한 디렉토리입니다.\n");
    next_line();

    system("clear");
    printf("[ /lost+found ]\n\n");
    printf("최상위 디렉토리인 ' / ' 디렉토리에만 존재하는 것이 아니라\n");
    printf("파일 시스템마다 존재할 수 있는 디렉토리입니다.\n\n");
    
    printf("파일 시스템 체크 및 복구 유틸리티 실행 후에 주로 생성되는 것으로\n\n");
    
    printf("복구되지 않은 채로 블록만 존재하는 파일이나\n");
    printf("연결이 끊어진 inode들이 숫자 파일 형태로 존재합니다.\n");
    next_line();
}
