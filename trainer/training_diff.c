#include "func.h"

void training_diff(void)
{
    create_defdir();
    system("clear");
    
    printf("이번에 학습할 명령어는 \"diff\" 입니다.\n\n");
    
    printf("\"diff\" 명령어는 'difference'의 약자이며, 파일을 비교할 때 사용하는 명령어입니다.\n");
    next_line();
    
    printf("\"diff\" 명령어는 \"cmp\" 명령어보다 더 직관적이고 명확하게 결과를 알려주는 명령어입니다.\n");
    next_line();
    
    printf("\"diff\" 명령어의 실행 파일은 \"/usr/bin/diff\"(으)로 있습니다.\n");
    next_line();
    
    printf("사용법은 \"diff [옵션] [비교할 파일1] [비교할 파일2]\" 입니다.\n");
    printf("ex) diff file1 file2\n");
    next_line();
    
    printf("보통 \"비교할 파일1\" 에는 \"원본 파일\"을 두고\n");
    printf("\"비교할 파일2\"에는 \"새로운 파일\"을 두고 비교합니다.\n");
    next_line();
    
    printf("먼저 실습에 필요한 파일을 만들어 내용을 입력하도록 하겠습니다.\n");
    next_line();
    
    printf("[실습] \"cat > test1\"을 입력하여 아래의 내용을 바로 입력하시고\n");
    printf("Ctrl + d키로 저장하세요.\n\n");
    printf("i\nlove\nyou\n");
    just_run_command("cat > test1");
    
    printf("\n실습에 필요한 파일 한 개가 만들어졌습니다.\n\n");
    next_line();
    
    printf("[실습] \"cat > test2\"을(를) 입력하여 아래의 내용을 바로 입력하시고\n");
    printf("Ctrl + d키로 저장하세요.\n\n");
    printf("i\nlove\nme\nokay?\n");
    just_run_command("cat > test2");
    
    printf("\n\n이제 실습에 필요한 파일 두 개 모두 만들어졌습니다.\n\n");
    next_line();
    
    printf("[실습] \"ls\"를 입력하여 파일 두 개가 잘 만들어졌는지 확인해봅니다.\n");
    just_run_command("ls");
    
    printf("\n\n이제 위에서 만든 파일 두 개를 비교해 볼 것입니다.\n\n");
    next_line();
    
    printf("[실습] \"diff\" 명령어를 옵션을 없이 이용하여\n");
    printf("'test1' 파일과 'test2' 파일의 내용을 비교해보세요.\n");
    printf("사용법 : diff [비교할 파일1] [비교할 파일2]\n");
    just_run_command("diff test1 test2");
    
    printf("\n\n학습을 잘 따라오셨다면 아래와 같이 출력될 것입니다.\n");
    printf("3c3,4\n< you\n---\n> me\n> okay?\n");
    next_line();
    
    printf("해석하자면 이렇습니다.\n");
    next_line();
    
    printf("두 파일을 비교했을 때\n");
    printf("첫번째 파일에서는 3번째 행이 다르고\n");
    next_line();
    
    printf("두번째 파일에서는 3번째 행과 4번째 행이 다른데\n");
    next_line();
    printf("첫번째 파일에서는 \"you\"라고 적힌 부분이고\n");
    next_line();
    printf("두 번째 파일에서는 \"me\"와 \"okay?\"라고 적힌 부분이다.\n");
    next_line();
    
    printf("결과에서 '<'와 '>' 기호의 의미는 각각 이렇습니다.\n");
    next_line();
    
    printf("'<' : 두 번째 파일에는 없지만 \"첫 번째 파일에는 들어있는 내용이다.\"\n");
    printf("'>' : 첫 번째 파일에는 없지만 \"두 번째 파일에는 들어있는 내용이다.\"\n");
    next_line();
    
    system("clear");
    printf("\"diff\" 명령어의 자주 쓰이는 옵션들은 다음와 같습니다.\n\n");
    printf("  [ -b (--ignore-spcae-change) ]: 연속된 공백은 무시합니다.\n");
    printf("  [ -w (--ignore-all-space) ]   : 모든 공백 차이를 무시합니다.\n");
    printf("  [ -d ]                        : 세세한 차이까지 비교합니다.\n");
    printf("  [ -i (--ignore-case) ]        : 대소문자의 차이를 무시합니다.\n");
    printf("  [ -q (--brief) ]              : 두 파일을 비교 시 차이점의 존재 여부만 출력해줍니다\n");
    printf("  [ -s (--report-identical-files) ] : 두 파일이 같은 지 확인합니다.\n");
    printf("  [ -r (--recursive) ]          : 두 디렉토리(폴더)를 비교 시\n");
    printf("                                  디렉토리 밑에 있는 파일과 디렉토리들도 비교하여\n");
    printf("                                  차이점을 출력합니다.\n");
    printf("  [ -y (--side-by-side) ]       : 두 파일의 차이점을 출력할 때\n");
    printf("                              두 열로 나눠서 출력해줍니다.\n\n");
    next_line();
    
    printf("\"diff\" 명령어의 옵션 두 가지만 실습해보겠습니다.\n");
    next_line();
    
    printf("먼저 '-q' 옵션을 실습해보겠습니다.\n\n");
    next_line();
    
    printf("[실습] 'test1' 파일과 'test2' 파일을 '-q'(--brief) 옵션을 이용하여 비교해보세요.\n");
    printf("사용법 : diff [옵션] [비교할 파일1] [비교할 파일2]\n");
    just_run_command("diff -q test1 test2");
    next_line();
    
    printf("\n학습을 잘 따라오셨다면 다음과 같이 출력되었을 것입니다.\n");
    printf("Files test1 and test2 differ\n");
    next_line();
    
    printf("\"diff\" 명령어에서 '-q (--brief)' 옵션은 두 파일을 비교할 때\n");
    printf("차이점의 존재 여부만 출력해주는 옵션입니다.\n");
    next_line();
    
    printf("다음은 '-y (--side-by-side)' 옵션을 실습해보겠습니다.\n\n");
    next_line();
    
    printf("[실습] 'test1' 파일과 'test2' 파일을 '-y'(--side-by-side) 옵션을 이용하여 비교해보세요.\n");
    printf("사용법 : diff [옵션] [비교할 파일1] [비교할 파일2]\n");
    just_run_command("diff -y test1 test2");
    next_line();
    
    printf("\n학습을 잘 따라오셨다면 다음과 같이 출력되었을 것입니다.\n");
    printf("i\t\t\t\t\t\t\t\ti\nlove\t\t\t\t\t\t\t\tlove\nyou\t\t\t\t\t\t\t      | me\n\t\t\t\t\t\t\t      > okay?\n");
    next_line();
    
    printf("\"diff\" 명령어에서 '-y (--side-by-side)' 옵션은 두 파일의 차이점을 출력할 때\n");
    printf("두 열로 나눠서 출력해주는 옵션입니다.\n");
    next_line();
    
    printf("이렇게 \"diff\" 명령어를 배워보았습니다.\n");
    next_line();
    
    printf("그런데 끝난 게 아닙니다.\n");
    next_line();
    
    printf("두 개의 파일을 비교할 땐 \"diff\"라는 명령어를 사용했습니다.\n");
    next_line();
    
    printf("그런데 \"diff\" 명령어와 비슷한 \"diff3\"라는 명령어가 있습니다.\n\n");
    printf("\"diff3\" 명령어는 3개의 파일을 비교할 때 사용하는 명령어입니다.\n");
    next_line();
    
    printf("\"diff3\" 명령어를 실습하기 전에 파일을 하나 더 만들어줍니다.\n\n");
    next_line();
    
    printf("[실습] \"cat > test3\"을(를) 입력하여 아래의 내용을 바로 입력하시고\n");
    printf("Ctrl + d키로 저장하세요.\n\n");
    printf("i\nlove\nit\ngot it?\n");
    just_run_command("cat > test3");
    
    printf("\n\n학습을 잘 따라오셨다면 test3 파일이 만들어졌을 것입니다.\n\n");
    next_line();
    
    printf("[실습] \"ls\"로 test3 파일이 잘 만들어졌는지 확인해봅니다.\n");
    just_run_command("ls");
    next_line();
    
    printf("\n이제 \"diff3\" 명령어를 실습해보겠습니다.\n\n");
    next_line();
    
    printf("[실습] \"diff3\" 명령어를 옵션 없이 이용하여\n");
    printf("'test1', 'test2', 'test3'(을)를 비교해보세요.\n");
    printf("사용법 : diff3 [옵션] [비교할 파일1] [비교할 파일2] [비교할 파일3]\n");
    just_run_command("diff3 test1 test2 test3");
    next_line();
    
    printf("\n학습을 잘 따라오셨다면, 다음과 같이 출력되었을 것입니다.\n");
    printf("====\n1:3c\n  you\n2:3,4c\n  me\n  okay?\n3:3,4c\n  it\n  got it?");
    next_line();
    
    printf("\n해석하자면 이렇습니다.\n");
    next_line();
    
    printf("출력을 보면 '===='이 있는데 이 의미는 3개의 파일 모두 다 다른 점이 있다는 것입니다.\n");
    next_line();
    
    printf("그리고 '1:', '2:', '3:' 이렇게 되어 있는 것들은 각 파일의 번호 입니다. \n");
    printf("차례대로 1번째 2번째 3번째 파일이라는 것입니다.\n");
    next_line();
    
    printf("마지막으로 '3c', '3,4c', '3,4c' 이렇게 되어 있는 것들은\n");
    next_line();
    
    printf("각 파일에서 다른 부분의 행 번호 입니다.\n\n");
    next_line();
    printf("그 밑에는 각 파일에만 입력되어 있고\n");
    next_line();
    
    printf("다른 파일에는 입력이 안된 내용을 출력해 준 것입니다.\n\n\n");
    next_line();
    
    printf("최종적으로 보자면\n");
    printf("1 번째 파일의 3 번째 행 \"you\"라는 내용이 다른 파일에는 없다는 것이고\n\n");
    next_line();
    
    printf("2 번째 파일의 3 번째 행과 4번째 행 \"me\"와 \"okay?\"라는 내용이\n");
    printf("다른 파일에는 없다는 것이고\n");
    next_line();
    
    printf("3 번째 파일의 3 번째 행과 4 번째 행 \"it\"과 \"got it?\"이라는 내용이\n");
    printf("다른 파일에는 없다는 것입니다.\n\n");
    next_line();
    
    printf("만약 1 번째 파일과 2 번째 파일의 내용은 같고 3 번째 내용만 다르다면\n");
    printf("\"====3\"처럼 '====' 뒤에 내용이 다른 파일의 번호를 붙여서 출력해줍니다.\n");
    next_line();
    
    printf("\"diff3\" 명령어도 옵션이 존재합니다만\n");
    printf("이 트레이닝에서 \"diff3\" 옵션에 대해서는 다루지 않겠습니다.\n");
    next_line();
    
    printf("이렇게 두 개의 파일을 비교하는 \"cmp\"보다 더 자세히 알려주는  \"diff\" 명령어와\n");
    printf("3개의 파일을 비교할 수 있는 \"diff3\" 명령어에 대해 배웠습니다.\n");
    next_line();
    
    printf("\"diff\"와 \"diff3\" 명령어의 옵션은 위에 나온 것들 말고도 여러가지가 있습니다.\n");
    next_line();

    printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
    printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
    printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
    next_line();

    printf("\"diff\"와 \"diff3\" 명령어의 학습이 끝났습니다.\n");
    printf("고생하셨습니다.\n");

    delete_defdir();
}
