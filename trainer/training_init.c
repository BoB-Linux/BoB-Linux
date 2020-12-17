#include "func.h"

void training_init(void)
{
	system("clear");
    create_defdir();
	//////////////////////////////////////////////////////////////////////////////////////////////////////

    printf("이번에 학습할 명령어는 \"init\" 입니다.\n\n");

    printf("\"init\" 명령어는 런레벨(RunLevel)을 변경하는 명령어입니다.\n");
    next_line();
    
    printf("\"init\" 명령어의 실행 파일은 \"/usr/sbin/init\"(으)로 있습니다.\n");
    next_line();

    printf("유닉스 기반의 운영 체제에서 \"init\"(은)는 시스템의 부팅 과정 중 최초의 프로세스이고\n");
    printf("시스템이 종료될 때까지 계속 실행하는 데몬 프로세스 입니다.\n");
    next_line();

    printf("다른 모든 프로세스의 직접적 또는 간접적인 부모 프로세스이며\n");
    printf("자동으로 고아 프로세스들을 입양합니다.\n\n");
    printf("즉, \"init\" 최초로 프로세스가 실행되고\n");
    printf("\"init\"(이)가 다른 프로세스를 시작하는 구조입니다.\n\n");
    next_line();

    printf("[런레벨이란?]\n");
    printf("리눅스의 부팅 모드로 최대 8가지 런레벨이 존재하며,\n");
    printf("일반적으로 0에서 6까지의 총 7가지 런레벨을 사용합니다.\n");
    next_line();

    system("clear");
    printf("[각 런레벨 별 의미]\n\n\n");
    printf("[RunLevel 0 (Power Off)]\n시스템 종료 모드입니다.\n");
    printf("해당 런레벨로 바꾸면 시스템이 종료됩니다.\n\n");
    next_line();

    printf("[RunLevel 1 (Resuce)]\n텍스트(CLI) 단일 사용자 모드입니다.\n");
    printf("시스템 복구를 위해 사용되며, 관리자 쉘을 사용합니다.\n\n");
    next_line();
    
    printf("[RunLevel 2 (Multi-User)]\n네트워크를 사용하지 않는 텍스트(CLI) 다중 사용자 모드입니다.\n");
    printf("현재는 사용하지 않으며, 호환성을 위해 런레벨 3과 동일하게 취급됩니다.\n\n");
    next_line();

    printf("[RunLevel 3 (Full Multi-User)]\n텍스트(CLI) 다중 사용자 모드입니다.\n");
    printf("일반적으로 텍스트 유저 모드라고 부르면 해당 런레벨을 의미합니다.\n\n");
    next_line();

    printf("[RunLevel 4 (Multi-User(unused))]\n사용하지 않는 다중 사용자 모드입니다.\n");
    printf("호환성을 위해 런레벨 3과 동일하게 취급됩니다.\n\n");
    next_line();

    printf("[RunLevel 5 (Graphical)]\n그래픽(GUI) 다중 사용자 모드입니다.\n");
    printf("기본적으로 런레벨 3과 동일하며, 그래픽을 제공한다는 점에서 차이가 있습니다.\n\n");
    next_line();

    printf("[RunLevel 6 (Reboot)]\n시스템 재부팅 모드입니다.\n");
    printf("해당 런레벨로 바꾸면 시스템이 재부팅됩니다.\n\n\n");
    next_line();

    printf("[주요 런레벨 정리]\n\n");
    printf("[0 (시스템 종료)]\n");
    printf("[6 (시스템 재부팅)]\n\n");
    printf("[3 (CLI 다중 사용자)]\n");
    printf("[5 (GUI 다중 사용자)]\n\n\n");
    next_line();
    
    printf("[실습] 런레벨을 '0'으로 바꿔보세요. (실제 시스템에 반영되지는 않습니다.)\n");
    printf("사용법 : init [런 레벨 숫자]\n");
    nothing_print_fake_run_command("init 0");

    printf("\n\n잘 하셨습니다!\n");
    printf("위의 실습처럼 런 레벨로 시스템을 제어할 수 있습니다.\n");
    next_line();
    
    printf("현재 런레벨을 확인하는 방법으로 'runlevel' 명령어와 'who -r' 명령어가 있으며\n");
    printf("시스템을 종료하는 명령어로는 'shutdown', 'half', 'reboot' 명령어가 있습니다.\n");
    next_line();

    printf("참고) \"init\"(은)는 한계가 있었기 때문에 이를 보완하여 나온 것이 \"systemd\" 입니다.\n");
    next_line();

    printf("하지만, \"systemd\"가 \"init\"보다 장점은 많아도 완벽하다고는 할 수 없습니다.\n");
    next_line();

    printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
    printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
    printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
    next_line();

    printf("\"init\" 명령어의 학습이 끝났습니다.\n");
    printf("고생하셨습니다.\n");

    delete_defdir();
}
