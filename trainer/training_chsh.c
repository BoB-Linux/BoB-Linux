#include "func.h"

void training_chsh(void)
{
    create_defdir();

    system("clear");

    printf("이번에 학습할 명령어는 \"chsh\" 입니다.\n\n");

    printf("\"chsh\" 명령어는 Change Shell의 약자이며, 사용자의 Shell을 바꿔주는 명령어입니다.\n");
    next_line();

    printf("\"chsh\" 명령어의 실행 파일은 \"usr/bin/chsh\"(으)로 있습니다.\n");
    next_line();

    printf("\"chsh\" 명령어로 바꿀 수 있는 Shell은 \"/etc/shells\" 파일에 적혀있는\n");
    printf("Shell만 변경할 수 있습니다.\n");
    next_line();

    printf("사용법은 \"chsh [옵션] [계정명]\" 입니다.\n");
    printf("ex)chsh -s /bin/bash user1\n\n");
    next_line();

    printf("먼저, Shell(쉘)이란\n");
    printf("사용자가 콘솔로 로그인하거나 터미널을 실행했을 때 자동으로 실행되는 것이고\n");
    printf("콘솔이나 터미널에서 사용자가 문자를 입력하여 명령을 내리면\n");
    printf("그 명령을 해석하고 실행해줍니다.\n");
    next_line();

    printf("일종의 사용자가 내리는 명령을 시스템이 수행할 수 있도록\n");
    printf("중간에서 브로커 같은 역할을 하는 비서입니다.\n");
    next_line();

    printf("리눅스 시스템에서 터미널을 켜면 아래와 같이 보이는데\n\n");
    printf("사용자이름@디바이스이름:~$\n");
    printf("ex)ubuntu@localhost:~$\n");
    next_line();

    printf("이것을 '프롬프트'라고 부르며\n");
    printf("Shell이 사용자가 명령을 입력하길 기다리고 있는 상태입니다.\n\n");
    next_line();

    printf("[실습] 현재 사용자가 어떤 Shell을 사용 중인지 확인하기 위해\n");
    printf("\"cat /etc/passwd\"라고 입력해보세요.\n");
    just_run_command("cat /etc/passwd");

    printf("\n\n위에 출력값 중 맨 왼쪽에 자신의 계정 이름인\n");
    printf("\"%s\"이(가) 적힌 부분을 찾아 맨 오른쪽을 보시면\n", getlogin());
    printf("\"/bin/bash\" 혹은 자신이 사용 중인 Shell이 적혀 있을 것입니다.\n");
    next_line();

    printf("\"bash\"는 여러 Shell 중에 하나이고, \"Bourne Again Shell\"의 약자이며\n");
    printf("초기의 유닉스 쉘인 \"sh\"(와)과 대부분 호환되고\n");
    printf("현재 리눅스 배포판 대부분의 기본적인 쉘입니다.\n");
    next_line();

    printf("Shell은 bash 말고도 \"csh\", \"ksh\", \"sh\", \"tcsh\", \"zsh\", \"dash\" 등이 있습니다.\n");
    next_line();

    printf("사용자가 사용 중인 Shell을 보는 방법은\n");
    printf("\"cat\" 명령어로\"/etc/passwd\" 파일을 보는 방법도 있지만\n\n");
    printf("\"echo $SHELL\" 명령어를 입력하여 환경 변수를 통해 확인하는 방법도 있습니다.\n\n");
    next_line();

    printf("[실습] 한 번 \"echo $SHELL\"을 입력하여 현재 사용 중인 Shell을 확인해보세요\n");
    just_run_command("echo $SHELL");
    next_line();

    printf("\n잘 따라하셨다면 \"/bin/bash\" 혹은 현재 사용자가 사용 중인 Shell이 출력되었을 것입니다.\n");
    next_line();

    printf("Shell은 'root' 디렉토리 밑에 'bin' 디렉토리 밑에 있기 때문에\n");
    printf("\"/bin\" 디렉토리 밑에 가보시면 됩니다.\n");
    next_line();

    printf("저희는 \"/bin\" 디렉토리로 가지 않고 \"ls\" 명령어를 이용하여 확인해보겠습니다.\n\n");
    next_line();

    printf("[실습] \"ls /bin/*sh\"라고 입력해보세요.\n");
    just_run_command("ls /bin/*sh");

    printf("\n\n위에 \"sh\" 텍스트를 포함한 파일과 기본으로 설치 되어있는 Shell들이 보일 것입니다.\n");
    next_line();

    printf("다른 Shell을 사용하실려면 콘솔 혹은 터미널에서 설치되어 있는 Shell들 중에서\n");
    printf("사용하고 싶은 Shell의 이름을 입력하시거나\n");
    next_line();

    printf("\"chsh -s [Shell의 경로]\" 명령어를 이용하여 Shell을 변경할 수 있습니다.\n");
    printf("ex)\"bash\" 혹은 \"chsh -s /bin/bash\"\n");
    next_line();

    printf("하지만 사용하고 싶은 Shell의 이름을 입력해서 사용하시면\n");
    printf("지금 바로 Shell이 바뀌지만, 로그아웃을 했다가 로그인하면 원래 Shell로 돌아옵니다.\n");
    next_line();

    printf("반면에 \"chsh\" 명령어로 Shell을 변경하시면\n");
    printf("다음 로그인 때부터 적용되지만, 로그아웃을 했다가 로그인 해도 되돌아가지 않습니다.\n");
    next_line();

    printf("\"chsh\" 명령어는 바꾸고자 하는 Shell이\n");
    printf("\"/etc/shells\" 파일에 적혀있어야 변경이 가능합니다.\n\n");
    next_line();

    printf("[실습] \"cat /etc/shells\"라고 입력하여 현재 바꿀 수 있는 Shell들을 확인해보세요.\n");
    just_run_command("cat /etc/shells");

    printf("\n\n위에 보이는 것들이 현재 \"/etc/shells\" 파일에 저장되어 있어서\n");
    printf("사용자가 변경 가능한 Shell들 입니다.\n");
    next_line();

    printf("\"chsh\"는 시스템의 Shell을 변경하는 것이기 때문에\n");
    printf("사용자의 암호를 필요로 합니다.\n\n");
    next_line();

    printf("[실습] \"chsh\" 명령어와 '-s' 옵션을 이용하여\n");
    printf("위에 현재 변경 가능한 Shell들 중 \"/bin/sh\"으로 변경해보세요.\n");
    printf("사용법 : chsh [옵션] [변경하고 싶은 Shell]\n");
    just_run_command("chsh -s /bin/sh");

    printf("\n\n올바르게 입력하셨다면 기존의 Shell에서 \"/bin/sh\"로 변경 되었을 것입니다.\n\n");
    next_line();

    printf("\"[실습] cat /etc/passwd\"를 입력하여 자신의 Shell을 확인해보세요.\n");
    just_run_command("cat /etc/passwd");

    printf("\n\n자신의 계정 이름을 찾아 맨 오른쪽을 보시면\n");
    printf("'/bin/sh'라고 적힌 걸 확인하실 수 있을 것입니다.\n\n");
    next_line();

    printf("[실습] 하지만 \"echo $SHELL\"이라고 명령어를 입력해서 확인해보세요.\n");
    just_run_command("echo $SHELL");

    printf("\n\n아직 Shell이 \"/bin/sh\"로 바뀌지 않은 것을 보실 수 있습니다.\n");
    next_line();

    printf("그 이유는 아까 말했듯이 \"chsh\" 명령어로 바꾸면\n");
    printf("한 번 로그아웃 후 다시 로그인을 해야 적용된다는 번거로움이 있지만\n");
    printf("다시 바꿔주기 전에는 원래 Shell로 돌아가지 않는다라는 장점이 있습니다.\n\n");
    next_line();

    printf("[실습] 이번에는 \"chsh -s /bin/bash\"(을)를 입력하여 Shell을 되돌려보세요.\n");
    just_run_command("chsh -s /bin/bash");

    printf("\n\n이제 다시 bash shell로 되돌아왔습니다.\n");
    next_line();

    printf("\"chsh\" 명령어의 옵션은\n");
    printf("[ -s (--shell) ](와)과 [-R (--root) ](이)가 있지만 '-s'만 알아둬도 됩니다.\n");
    next_line();

    printf("지금까지 \"chsh\" 명령어와 \"chsh\"를 이용하여\n");
    printf("사용자의 Shell을 바꿔보는 것을 배워보았습니다.\n");
    next_line();

    printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
    printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
    printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
    next_line();

    printf("\"chsh\" 명령어의 학습이 끝났습니다.\n");
    printf("고생하셨습니다.\n");

    delete_defdir();
}
