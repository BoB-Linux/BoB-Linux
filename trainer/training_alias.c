#include "func.h"

void training_alias(void)
{
    create_defdir();

    system("touch file1.txt");
    system("touch file2.txt");

    system("clear");
    printf("이번에 학습할 것은 Shell의 \"alias\" 기능입니다.\n\n");

    printf("\"alias\" 명령어는 \"별명\" 이란 뜻이고\n");
    printf("\"alias\"를 이용해 지정한 \"별명\"을 입력하면 별명에 해당하는 명령어가 실행됩니다.\n");
    next_line();
    
    printf("사용법은 \"alias [별명]='[별명이 입력됐을 때 실행될 명령어]'\" 입니다.\n");
    printf("ex)alias ls='ls --color=auto'\n");
    next_line();
    
    printf("\"alias\" 명령어의 사용법을 보시면\n");
    printf("[별명이 입력됐을 때 실행될 명령어] 부분이 작은 따옴표로 감싸져있습니다.\n");
    next_line();
    
    printf("\"alias\" 명령어의 특징은 나중에 반복될 긴 명령어를\n");
    printf("사용자가 지정한 \"별명\"을 입력하여 실행함으로써 시간과 귀찮음을 덜어줍니다.\n");
    next_line();
    
    printf("기본적으로 이미 \"alias\" 명령어로 \"별명\"이 지정된 명령어가 몇 개 있을 수 있습니다.\n\n");
    next_line();
    
    printf("[실습] \"alias\"라고 입력하여 이미 지정된 명령어들이 있는지 확인해보세요.\n");
    nothing_print_fake_run_command("alias");
    printf("ls='ls --color=auto'\n");
    printf("l='ls -lah'\n");

    printf("\n\n위에 보이시는 것들이 사용자가 지정하기 전에 이미 지정되어 있는 것들입니다.\n");
    printf("(아무것도 없다면 아직 설정된 별명이 없는 것입니다.)\n");
    next_line();
    
    printf("저희가 사용하는 \"ls\" 명령어가 \"별명\"이었다는 것을 알게 되었습니다.\n");
    printf("\"ls\"라고 입력하면 \"ls --color=auto\" 명령어가 실행되었던 것입니다.\n\n");
    next_line();
    
    printf("[실습] \"alias ls='ls -al'\"을 입력해보세요.\n");
    printf("사용법 : alias [별명]='[실행될 명령어]'\n");
    fake_run_command("alias ls='ls -al'");
    system("alias ls='ls -al'");
    
    printf("\n\n이제 명령어가 잘 지정되었는지 확인해보겠습니다.\n\n");
    next_line();
    
    printf("[실습] \"ls\"를 입력해보세요.\n");
    fake_run_command("ls");
    system("ls -al");
    
    printf("\n\n잘 따라오셨다면, 그냥 \"ls\" 명령어를 입력했을 때와는 다르게\n");
    printf("\"ls -al\" 명령어를 입력했을 때의 결과가 보일 것입니다.\n");
    next_line();
    
    printf("특정 단어가 별명인지 아닌지\n");
    printf("만약 별명이라면 어떤 명령어가 실행되게 설정되어 있는지 보고 싶다면\n\n");
    printf("\"alias [궁금한 별명 혹은 명령어명]\"을 입력해보시면 됩니다.\n");
    next_line();
    
    printf("예를 들어 기초 명령어에서 배웠던 \"whoami\"는 별명인지 명령어인지 확인해보겠습니다.\n\n");
    next_line();
    
    printf("[실습] \"alias whoami\"을 입력하여 \"whoami\"가 별명인지 명령어인지 확인해보세요.\n");
    printf("사용법 : alias [별명 혹은 명령어명]\n");
    just_run_command("alias whoami");
    
    printf("\n\n잘 입력하셨다면 다음과 같은 형태의 결과가 출력되었을 것입니다.\n");
    printf("\"alias: whoami: not found\"\n");
    next_line();
    
    printf("\n\"whoami\"를 입력했을 때 실행될 명령어가 설정되어 있지 않기 때문에\n");
    printf("\"whoami\"(은)는 별명이 아니었습니다.\n");
    next_line();
    
    printf("이번에는 사용자가 직접 \"mkfile\"(이)라는 별명을 만들어 보겠습니다.\n");
    next_line();
    
    printf("\"mkfile\"은 파일을 만들어주는 명령어를 실행할 \"make a file\"라는 뜻의 별명입니다.\n\n");
    next_line();
    
    printf("[실습] \"alias mkfile='touch'\"를 입력하여\n");
    printf("'mkfile'을 입력시 \"touch\" 명령어가 실행되게 해보세요.\n");
    printf("사용법 : alias [별명]='[실행될 명령어]'\n");
    fake_run_command("alias mkfile='touch'");
    system("alias mkfile=\'touch\'");
    
    printf("\n\n이제 \"mkfile\" 별명을 이용하여 파일을 생성할 수 있을 것입니다.\n\n");
    next_line();
    
    printf("[실습] \"mkfile test1\"을(를) 입력하여 'test1' 파일을 만들어보세요.\n");
    fake_run_command("mkfile test1");
    system("touch test1");
    
    printf("\n이제 'test1' 파일이 만들어졌을 것입니다.\n\n");
    next_line();
    
    printf("\"ls\" 명령어를 이용하여 'test1' 파일이 만들어졌는지 확인해보세요.\n");
    nothing_print_fake_run_command("ls");
    system("ls -al");
    
    printf("\n잘 따라오셨다면, \"mkfile\" 별명을 지정하고\n");
    printf("\"mkfile\" 별명을 통해 파일을 만들고, 만들어진 파일을 확인할 수 있을 것입니다.\n");
    next_line();
    
    printf("이번에는 지정했던 \"별명\"을 없애는 명령어를 배우고 실습해보겠습니다.\n");
    next_line();
    
    printf("\"unalias\" 명령어는 \"alias\" 명령어로 지정한 별명을 지워줍니다.\n");
    next_line();
    
    printf("\"unalias\" 명령어의 사용법은 간단합니다.\n");
    next_line();
    
    printf("\"unalias [제거할 별명]\"라고 입력하시면 해당 \"별명\"에 대한 설정이 지워집니다.\n\n");
    printf("ex)unalias ls\n");
    next_line();
    
    printf("[실습] 앞에서 지정했던 \"mkfile\" 별명을 제거해보세요.\n");
    printf("사용법 : unalias [제거할 별명]\n");
    fake_run_command("unalias mkfile");
    
    printf("\n\n이제 \"mkfile\" 이라는 별명을 제거되었을 것입니다.\n");
    next_line();
    
    printf("잘 제거가 되었는지 확인하기 위해 \"mkfile test2\"를 입력해보세요.\n");
    just_run_command("mkfile test2");
    
    printf("\n\n\"mkfile\" 별명이 잘 제거 되었다면 다음과 같은 형태의 결과가 출력될 것입니다.\n\n");
    printf("\"mkfile: not found\"\n");
    next_line();
    
    system("clear");
    printf("이렇게 \"alias\" 명령어를 이용하여 별명을 지정해보고\n");
    printf("별명을 입력하면 지정된 명령어가 실행되게 해보았습니다.\n");
    next_line();
    
    printf("또한 \"unalias\" 명령어를 이용하여 지정된 별명을 제거해보았습니다.\n");
    next_line();
    
    printf("하지만 이렇게 콘솔이나 터미널에서 \"alias\" 명령어를 이용하여 별명을 지정했을 때\n");
    printf("해당 콘솔이나 터미널을 닫으면 설정했던 별명은 사라집니다.\n");
    next_line();
    
    printf("설정한 별명을 계속 사용하려면\n");
    printf("\"~/.bashrc\" 파일 맨 마지막 줄 뒤에 혹은\n");
    printf("\"~/.bash_profile\" 파일에 \"alias\" 명령어 구문을 적어주시면 됩니다.\n");
    next_line();
    
    printf("\".bashrc\"와 \".bash_profile\" 파일은 앞에 ' . ' 이 붙어있는 파일로\n");
    printf("기본적으로 숨긴 파일입니다.\n");
    next_line();
    
    printf("위의 두 파일의 차이점은 새로운 터미널 창을 켤 때마다 실행하는 것(.bashrc)과\n");
    printf("\"bash\"로 로그인할 때만 실행되는 것(.bash_profile)입니다.\n\n");
    printf("그러므로 \"~/.bashrc\" 파일이나\n");
    printf("자신이 사용하는 Shell의 이름 뒤에 'rc'가 붙은 파일에 저장하는 것을 추천드립니다.\n");
    next_line();
    
    printf("추후 리눅스 시스템에서 \"alias\" 명령어를 이용하여 별명을 지정한 명령어 구문을\n");
    printf("\"~/.bashrc\" 혹은 \"~/.bash_profile\" 파일에 저장하고 시스템을 재부팅하여 사용해보세요.\n");
    next_line();
    
    printf("\"alias\" 명령어는 사용자를 편하게 해주는 명령어이므로\n");
    printf("꼭 숙지하시어 명령어를 편하게 사용하세요.\n");
    next_line();
    
    printf("\"alias\"와 \"unalias\" 기능의 학습이 끝났습니다.\n");
    printf("고생하셨습니다.\n");

    delete_defdir();
}
