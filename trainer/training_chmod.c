#include "func.h"

int run_command(char valid_cmd[]);
void next_quit();

void training_chmod(void)
{
	create_defdir();
	system("clear");

	//////////////////////////////////////////////////////////////////////////////////////////////////////

	//실습할 파일&디렉토리 제공
	system("touch file1");
	system("chmod 000 file1");

	printf("이번에 학습할 명령어는 \"chmod\" 입니다.\n\n");

	printf("\"chmod\"는 'Change mode'의 약자이며\n");
	printf("사용자가 파일이나 디렉토리에 접근할 수 있는 사용 권한을 변경할 때 사용합니다.\n");
	next_line();

	printf("\"chmod\" 명령어의 실행 파일은 \"/usr/bin/chmod\"(으)로 있습니다.\n");
	next_line();

	printf("사용법은 \"chmod [옵션] [모드] [파일]\" 입니다.\n");
	printf("ex) chmod -R ug+rx test , chmod -R 550 test\n");
	next_line();

	printf("[옵션]은 선택 사항이며 해당 명령어에 지정할 옵션을 지정합니다.\n\n");
	printf("[모드](은)는 '숫자 모드' 또는 '문자 모드'로 지정할 권한을 입력합니다.\n\n");
	printf("[파일]은 사용 권한을 변경할 파일명을 입력합니다.\n\n\n");
	next_line();

	printf("\"chmod\" 명령어의 자주 쓰이는 옵션은 다음과 같습니다.\n\n");
	printf("  [ -R (--recursive) ]\n");
	printf("디렉토리 내부의 모든 하위 디렉토리와 파일의 접근 권한을 변경합니다.\n\n");
	printf("  [ -c (--changes) ]\n");
	printf("권한이 변경된 파일의 정보를 출력합니다.\n\n");
	printf("  [ -f (--silent, --quite]\n");
	printf("중요한 오류메시지가 아닌 경우 출력하지 않습니다.\n\n");
	printf("  [ -V (--verbose]\n");
	printf("실행되고 있는 모든 파일을 나열해줍니다.\n\n");
	next_line();

	printf("\"chmod\" 명령어의 [모드]를 지정하는 표기법에는 두가지 모드가 존재합니다.\n");
	next_line();
	
	system("clear");
	printf("[문자(symbolic) 모드]\n\n");
	printf("알파벳 기호를 사용하여 사용 권한을 지정합니다.\n\n");
	printf("사용법 : chmod [옵션] (사용자 대상) (설정 연산자) (권한) [파일]\n");
	next_line();
	
	printf("(사용자 대상)\n");
	printf("'u' : (User)파일의 소유자인 사용자의 권한.\n");
	printf("'g' : (Group)파일에 지정된 group의 멤버인 사용자의 권한.\n");
	printf("'o' : (Other)'user', 'group' 어느 곳에도 멤버가 아닌 사용자의 권한.\n");
	printf("'a' : (All)위의 3개를 포함한 모든 그룹, 사용자의 권한.\n");
	next_line();

	printf("(설정 연산자)\n");
	printf("'+' : 해당 권한을 추가합니다.\n");
	printf("'-' : 해당 권한을 제거합니다.\n");
	printf("'=' : 해당 권한을 설정한대로 변경합니다.\n");
	next_line();

	printf("(권한)\n");
	printf("'r' : 읽기\n");
	printf("'w' : 쓰기\n");
	printf("'x' : 실행\n\n");
	next_line();

	printf("만약 모든 '사용자' 및 '그룹'에게 '모든 권한'을 부여하고 싶다면\n");
	printf("명령어는 \"chmod ugo+rwx [파일]\" 또는 \"chmod a+rwx [파일]\"으로 사용됩니다.\n\n\n");
	next_line();

	system("ls -al");
	printf("\n\n현재 디렉토리에 'file1' 파일이 있고\n");
	printf("설정된 권한은 앞의 '파일의 유형'을 나타내는 첫 번째 자리를 빼고\n");
	printf("9자리인 '---------' 입니다.\n");
	next_line();

	printf("즉 \"소유자\", \"그룹 사용자\", \"다른 사용자\" 모두 읽기, 쓰기, 실행 권한이 없습니다.\n\n");
	next_line();

	printf("[실습] \"chmod\" 명령의 '문자 모드'를 사용하여\n");
	printf("'file1'의 \"소유자\"에게 '쓰기' 권한을 부여하고\n");
	printf("\"그룹\"과 \"다른 사용자\"에게 '읽기' 권한을 부여해보세요.\n");
	printf("사용법 : \"chmod [모드] [파일]\"\n\n");
	printf("(Tip) 각 사용자마다 권한을 다르게 부여할 경우 콤마 기호(,)를 이용하여 'u+x,go+w'과 같이 구분합니다.\n");
	run_command("chmod u+w,go+r file1");
	    
	printf("\n\n");
	system("ls -al");
	printf("\n파일 목록을 출력하면 권한이 성공적으로 부여된 것을 확인할 수 있습니다.\n\n");
	next_line();

	system("clear");
	printf("[숫자(numberic) 모드]\n\n");
	printf("8진수의 값(4, 2, 1, 0)을 사용해 사용 권한을 지정합니다.\n");
	printf("사용법 : chmod [옵션] (8진수 값) [파일]\n\n");
	next_line();

	printf("'4' : 읽기 권한\n");
	printf("'2' : 쓰기 권한\n");
	printf("'1' : 실행 권한\n\n");
	printf("위와 같은 가중치의 값을 부여하고\n");
	printf("여러 권한을 지정할 경우 해당 값을 더해서 지정합니다.\n");
	next_line();

	printf("만약 '읽기', '쓰기', '실행' 모든 권한을 지정하고 싶다면 세 값을 모두 더한\n");
	printf("\"4+2+1 = '7'\"이 됩니다.\n");
	next_line();

	printf("명령어 사용 시 \"chmod 241 test\"(와)과 같이\n");
	printf("3자리 수에 부여할 권한을 의미하는 값을 입력하여\n");
	printf("'소유자', '그룹', '다른 사용자'의 권한을 따로 지정합니다.\n");
	next_line();

	printf("'2'가 적힌 첫번째 자리는 \"소유자의 권한\" 입니다.\n");
	printf("'4'가 적힌 두 번째 자리는 \"그룹 권한\" 입니다.\n");
	printf("'1'이 적힌 세 번째 자리는 \"다른 사용자 권한\" 입니다.\n\n");
	printf("정리하자면 'chmod (소유자 권한) (그룹 권한) (다른 사용자 권한)' 입니다.\n\n\n");
	next_line();

	printf("예를 들어 소유자는 모든 권한을 부여하고\n");
	printf("그룹과 다른 사용자는 '읽기', '쓰기' 권한만 부여하고 싶다면\n\n");
	printf("명령어는 'chmod 766 [파일]'(와)과 같이 사용됩니다.\n");
	printf("모든 권한 : (4+2+1 = 7) / 읽기, 쓰기 : (4+2 = 6)\n\n");
	next_line();

	system("rm file1");
	system("touch file2");
	system("chmod 000 file2");
	system("ls -al");

	printf("\n\n현재 디렉토리에 'file2' 파일이 있고\n");
	printf("설정된 권한은 앞의 '파일의 유형'을 나타내는 첫 번째 자리를 빼고\n");
	printf("9자리인 '---------' 입니다.\n");
	next_line();

	printf("즉, \"소유자\", \"그룹\", \"다른 사용자\" 모두 '읽기', '쓰기', '실행' 권한이 없습니다.\n\n");
	next_line();


	printf("[실습] \"chmod\" 명령의 '숫자 모드'를 사용하여\n");
	printf("'file2'의 \"소유자\"에게 '쓰기' 권한을 부여하고\n");
	printf("\"그룹\"과 \"다른 사용자\"에게 '읽기' 권한을 부여해보세요.\n");
	printf("사용법 : chmod xxx [파일]\n\n");
	printf("(읽기 권한 : 4, 쓰기 권한 :  2, 실행 권한 : 1입니다.)\n");
	run_command("chmod 244 file2");
	next_line();

	printf("\n\n");
	system("ls -al");
	printf("\n파일 목록을 출력하면 권한이 성공적으로 부여된 것을 확인할 수 있습니다.\n\n");
	next_line();

	printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
	printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
	printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
	next_line();

	printf("\"chmod\" 명령어의 학습이 끝났습니다.\n");
	printf("고생하셨습니다.\n");

	delete_defdir();
}

