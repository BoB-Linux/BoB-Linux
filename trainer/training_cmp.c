#include "func.h"

void training_cmp(void)
{
    create_defdir();

    system("clear");

    printf("이번에 학습할 명령어는 \"cmp\" 입니다.\n\n");
    
    printf("\"cmp\" 명령어는 \"compare\"의 약자이며, \"비교\" 라는 뜻입니다.\n");
    next_line();
    
    printf("\"cmp\" 명령어의 실행 파일은 \"/usr/bin/cmp\"(으)로 있습니다.\n");
    next_line();
    
    printf("\"cmp\" 명령어는 아주 간단하게 파일을 바이트(문자) 단위로 비교하고\n");
    printf("파일의 내용 중 어느 부분이 다른지 알려줍니다.\n\n");
    printf("기본값으로는 두 파일의 내용이 같다면 아무런 출력도 되지 않습니다.\n");
    next_line();
    
    printf("\"cmp\" 명령어는 두 개의 파일을 비교하고 나서 다른지 여부만 확인하기 때문에\n");
    printf("아무 옵션 없이 사용될 경우, 첫 번째 서로 다른 문자가 발견되면\n");
    printf("발견된 첫 번째 위치만 출력하고 끝나버립니다.\n\n");
    next_line();

    printf("즉, 두 파일을 비교할 때 맨 처음 내용이 다른 문자가 나오면 그 부분만 출력하고\n");
    printf("뒤에 내용이 다른 문자들은 출력되지 않고 끝나버립니다.\n");
    next_line();
    
    printf("\"cmp\" 명령어는 두 개의 파일의 내용이 서로 같은지 혹은 다른지에 대한\n");
    printf("참과 거짓 형태를 얻을 때 유용합니다.\n");
    next_line();
    
    printf("예를 들어 두 개의 파일이 있는데 서로 다른 부분이 있는지 알고 싶을 때\n");
    printf("다른 부분이 있는지 없는지에 대한 여부를 바로 알 수 있습니다.\n");
    next_line();
    
    printf("하지만 \"cmp\" 명령어의 단점은 서로 다른 부분이 있다면 존재 여부만 확인 할 수 있고\n");
    printf("서로 다른 부분이 어떻게 다른 지는 확인할 수 없습니다.\n");
    next_line();
    
    printf("사용법은 \"cmp [옵션] [비교할 파일1] [비교할 파일2]\" 입니다.\n");
    printf("ex) cmp file1 file2\n");
    next_line();
    
    printf("먼저 실습에 필요한 파일을 만들어 내용을 입력하도록 하겠습니다.\n");
    next_line();
    
    printf("파일 두 개를 만드는데, 서로 내용을 다르게 할 것입니다.\n\n");
    next_line();
    
    printf("[실습] \"cat > test1\"을(를) 입력하여 아래의 내용을 바로 입력하시고\n");
    printf("Ctrl + d키로 저장하세요.\n\n");
    printf("hello\nworld\ngood morning\nman\n");
    just_run_command("cat > test1");
    
    printf("\n실습에 필요한 파일 한 개가 만들어졌습니다.\n\n");
    next_line();
    
    printf("[실습] \"cat > test2\"을(를) 입력하여 아래의 내용을 바로 입력하시고\n");
    printf("Ctrl + d키로 저장하세요.\n\n");
    printf("hello\nworld\ngood morning\nwoman\n");
    just_run_command("cat > test2");
    
    printf("\n\n이제 실습에 필요한 파일 두 개 모두 만들어졌습니다.\n\n");
    next_line();

    printf("[실습] \"ls\"를 입력하여 파일 두 개가 잘 만들어졌는지 확인해봅니다.\n");
    just_run_command("ls");
    
    printf("\n\n파일 두 개의 내용이 다른지 같은지 참 혹은 거짓 형태로 출력되게 실습해보겠습니다.\n\n");
    next_line();
    
    printf("[실습] \"cmp\" 명령어를 이용하여 옵션을 넣지 않고\n");
           printf("'test1' 파일과 'test2' 파일의 내용을 비교해보세요.\n");
    printf("사용법 : cmp [비교할 파일1] [비교할 파일2]\n");
    just_run_command("cmp test1 test2");
    
    printf("\n\n학습을 잘 따라오셨다면, \"test1 test2 differ : byte 26, line 4\"라고 뜰 것입니다.\n");
    next_line();
    
    printf("해석하자면 이렇습니다.\n");
    printf("\"파일 test1\"과 \"파일 test2\"의 내용이 다른 부분은 '4번째 행'이고\n");
    printf("'공백과 엔터 포함하여 전체 문자 중 26번째 문자'이다.\n");
    next_line();
    
    system("clear");
    printf("\"cmp\" 명령어의 자주 쓰이는 옵션은 다음과 같습니다.\n\n");
    printf("  [ '-b' (--print-bytes) ]\n");
    printf("두 개의 파일을 비교 시 두 파일 간의 최초로 다른 문자들을 ASCII 값 8진수로 출력합니다.\n\n");
    printf("  [ '-i' (--ignore-initial) ]\n");
    printf("지정된 바이트 수 만큼 무시하고 다음 문자부터 1로 시작하여 비교합니다.\n\n");
    printf("  [ '-l' (--verbose) ]\n");
    printf("두 파일 간의 다른 문자에 대한 위치와 그 문자들의 8진수 값을 출력합니다.\n\n");
    printf("  [ '-s' (--silent) ]\n");
    printf("사용자에게 아무것도 출력하지 않습니다.\n");
    printf("하지만 시스템상에서는 실행 결과 코드 값이 반환합니다.\n");
    printf("(0 - 파일의 내용이 같다. / 1 - 파일의 내용이 다르다. / 2 - 파일에 접근할 수 없다)\n\n");
    next_line();
    
    system("clear");
    printf("\n\"cmp\" 명령어의 옵션 두 가지만 실습해보겠습니다.\n");
    next_line();
    
    printf("먼저 [ -i (--ignore-initial) ] 옵션을 실습해보겠습니다.\n\n");
    next_line();
    
    printf("[실습] 미리 만들었던 'test1' 파일과 'test2' 파일을\n");
    printf("'-i 6' 옵션을 이용하여 비교해보세요.\n");
    printf("사용법 : cmp [옵션] [비교할 파일1] [비교할 파일2]\n");
    just_run_command("cmp -i 6 test1 test2");
    next_line();
    
    printf("\n잘 입력하셨다면, \"test1 test2 differ: bytes 20, line 3\"라고 출력이 되었을 것입니다.\n");
    next_line();
    
    printf("출력값이 다르다는 걸 느끼셨나요?\n");
    next_line();
    
    printf("파일의 내용은 하나도 건들이지 않았는데\n");
    printf("처음엔 \"test1 test2 differ: bytes 26, line 4\"라고 출력되었던 값이 달라졌습니다.\n");
    next_line();
    
    printf("'-i 6'는 6byte 즉, 공백 및 엔터를 포함하여 6개의 문자를 무시하고\n");
    printf("그 다음 것부터 '1'로 세라는 옵션입니다.\n");
    next_line();
    
    printf("test1 파일과 test2 파일의 첫 번째 문자부터 6번 째 문자까지는\n");
    printf("엔터까지 포함된 \"hello\" 입니다.\n");
    printf("\n'h' - 1\n'e' - 2\n'l' - 3\n'l' - 4\n'o' - 5\n'\\n(엔터) - 6\n");
    next_line();
    
    printf("그렇기 때문에 그 다음 문자인 'w'부터 1로 시작한 것입니다.\n");
    next_line();
    
    printf("그럼 이번에는 [ -s (--silent) ] 옵션을 실습해보겠습니다.\n\n");
    next_line();
    
    printf("[실습] 미리 만들었던 'test1' 파일과 'test2' 파일을 '-s' 옵션을 이용하여 비교해보세요\n");
    printf("사용법 : cmp [옵션] [비교할 파일1] [비교할 파일2]\n");
    just_run_command("cmp -s test1 test2");
    
    printf("\n\n화면상에 아무런 결과값이 출력되지 않습니다.\n");
    next_line();
    
    printf("하지만 명령어는 정상 동작 하였습니다.\n");
    next_line();
    
    printf("'-s' 옵션은 사용자에게 출력해주지 않지만\n");
    printf("출력만 안될 뿐 시스템에서는 서로 같을 때와 다른 때에 대한 코드값을 반환했습니다.\n\n");
    
    printf("  [코드 값]\n0 - 파일의 내용이 같다. / 1 - 파일의 내용이 다르다. / 2 - 파일에 접근할 수 없다.)\n\n");
    next_line();
    
    printf("\"cmp\" 명령어는 아주 간단하게 파일을 비교할 때 쓰이는 명령어입니다.\n\n");
    printf("또 다른 파일 비교 명령어들로는 \"comm\" 명령어와 \"diff\" 명령어가 있습니다.\n");
    next_line();
    
    printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
    printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
    printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
    next_line();

    printf("\"cmp\" 명령어의 학습이 끝났습니다.\n");
    printf("고생하셨습니다.\n");

    delete_defdir();
}
