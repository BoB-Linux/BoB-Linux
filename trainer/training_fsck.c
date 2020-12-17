#include "func.h"

void training_fsck(void){
    system("clear");
    create_defdir();

    printf("이번에 배울 명령어는 \"fsck\"입니다.\n\n");

    printf("\"fsck\" 명령어는 'Filesystem Check'의 약자이며\n");
    printf("리눅스 파일 시스템을 검사하고 수리하는 명령어입니다.\n");
    next_line();

    printf("\"fsck\" 명령어의 실행 파일은 \"/usr/sbin/fsck\"(으)로 있습니다.\n");
    next_line();

    printf("사용법은 \"fsck [옵션] [파일시스템 또는 디스크 디바이스]\" 입니다.\n");
    printf("ex) fsck -y /dev/sdc1\n");
    next_line();

    printf("리눅스는 부팅할 때 자동으로 파일 시스템을 검사합니다.\n");
    printf("손상된 부분이 있다면 자동으로 복구도 해줍니다.\n");
    next_line();

    printf("하지만 리눅스 서버를 운영하는 사람들에게는\n");
    printf("비상사태가 발생 했을 때 복구하는 것이 중요합니다.\n");
    next_line();

    printf("\"fsck\" 명령어의 확장된 명령어로는 \"e2fsck\"가 있습니다.\n");
    printf("현재 리눅스 배포판에서 \"fsck\" 명령어을 실행하면 \"e2fsck\" 명령어가 실행이 됩니다.\n");
    next_line();

    printf("\"fsck\" 명령어는 손상된 디렉토리나 파일을 수정할 때\n");
    printf("임시적으로 '/lost+found' 디렉토리에서 작업을 수행하고 복구가 되면 사라지게 됩니다.\n\n");
    next_line();

    printf("파일 시스템 검사 절차는 다음과 같습니다.\n\n");
    printf(" 단계 1  : 블록들과 파일 크기를 검사합니다.\n\n");
    printf(" 단계 2a : 중복된 이름이 있는지 검사합니다.\n\n");
    printf(" 단계 2b : 경로 이름을 검사합니다.\n\n");
    printf(" 단계 3  : 연결성을 검사합니다.\n\n");
    printf(" 단계 4  : 참조 수를 검사합니다.\n\n");
    printf(" 단계 5  : 싸이클 그룹을 검사합니다.\n\n\n");
    next_line();

    printf("\"fsck\" 또는 \"e2fsck\" 명령으로 검사하거나 수리할 파티션은 마운트가 된 상태면 안됩니다.\n");
    next_line();

    printf("반드시 \"umount\" 명령어 등으로 마운트를 해제하고 수행해주어야 합니다.\n");
    next_line();

    printf("기본적으로 'fsck [파티션 경로]' 와 같은 형식으로 사용합니다.\n\n");
    next_line();

    printf("[실습] \"fsck\" 명령어로 '/dev/sdb1' 파티션을 검사해보세요.\n");
    printf("(실제 시스템에는 반영되지 않습니다.)\n");
    printf("사용법 : fsck [파일 시스템 혹은 디스크 디바이스]\n");
    fake_run_command("fsck /dev/sdb1");
    next_line();

    printf("\n위에서 실습했던 명령어로 파티션을 검사할 수 있습니다.\n");
    next_line();

    system("clear");
    printf("\"fsck\" 명령어의 옵션은 다음과 같습니다.\n\n");
    printf("  [ -A ]\n");
    printf("일반적으로 /etc/fstab에 나와있는 파일 시스템들을 검사하고\n");
    printf("/etc/rc 시스템 초기화 파일에서 일관적으로 검사합니다.\n\n");
    printf("  [ -R ]\n");
    printf("'-A' 옵션과 같이 사용하면 루트 파일 시스템을 제외한 모든 파일 시스템을 점검합니다.\n\n");
    printf("  [ -T ]\n");
    printf("검사할 때 제목을 보여주지 않습니다.\n\n");
    printf("  [ -N ]\n");
    printf("실제로 실행은 하지 않고, 어던 작업을 할 것인지만 보여줍니다.\n\n");
    printf("  [ -V ]\n");
    printf("실행되는 각 파일 시스템용 명령을 포함하여 자세히 출력해줍니다.\n\n");
    next_line();

    system("clear");
    printf("  [-s]\n\"fsck\"의 동작을 시리얼화 하기 때문에\n대화형 모드에서 여러 파일 시스템을 점검할 때 유용합니다.\n\n");
    printf("  [-t]\n점검할 파일 시스템을 지정합니다.\n파일 시스템 앞에 no를 붙이면 지정한 파일 시스템을 제외하고 나머지를 모두 점검합니다.\n\n");
    printf("  [-a]\n 사용자에게 물어보지 않고 자동으로 복구합니다.\n\n");
    printf("  [-r]\n파일 시스템 복구 전에 복구 여부를 붇습니다.\n(병렬로 작동할 때는 권장하지 않습니다.\n\n");
    next_line();

    printf("\n\n\n위에서 언급된 \"e2fsck\" 명령어의 경우도 \"fsck\"와 사용법은 같습니다.\n");
    next_line();

    system("clear");
    printf("다음은 \"fsck\"의 확장된 명령어인 \"e2fsck\"의 옵션입니다.\n\n\n");
    printf("   [ -v ] : 점검 내역을 자세하게 출력해줍니다.\n\n");
    printf("   [ -y ] : 모든 응답을 다 yes를 해서 자동으로 점검, 수리를 수행합니다.\n\n");
    printf("   [ -n ] : 모든 응답을 다 no를 해서 점검만 수행합니다.\n\n");
    printf("   [ -f ] : 파일 시스템 이상 유무와 관계없이 강제로 점검을 합니다.\n\n");
    printf("   [ -p ] : 파일 시스템을 검사하면서 자동으로 복구도 해줍니다.\n\n");
    printf("   [ -c ] : BAD BLOCK을 체크합니다.\n\n");
    next_line();

    system("clear");
    printf("이번 트레이닝에서는 간단한 실습 한 가지를 해보고 옵션을 위주로 봤습니다.\n");
    next_line();

    printf("리눅스를 사용하다 보면 파일 시스템과 관련하여 공부하시거나\n");
    printf("관련된 명령어를 이용하실 일이 많습니다.\n");
    next_line();

    printf("가상 머신을 이용하여 리눅스 환경을 구축하고\n");
    printf("파일 시스템과 관련된 실습을 많이 하여 숙지하시길 바랍니다.\n");
    next_line();
    
    printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
    printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
    printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
    next_line();

    printf("\"fsck\" 명령어의 학습이 끝났습니다.\n");
    printf("고생하셨습니다.\n");

    delete_defdir();
}
