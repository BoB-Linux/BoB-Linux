#include "func.h"

void training_vi(void)
{
    create_defdir();

    system("clear");

    printf("이번에 배울 명령어는 \"vi\"와 \"vim\" 입니다.\n\n");
    printf("\"vi\"와 \"vim\"은 텍스트를 편집하기 위해 사용합니다.\n");
    next_line();
    
    printf("\"vi\" 명령어의 실행파일은 \"/usr/bin/vi\"(으)로 있습니다.\n");
    printf("또한 \"vim\" 명령어의 실행파일은 \"/usr/bin/vim\"(으)로 있습니다.\n");
    next_line();
    
    printf("\"vi\"와 \"vim\"은 다른 프로그램입니다.\n");
    printf("\"vi\"는 visual editor의 약자고, \"vim\"은 vi improved의 약자로 \"vi\"의 개선 버전입니다.\n");
    next_line();
    
    printf("하지만 요즘 대다수의 유닉스와 리눅스 배포판에서 \"vi\"를 입력하면\n");
    printf("\"vim\"로 입력되어 \"vim\"이 실행됩니다.\n");
    next_line();
    
    printf("이 때 \"vim\"은 \"vi\"와 호환이 되는 것으로 본래의 \"vi\"가 실행되는 것이 아닙니다.\n");
    next_line();
    
    printf("사용법은 \"vi [file.txt]\" 입니다.\n");
    printf("ex) vi test1.txt\n");
    next_line();
    
    printf("요즘은 수 많은 편집기들이 있고 GUI화가 일반적인 윈도우 같은 경우는\n");
    printf("편집과 다른 기능들을 추가한 프로그램들도 여럿 존재합니다.\n");
    next_line();
    
    printf("리눅스에서도 대표적으로 \"Emacs\"와 \"nano\"가 있습니다.\n");
    next_line();
    
    printf("\"vi\"는 '빌 조이'가 1976년 만든 Unix 계열에서 쓰이는 문서 편집기이며\n");
    printf("\"vi\"는 앞에서도 언급했듯이 'Visual editor'의 약자입니다.\n");
    next_line();
    
    printf("\"vi\"가 있기 전에 라인 에디터 \"ed\"라는 편집기가 있었습니다.\n");
    next_line();
    
    printf("요즘에는 그래픽이 더해져서 사용자들이 문서를 편집하고 텍스트를 편집하기 쉽지만\n");
    next_line();
    
    printf("옛날에 사용된 라인 에디터 \"ed\"는 잉크로 글자를 찍어서 보여주는 시대에 탄생한 것으로\n");
    printf("'어디부터 어디까지 보여줘라'라고 명령해야 보여주고 편집이 가능했습니다.\n");
    next_line();
    
    printf("\"ed\"는 POSIX 표준으로 지정되어 있기 때문에\n");
    printf("유닉스 호환 시스템에는 설치 되어있거나 설치할 수 있습니다.\n");
    next_line();
    
    printf("하지만 \"ed\"는 전문가가 아닌 일반 사용자들이 사용하기에 어려움이 있었고\n");
    printf("친절하지 못했습니다.\n");
    next_line();
    
    printf("그래서 \"BSD\" 유닉스를 만들던 버클리 대학에서 '빌 조이'라는 프로그래머 분이\n");
    printf("\"visual mode\"라는 것을 코딩하여 플러그인으로 만들어 넣었다고 알려져 있습니다.\n");
    next_line();
    
    printf("이후에 라인 편집기에 플러그인 형태로 들어가 있던 \n");
    printf("\"vi\"가 인기가 좋아 분리되어 하나의 프로그램으로 만들어졌습니다.\n");
    next_line();
    
    printf("그리고 이 당시 \"Emacs\"가 유료였기도 하고, \"BSD\"에 기본으로 설치되어 있는 편집기가\n");
    printf("\"ed\"와 \"vi\"뿐이었기 때문에 인기가 많았습니다.\n");
    next_line();
    
    printf("하지만\n");
    next_line();
    
    printf("\"vi\"는 \"ed\"에서 파생된 것이기에 자유 소프트웨어가 아니었습니다.\n\n");
    printf("그래서 AT&T의 라이선스가 있어야 코드 수정이 가능했습니다.\n");
    next_line();
    
    printf("\"vi\"는 초보자가 진입하기에 장벽이 좀 높고 복잡한 '3가지 모드'가 존재하지만\n\n");
    next_line();
    printf("텍스트를 조작하는 기능에 치중하였기 때문에\n");
    printf("다른 편집기에 비해서 매우 간단한 키 입력으로 텍스트를 조작하는 것이 가능해졌습니다.\n");
    next_line();
    
    printf("그 당시 편집기의 주 용도는 C 프로그래밍이었습니다.\n");
    next_line();
    
    printf("프로그래밍의 특성 상 한번에 모든 것을 타이핑 하기 보다는\n");
    printf("조금씩 수정하고 추가하는 일이 많았기에\n");
    next_line();
    printf("편집할 줄과 편집 방식을 지정하고, 방식에 따라 편집하고 다시 돌아와서\n");
    printf("다음에 편집할 줄과 편집 방식을 지정하는 라인 편집기 개념이 중요했습니다.\n");
    next_line();
    
    printf("\"vi\"는 라인 편집기 \"ed\"에서 파생되었기에 라인 편집기 개념에\n");
    printf("기반하고 있어서 GUI에 익숙한 사용자들에게는 접하기 힘들고 친숙하지 못합니다.\n");
    next_line();
    
    printf("\"vi\"는 [명령 모드], [입력 모드], [마지막 행 모드]로 나눠져 있습니다.\n");
    printf("그렇기에 아무것도 모르는 초보자가 다루기에는 복잡하고 사용하기 힘들 것입니다.\n");
    next_line();
    
    printf("\"vi\"는 일반 사용자에게 생소한 조작 방식을 가지고 있어 \n");
    printf("직접 많이 사용해보는 것밖에 없습니다.\n");
    next_line();
    
    printf("많이 사용하면서 3가지 모드를 익히고 자유롭게 다루게 된다면 vi의 효율성은 엄청납니다.\n");
    next_line();
    
    printf("\"vi\"는 실습은 진행하지 않고\n");
    printf("[명령 모드], [입력 모드], [마지막 행 모드]의 개념과 단축키들을 배우겠습니다.\n");
    next_line();
    
    system("clear");
    printf("[명령 모드]\n\n");
    printf("처음 \"vi\"를 입력하여 \"vi\" 에디터를 켜면 기본으로 들어가지는 모드입니다.\n");
    next_line();
    
    printf("[명령 모드]은 [입력 모드]로 진입하거나 [마지막 행 모드]로 진입할 수 있습니다.\n");
    next_line();
    
    printf("[명령 모드]에서는 여러 키들로 명령을 내리거나\n");
    printf("다른 모드로 진입을 수행하므로 텍스트가 입력되지 않습니다.\n");
    next_line();
    
    printf("명령 모드는 커서의 이동, 내용 수정, 삭제, 복사, 붙이기, 저장, 탐색 등을 합니다.\n");
    next_line();
    
    printf("어떠한 모드에 진입해 있다가 [명령 모드]로 진입하려면\n");
    printf("\"ESC\"키를 누르시거나, Ctrl + [ 키를 누르면 됩니다.\n");
    next_line();
    
    printf("우선, 파일을 만들어서 내용을 입력하고 나면 파일을 저장해야 하는데\n");
    printf("이 때 쓰는 명령키들을 익히고 가겠습니다.\n");
    next_line();
    
    printf("저장 및 종료 키들은[명령 모드]에서 [마지막 행 모드]로 진입하여 사용하기 때문에\n");
    printf("꼭 앞에 콜론(:)과 같이 입력된 후 엔터를 눌러야 동작합니다.\n");
    next_line();
    
    printf("':w' - 파일을 저장합니다.\n");
    next_line();
    
    printf("':q' - vi를 종료합니다. (내용이 수정되었다면 동작하지 않습니다.)\n");
    printf("':q!' - vi를 강제 종료합니다. (내용이 수정되었어도 저장하지 않고 종료.)\n");
    next_line();
    
    printf("':wq' - 파일을 저장하고 종료합니다.\n");
    printf("':wq!' - 파일을 강제로 저장하고 종료합니다.\n");
    next_line();
    
    printf("[마지막 행 모드]의 명령 키들은 아래에서 더 배우겠습니다.\n");
    next_line();
    
    printf("[명령 모드]에서 마우스 커서를 이동하는 명령키는 다음과 같습니다.\n\n");
    printf("[ 'h' key ] : 커서를 왼쪽으로 이동합니다. (왼쪽 방향키와 동일)\n");
    printf("[ 'j' key ] : 커서를 아래로 이동합니다. (아래쪽 방향키와 동일)\n");
    printf("[ 'k' key ] : 커서를 위로 이동합니다. (위쪽 방향키와 동일\n");
    printf("[ 'l' key ] : 커서를 오른쪽으로 이동합니다. (오른쪽 방향키와 동일)\n");
    next_line();
    
    printf("위 4개의 명령키는 기본적인 명령키이므로 숙지해두시길 바랍니다.\n");
    printf("이어서 보겠습니다.\n");
    next_line();
    
    system("clear");
    printf("\n");
    printf("[ 'w'  key ]       : 커서를 다음 단어의 처음 위치로 이동합니다.\n");
    printf("[ '^'  key ]       : 커서를 현재 커서가 위치한 줄의 첫 문자로 이동합니다.\n");
    printf("[ '$'  key ]       : 커서를 현재 커서가 위치한 줄의 맨 끝으로 이동합니다.\n");
    printf("[ 'G'  key ]       : 커서를 제일 끝 행으로 이동합니다.\n");
    printf("[ 'gg' key ]      : 커서를 제일 첫 행으로 이동합니다.\n");
    printf("[ 'nG' key ]      : 커서를 n번째 행으로 이동합니다.\n");
    printf("[ 'H'  key ]       : 현재 화면의 첫 줄로 이동합니다. (Head)\n");
    printf("[ 'M'  key ]       : 현재 화면의 중간으로 이동합니다. (Middle)\n");
    printf("[ 'L'  key ]       : 현재 화면의 끝 줄로 이동합니다. (Last)\n");
    printf("[ 'n%%' key ]       : 현재 파일의 내용에서 입력된 n%%에 해당하는 행으로 이동합니다.\n");
    printf("[ '('  key ]       : 커서를 현재 문장의 처음으로 이동합니다.\n");
    printf("[ ')'  key ]       : 커서를 현재 문장의 끝으로 이동합니다.\n");
    printf("[ '{'  key ]       : 커서를 현재 문단의 처음으로 이동합니다.\n");
    printf("[ '}'  key ]       : 커서를 현재 문단의 끝으로 이동합니다.\n");
    printf("[ 'n-' key ]      : 현재 커서를 기준으로 n 만큼 윗 줄로 이동합니다.\n");
    printf("[ 'n+' key ]      : 현재 커서를 기준으로 n 만큼 아래 줄로 이동합니다.\n");
    printf("[ ':숫자 + 엔터' ] : 해당하는 숫자의 행으로 이동합니다.\n");
    printf("[ '숫자 0' key ]   : 커서를 첫 번째 열로 이동합니다.\n");
    next_line();
    
    system("clear");
    printf("다음은 [명령 모드]에서 삭제, 복사, 붙여넣기하는 명령 키 입니다.\n\n");
    printf("[ 'x'    key ] : 현재 커서가 위치한 문자를 삭제합니다.\n");
    printf("[ 'dw'   key ] : 현재 커서가 위치한 단어를 삭제합니다.\n");
    printf("[ 'dd'   key ] : 현재 커서가 위치한 행을 삭제합니다.\n");
    printf("[ 'n dd' key ] : 현재 커서부터 시작하여 n개 만큼의 행을 삭제합니다.\n");
    printf("[ 'yy'   key ] : 현재 커서가 위치한 행을 복사합니다.\n");
    printf("[ 'n yy' key ] : 현재 커서가 위치한 행부터 n개 만큼의 행을 복사합니다.\n");
    printf("[ 'p'    key ] : 복사한 내용을 현재 커서가 위치한 행의 다음 행에 붙여넣습니다.\n");
    printf("[ 'P'    key ] : 복사한 내용을 현재 커서가 위치한 행의 이전 행에 붙여넣습니다.\n\n");
    next_line();
    
    system("clear");
    printf("다음은 [명령 모드]에서 수행했던 명령을 되돌리기 하는 키와\n");
    printf("검색한 결과를 볼 때 사용하는 키입니다.\n\n");
    printf("[ 'u' ] : 방금 수행했던 명령을 취소합니다. (Ctrl + z 한 것과 같습니다.)\n");
    printf("[ 'n' ] : 검색된 문자 중에서 맨 위에서 맨 아래로 다음 문자로 이동합니다.\n");
    printf("[ 'N' ] : 검색된 문자 중에서 맨 아래에서 맨 위로 다음 문자로 이동합니다.\n\n");
    next_line();
    
    system("clear");
    printf("[입력 모드]\n\n");
    printf("[입력 모드]에서는 사용자가 작성할 텍스트를 입력하는 모드입니다.\n");
    next_line();
    
    printf("[입력 모드]에서는 정말 텍스트 입력만 하기 때문에\n");
    printf("'ESC'키를 눌러 [명령 모드]로 진입해 명령을 내립니다.\n");
    next_line();
    
    system("clear");
    printf("[명령 모드]에서 [입력 모드]로 진입하고 싶으면 다음의 키들을 사용하면 됩니다.\n\n");
    printf("[ 'i'(insert)      key ] : 현재 마우스 커서의 위치부터 입력합니다.\n");
    printf("[ 'I'             key ] : 현재 마우스 커서가 위치한 줄의 맨 앞에서부터 입력합니다.\n");
    printf("[ 'a'(append)     key ] : 현재 마우스 커서의 위치의 다음 칸부터 입력합니다.\n");
    printf("[ 'A'             key ] : 현재 마우스 커서가 위치한 줄의 맨 마지막부터 입력합니다.\n");
    printf("[ 'o'(open line)  key ] : 현재 마우스 커서가 위치한 줄의 다음 줄에 입력합니다.\n");
    printf("[ 'O'             key ] : 현재 마우스 커버가 위치한 줄의 이전 줄에 입력합니다.\n");
    printf("[ 's'             key ] : 현재 마우스 커서의 위치에 있는 한 글자를 지우고 입력합니다.\n");
    printf("[ 'S'             key ] : 현재 마우스 커서가 위치한 한 줄을 지우고 입력합니다.\n\n");
    next_line();
    
    system("clear");
    printf("[마지막 행 모드]\n\n");
    printf("[마지막 행 모드]는 [명령 모드]에서 :, ?, / 이 3가지 문자를 이용해 명령을 내리는 모드로 ");
    printf("저장, 종료, 탐색, 치환 및 vi 환경 설정 등의 작업을 수행합니다.\n");
    next_line();
    
    printf("[마지막 행 모드]는 어떤 명령을 내리는지 \"vi\" 화면의 맨 아랫줄에서 보여줍니다.\n");
    next_line();
    
    printf("[명령 모드]에서 수행할 명령 중 일부는 이 모드를 통해 수행됩니다.\n");
    next_line();
    
    system("clear");
    printf("다음은 [마지막 행 모드]에서 사용하는 명령키입니다.\n\n");
    printf("':w' - 파일을 저장합니다.\n");
    printf("':q' - vi를 종료합니다. (내용이 수정되었다면 동작하지 않습니다.)\n");
    printf("':q!' - vi를 강제 종료합니다. (내용이 수정되었어도 저장하지 않고 종료.)\n");
    printf("':wq' - 파일을 저장하고 종료합니다.\n");
    printf("':wq!' - 파일을 강제로 저장하고 종료합니다.\n");
    printf("':set [옵션] - 옵션에 따라 작업을 수행합니다.\n");
    printf("               옵션은 ':set'을 입력하면 보실 수 있습니다.\n");
    printf("               ex) :set number - 행의 번호를 출력합니다.\n\n");
    printf("'?[문자열] - 찾는 문자열을 현재 커서가 위치한 곳부터 아래쪽 방향으로 검색합니다.\n");
    printf("'/[문자열] - 찾는 문자열을 현재 커서가 위치한 곳부터 위쪽 방향으로 검색합니다.\n\n");
    next_line();
    
    printf("\"vi\"는 이렇게 여러 명령 키들로 조작이 가능합니다.\n");
    next_line();
    
    printf("\"vim\"은 \"vi\"의 명령어키들 대부분을 호환하며 사용자를 더 편하게 해줍니다.\n");
    next_line();
    
    printf("\"vim\"에서는 스크립트를 통한 확장 기능을 사용할 수 있습니다.\n");
    next_line();
    
    printf("\"vim\"에 확장 기능을 설치하여 사용한다면\n");
    printf("사용자의 활용도에 따라 아주 강력한 편집기가 될 수 있습니다.\n\n");
    
    printf("'https://www.vim.org/scripts/index.php'에서 필요한 것만 하나씩 받아서\n");
    printf("적용할 수도 있으나\n");
    next_line();
    
    printf("'vundle'이라는 확장 기능을 통해 플러그인 설치를 자동화할 수 있습니다.\n");
    printf("\"vim\" 플러그인 정리 사이트 : 'https://vimawesome.com'\n");
    next_line();
    
    printf("\"vi\" 명령어의 명령키들은 위에 나온 것들 말고도 여러가지가 있습니다.\n");
    next_line();
    
    printf("'vimtutor'이라는 프로그램을 이용하시면\n");
    printf("\"vi\" 혹은 \"vim\"의 사용법을 익히고 실습하실 수 있습니다.\n");
    next_line();
    
    printf("콘솔이나 터미널에 'vimtutor'을 입력하시거나, 패키지가 없다면\n");
    printf("설치하여 튜토리얼을 진행해보시길 바랍니다.\n");
    next_line();
    
    printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
    printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
    printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
    next_line();
    
    printf("대부분의 리눅스 시스템에서는 \"vi\"를 입력 시 \"vim\"이 실행되므로 확장 기능을 추가하여 사용해보세요.\n");
    next_line();
    
    printf("\"vi\" 명령어의 학습이 끝났습니다.\n");
    printf("고생하셨습니다.\n");

    delete_defdir();
}
