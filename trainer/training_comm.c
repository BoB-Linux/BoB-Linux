#include "func.h"

void training_comm(void)
{
    create_defdir();

    system("clear");
    
    printf("이번에 학습할 명령어는 \"comm\" 입니다.\n\n");
    
    printf("\"comm\" 명령어는 2개의 파일을 비교하는 명령어이며\n");
    printf("또 다른 파일 비교 명령어 \"diff\"와는 다르게 \"동일 행끼리만 단순 비교\" 합니다.\n");
    next_line();
    
    printf("\"comm\" 명령어의 실행 파일은 \"/usr/bin/comm\"(으)로 있습니다.\n");
    next_line();
    
    printf("사용법은 \"comm [옵션] [비교할 파일1] [비교할 파일2]\"입니다.\n");
    printf("ex)comm file1 file2\n");
    next_line();
    
    printf("먼저 실습에 필요한 파일을 만들어 내용을 입력하도록 하겠습니다.\n");
    next_line();
    
    printf("파일 두 개를 만들어 두는데, 서로 내용을 다르게 할 것입니다.\n");
    next_line();
    
    printf("[실습] \"cat > test1\"을 입력하여 아래의 내용을 바로 입력하시고\n");
    printf("Ctrl + d키로 저장하세요.\n\n");
    printf("one\ntwo\nthree\nfour\nfive\n");
    just_run_command("cat > test1");
    
    printf("\n실습에 필요한 파일 한 개가 만들어졌습니다.\n\n");
    next_line();
    
    printf("[실습] \"cat > test2\"을(를) 입력하여 아래의 내용을 바로 입력하시고\n");
    printf("Ctrl + d키로 저장하세요.\n\n");
    printf("one\ntwo\nthree\nfour\nsix\nseven\n");
    just_run_command("cat > test2");
    
    printf("\n\n이제 실습에 필요한 파일 두 개 모두 만들어졌습니다.\n\n");
    next_line();
    
    printf("[실습] \"ls\"를 입력하여 파일 두 개가 잘 만들어졌는지 확인해봅니다.\n");
    just_run_command("ls");
    
    printf("\n\n'test1' 파일과 'test2' 파일이 잘 만들어졌습니다.\n");
    next_line();
    
    printf("\n이제 위에서 만든 파일 두 개를 비교해 볼 것입니다.\n\n");
    next_line();
    
    printf("[실습] \"comm\" 명령어를 옵션을 넣지 않고 이용하여\n");
    printf("'test1' 파일과 'test2' 파일의 내용을 비교해보세요.\n");
    printf("사용법 : comm [비교할 파일1] [비교할 파일2]\n");
    just_run_command("comm test1 test2");
    next_line();
    
    printf("\n학습을 잘 따라오셨다면 아래와 같은 형태로 출력될 것입니다.\n");
    printf("\t\tone\n\t\ttwo\n\t\tthree\n\t\tfour\nfive\n\tsix\n\tseven\n");
    next_line();
    
    printf("\n해석하자면 이렇습니다.\n");
    next_line();
    
    printf("'one', 'two', 'three', 'four'은(는)\n");
    printf("'test1' 파일과 'test2' 파일 모두 들어있는 내용이기 때문에\n");
    printf("Tab 키를 두번 한 '세 번째 열'에 입력됩니다.\n");
    next_line();
    
    printf("'five'는 'test1' 파일에만 들어있는 내용이기 때문에 '첫 번째 열'에 입력됩니다.\n");
    next_line();
    
    printf("'six'와 'seven'은 'test2' 파일에만 들어있는 내용이기 때문에\n");
    printf("Tab 키를 한번 한 '두 번째 열'에 입력됩니다.\n\n");
    next_line();
    
    printf("\"comm\" 명령어의 자주 쓰이는 옵션들은 다음과 같습니다.\n\n");
    printf("  [-1]\n");
    printf("두 개의 파일을 비교하지만, 첫 번째 파일에만 있는 내용은 출력하지 않고\n");
    printf("두 파일 모두 있거나 두 번째 파일에 있는 내용은 출력합니다.\n\n");
    printf("  [-2]\n");
    printf("두 개의 파일을 비교하지만, 두 번째 파일에만 있는 내용은 출력하지 않고\n");
    printf("두 파일 모두 있거나 첫 번째 파일에 있는 내용은 출력합니다.\n\n");
    printf("  [-3]\n");
    printf("두 개의 파일을 비교하지만, 두 파일 모두에 있는 내용은 출력하지 않고\n");
    printf("첫 번째 파일에만 있거나 두 번째 파일에만 있는 내용은 출력합니다.\n\n");
    next_line();
    
    printf("'test1' 파일과 'test2' 파일을 가지고 옵션들을 차례대로 실습해보겠습니다.\n\n");
    next_line();
    
    printf("[실습] 'test1' 파일과 'test2' 파일을 '-1' 옵션을 이용하여 비교해보세요.\n");
    printf("사용법 : comm [옵션] [비교할 파일1] [비교할 파일2]\n");
    just_run_command("comm -1 test1 test2");
    next_line();
    
    printf("\n학습을 잘 따라오셨다면 다음과 같은 형태로 출력되었을 것입니다.\n");
    printf("\tone\n\ttwo\n\tthree\n\tfour\nsix\nseven\n");
    next_line();
    
    printf("'-1' 옵션은 첫 번째 파일에만 있는 내용은 출력하지 않습니다.\n\n");
    next_line();
    
    printf("[실습] 이번에는 'test1 파일'과 'test2 파일'을 '-2' 옵션을 이용하여 비교해보세요.\n");
    printf("사용법 : comm [옵션] [비교할 파일1] [비교할 파일2]\n");
    just_run_command("comm -2 test1 test2");
    next_line();
    
    printf("\n햑습을 잘 따라오셨다면 이번에는 다음과 같은 형태로 출력되었을 것입니다.\n");
    printf("\tone\n\ttwo\n\tthree\n\tfour\nfive\n");
    next_line();
    
    printf("'-2' 옵션은 두 번째 파일에만 있는 내용은 출력하지 않습니다.\n\n");
    next_line();
    
    printf("[실습] 마지막으로 'test1 파일'과 'test2 파일'을 '-3' 옵션을 이용하여 비교해보세요.\n");
    printf("사용법 : comm [옵션] [비교할 파일1] [비교할 파일2]\n");
    just_run_command("comm -3 test1 test2");
    next_line();
    
    printf("\n학습을 잘 따라오셨다면 이번에는 다음과 같이 출력되었을 것입니다.\n");
    printf("\nfive\n\tsix\n\tseven\n");
    next_line();
    
    printf("'-3' 옵션은 두 파일 모두에 있는 내용은 출력하지 않습니다.\n\n");
    next_line();
    
    printf("이렇게 파일을 비교하는 명령어 \"comm\"에 대해 배웠습니다.\n");
    next_line();
    
    printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
    printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
    printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
    next_line();
    
    printf("\"comm\" 명령어의 학습이 끝났습니다.\n");
    printf("고생하셨습니다.\n");
 
    delete_defdir();
}
