#include <time.h>
#include "func.h"

void training_user_passwd(void)
{
	create_defdir();
	system("clear");

	//////////////////////////////////////////////////////////////////////////////////////////////////////

	printf("이번에 학습할 명령어는 \"adduser\", \"userdel\", \"usermod\", \"passwd\"입니다.\n\n");
	printf("이 명령어들은 사용자 계정과 관련된 동작들을 합니다.\n");
	next_line();
	
	printf("각 명령어의 실행 파일 위치는 다음과 같습니다.\n\n");
	printf(" adduser : /usr/sbin/adduser\n");
	printf(" userdel : /usr/sbin/userdel\n");
	printf(" usermod : /usr/sbin/usermod\n");
	printf(" passwd  : /usr/bin/passwd\n\n");
	next_line();
	
	printf("계정을 관리하는 역할은 일반적으로 관리자 계정인 'root'의 역할이므로\n");
	printf("일반 사용자는 해당 명령어들을 사용하지 못합니다.\n");
	next_line();
	
	printf("따라서 이 명령어들은 관리자 권한을 통해 수행할 수 있습니다.\n");
	next_line();
	
	printf("관리자 권한으로 수행하기 위해 명령어 앞에 \"sudo\" 명령어를 붙입니다.\n");
	next_line();
	
	printf("\"sudo\" 명령어는 어떤 명령어를 관리자 권한으로 실행시켜 줍니다.\n");
	next_line();
	
	printf("이름에서도 충분히 유추할 수 있듯, \"adduser\" 명령어는 새로운 사용자 계정을 생성합니다.\n");
	next_line();
	
	printf("사용법은 : \"sudo adduser [옵션] [생성할 계정 이름]\"입니다.\n");
	printf("ex) sudo adduser user1\n");
	next_line();
	
	printf("아무런 옵션을 주지 않고\n");
	printf("\"adduser [생성할 계정 이름]\"의 문법으로 사용하면 지정한 이름으로 계정을 생성합니다.\n");
	next_line();
	
	printf("이 때 사용할 계정의 패스워드를 입력하게 되고\n");
	printf("추가적으로 이름이나 전화번호 등 인적사항을 기입하게 됩니다.\n");
	next_line();
	
	printf("다만, 인적사항은 필수로 기입해야하는 것은 아니며\n");
	printf("Enter를 입력하여 넘어가도 큰 문제는 없습니다.\n\n");
	next_line();
	
	printf("[실습] \"adduser\"를 이용해 'user1'이라는 이름을 가진 사용자 계정을 생성해보세요.\n");
	printf("사용법 : sudo adduser [옵션] [생성할 계정 이름]\n");
	nothing_print_fake_run_command("sudo adduser user1");
	
	printf("Adding user `user1' ...\n");
	printf("Adding new group `user1' (1001) ...\n");
	printf("Adding new user `user1' (1001) with group `user1' ...");
	printf("Creating home directory `/home/user1' ...\n");
	printf("Copying files from `/etc/skel' ...\n");

	printf("\n\nuser1이라는 계정을 만들기 위해 여러 가지 작업을 수행하는 모습이 출력됩니다.\n");
	printf("출력 결과를 하나 하나 살펴보겠습니다.\n");
	next_line();
	
	printf("[ Adding user `user1' ... ]\n");
	printf("방금 지정한 이름인 'user1'을 계정에 추가하고 있다는 의미입니다.\n\n");
	next_line();
	
	printf("[ Adding new group `user1' (1001) ... ]\n");
	printf("user1의 '그룹'을 따로 지정해주지 않았기 때문에\n");
	printf("지정한 사용자 계정 이름과 동일한 이름(user1)으로 group을 생성합니다.\n");
	next_line();
	
	printf("(1001)은 생성한 그룹의 GID(Group ID)입니다.\n");
	next_line();
	
	printf("이 때 일반적으로 GID는 생성된 계정의 UID와 일치합니다.\n\n");
	next_line();
	
	printf("[ Adding new user `user1' (1001) with group `user1' ... ]\n");
	printf("생성한 'user1' 그룹에 'user1' 계정을 포함시킨다는 의미입니다.\n");
	next_line();
	
	printf("[Creating home directory `/home/user1' ... ]\n");
	printf("생성한 계정의 홈 디렉토리를 '/home/user1'로 지정합니다.\n");
	printf("일반적으로 홈 디렉토리는 '/home/[사용자 계정 이름]'으로 지정됩니다.\n\n");
	next_line();
	
	printf("[Copying files from `/etc/skel' ... ]\n");
	printf("/etc/skel에는 계정 생성시에 홈 디렉토리에 복사될 파일을 놓을 수 있습니다.\n");
	next_line();
	
	printf("계정을 새로 생성하면 /etc/skel에 저장된 파일이 자동으로 홈 디렉토리에 복사됩니다.\n\n");
	next_line();
	
	system("clear");
	printf("다시 'adduser user1'을 입력한 상태로 돌아오겠습니다.\n");
	next_line();
	
	printf("현재 우리가 입력한 것에서는 사용자 계정 이름만 지정했고\n");
	printf("패스워드를 입력하지 않았습니다.\n");
	next_line();
	
	printf("위에서 출력된 내용들이 나온 후에\n");
	printf("사용자 계정의 패스워드를 입력하라는 메시지('Enter new UNIX password')와 \n");
	printf("재확인(Retype) 메시지가 나옵니다.\n\n");
	next_line();
	
	printf("[실습] 패스워드를 'BoB-Linux'로 설정하세요.\n");
	next_line();
	
	fake_command("BoB-Linux", "Enter new UNIX password: ");
	fake_command("BoB-Linux", "Retype new UNIX password: ");
	printf("passwd: password updated successfully\n");
	next_line();

	printf("패스워드를 입력한 후에는 패스워드가 성공적으로 업데이트 되었다는 메시지 후에 \n");
	printf("user1의 정보를 입력하라는 메시지가 나옵니다.\n");
	next_line();
	
	printf("이 정보들은 선택사항이며, 여러 가지 정보를 입력할 수 있습니다.\n\n");
	next_line();
	
	printf("[실습] 아무 정보나 입력해보세요.\n");
	next_line();
	
	printf("Changing the user information for user1\nEnter the new value, or press ENTER for the default\n");
	usleep(3000);
	
	char tmp_buf[40];
	printf("	Full Name []: ");
	fgets(tmp_buf, 30, stdin);
	printf("	Room Number []: ");
	fgets(tmp_buf, 30, stdin);
	printf("	Work Phone []: ");
	fgets(tmp_buf, 30, stdin);
	printf("	Home Phone []: ");
	fgets(tmp_buf, 30, stdin);
	printf("	Other []: ");
	fgets(tmp_buf, 30, stdin);
	
	printf("\n\n마지막으로는 입력한 정보가 맞는지 확인하는 메시지가 출력됩니다. Y를 입력하세요.\n");
	next_line();
	fake_command("Y","Is the information correct? [Y/n] ");

	printf("위에서는 입력값을 Y로 제한했지만, 원래는 Y를 입력하지 않고,\n");
	printf("n을 입력한다면 다시 정보들을 입력받게 됩니다.\n");
	next_line();

	system("clear");
	printf("\"adduser\"의 자주 쓰이는 옵션은 다음과 같습니다.\n\n");
	printf("  [ -u ] : 사용자 계정의 UID를 지정하여 생성합니다.\n");
	printf("           앞에서는 이 옵션을 주지 않아 UID가 자동 할당 되었습니다.\n\n");
	
	printf("  [ -g ] : 사용자 계정의 GID를 지정합니다. \n");
	printf("           앞에서는 이 옵션을 주지 않아 UID가 자동 할당 되었습니다.\n\n");
	
	printf("  [ -d ] : 사용자의 홈 디렉토리를 지정합니다.\n");
	printf("           이 옵션을 주지 않으면 '/home/[사용자 계정명]' 디렉토리로 지정됩니다.\n\n");
	
	printf("  [ -e ] : 사용자의 계정 만기일을 지정합니다.\n\n");
	next_line();
	
	system("clear");
	printf("계정을 생성하는 방법을 알았으니, 삭제하는 방법도 알아야 할 것입니다.\n");
	printf("\"userdel\" 명령어는 간단하게 사용자 계정을 삭제할 수 있습니다.\n");
	next_line();
	
	printf("사용법은 : \"userdel [옵션] [삭제할 계정명]\"입니다.\n");
	printf("ex) sudo userdel user1\n");
	next_line();
	
	printf("'-r' 옵션을 추가하면 삭제할 때 해당 사용자의 홈 디렉토리까지 삭제합니다.\n");
	next_line();

	printf("위에서 생성한 'user1'은 뒷 부분에서 사용할 것이기 때문에 지우지 않고 진행하곘습니다.\n");
	next_line();
	
	system("clear");
	printf("다음으로는 존재하는 계정을 변경하는 명령어인 \"usermod\"입니다.\n");
	printf("\"usermod\" 명령어는 다른 옵션과 함께 사용됩니다.\n");
	next_line();
	
	printf("여러 옵션이 존재하기 때문에 자주 쓰이는 옵션 위주로 설명하겠습니다.\n");
	next_line();
	
	printf("먼저 '-l' 옵션은 기존에 존재하는 계정 이름을 새로운 이름으로 바꿀 때 사용합니다.\n");
	next_line();
	
	printf("사용법은 : \"sudo usermod -l [새로운 계정명] [기존 계정명]\"입니다.\n");
	next_line();
	
	printf("보통 계정 이름에 따라 홈 디렉토리가 변경되므로,\n");
	printf("'-l' 옵션을 이용해 계정명을 변경할 때는 홈 디렉토리도 함께 변경하는 것이 좋습니다.\n");
	next_line();
	
	printf("따라서 '-l' 옵션은 홈 디렉토리를 변경하는 옵션인 '-d' 옵션\n");
	printf("기존 홈 디렉토리의 파일과 디렉토리를 옮겨주는 옵션인 '-m'과 함께 자주 사용합니다.\n");
	next_line();
	
	printf("'-l' '-d' '-m' 옵션을 함께 사용하는 방법은 아래와 같습니다.\n");
	next_line();
	printf("사용법 : \"sudo usermod -l [새로운 계정명] -d [새로운 홈 디렉토리] -m [기존 계정명]\"\n");
	printf("ex) sudo usermod -l new_user -d /home/new_user -m user1\n");
	next_line();
	
	printf("-g 옵션은 사용자가 속한 그룹을 변경합니다.\n");
	printf("-G 옵션은 사용자가 본래 속한 그룹을 그대로 두고, 새로운 그룹에 추가로 속하게 합니다.\n");
	next_line();
	printf("참고로 리눅스에서는 하나의 사용자가 여러 가지 그룹에 속하는 것이 가능합니다.\n");
	next_line();
	
	system("clear");
	printf("계정을 생성, 변경, 삭제하는 방법을 익혔습니다.\n");
	next_line();
	printf("다음으로는 계정의 패스워드를 관리하는 passwd 명령어 입니다.\n");
	printf("\"passwd\" 명령어는 계정의 패스워드와 관련된 명령어입니다.\n");
	next_line();
	
	printf("기본적인 사용법은 아무런 옵션도 주지 않고 사용하는 것입니다.\n");
	printf("사용법 : \"passwd\"\n");
	next_line();
	
	printf("해당 명령어를 입력하면 현재 로그인 된 사용자의 패스워드를 변경하게 됩니다.\n");
	printf("이 때 현재 로그인된 사용자의 패스워드를 알고 있어야 패스워드를 변경할 수 있습니다.\n");
	next_line();

	printf("\"passwd\" 명령어는 옵션을 주어 사용하기도 합니다.\n");
	printf("주로 여러 계정을 관리하는 관리자(root)에 의해서 \"passwd\" 명령어가 수행됩니다.\n");
	next_line();
	
	printf("옵션과 함께 사용할 때 기본 문법은 다음과 같습니다.\n");
	printf("사용법 : \"sudo passwd [옵션] [사용자 계정명]\"\n");
	printf("ex) sudo passwd user1\n");
	next_line();

	printf("옵션을 주지 않고 \"passwd\" [사용자 계정]으로 사용하면\n");
	printf("[사용자 계정]에 해당하는 계정의 패스워드를 변경할 수 있습니다.\n");
	next_line();
	
	printf("위에서 언급했듯, \"passwd\" 명령어는 보통 'root' 계정에 의해 수행됩니다.\n");
	next_line();
	
	printf("루트 권한이 없는 일반 사용자는 \"passwd\" 명령어를 \n");
	printf("자신의 계정 패스워드를 변경하는 용도로 밖에 사용하지 못합니다.\n");
	next_line();
	
	printf("'root' 계정은 관리자 계정이기 때문에\n");
	printf("다른 사용자의 패스워드와 다양한 설정을 변경할 수 있습니다.\n");
	next_line();
	
	printf("이렇듯, 'root' 계정은 다른 사용자에 비해 막강한 권한을 가지고 있기 때문에\n");
	printf("'root' 계정이 유출되서는 안되는 것입니다.\n");
	next_line();
	
	printf("다시 \"passwd\" 명령어로 돌아와서,\n");
	printf("사용자의 정보을 보기 위해서는 '-S'(status의 약자) 옵션을 사용합니다.\n\n");
	next_line();
	
	printf("[실습] \"passwd\" 명령어와 '-S' 옵션을 이용해\n");
	printf("앞에서 생성한 'user1' 계정의 정보를 확인해보세요.\n");
	printf("사용법은 : \"sudo passwd [옵션] [사용자 계정명]\"입니다.\n");
	nothing_print_fake_run_command("sudo passwd -S user1");

	// 현재 날짜를 출력하기 위한 코드
	// 위에서 user1이라는 계정을 생성한 것처럼 보이도록 했으므로, 최근 패스워드 변경 날짜는 오늘이 됨
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	
	system("clear");
	printf("user1 P %02d/%02d/%d 0 99999 7 -1", tm.tm_mon+1, tm.tm_mday, tm.tm_year+1900);
	printf("\n\n출력 결과는 총 7개의 필드로 나누어집니다.\n");
	next_line();
	
	printf("[1번째 필드]\n");
	printf("'user1'에 해당하며 계정의 이름을 표시합니다.\n\n");
	next_line();
	
	printf("[2번째 필드]\n");
	printf("'P'에 해당하며 패스워드의 상태를 나타냅니다.\n");
	printf("패스워드 잠김은 'L', 패스워드 없음은 'NP', 사용 가능한 패스워드는 'P'로 표시됩니다.\n\n");
	next_line();
	
	printf("[3번째 필드]\n");
	printf("'%02d/%02d/%d'에 해당하며 가장 최근의 패스워드 변경 일자(MM/DD/YYYY)를 표시합니다.\n\n", tm.tm_mon+1, tm.tm_mday, tm.tm_year+1900);
	next_line();
	
	printf("[4번째 필드]\n");
	printf("'0'에 해당하며 패스워드 변경까지 최소 일자를 나타냅니다.\n\n");
	next_line();
	
	printf("만약 해당 필드가 '5'로 되어 있다면, 패스워드를 변경한 후\n");
	printf("5일간은 다시 패스워드를 변경하지 못합니다.\n");
	next_line();
	
	printf("[5번째 필드]\n");
	printf("'99999'에 해당하며 패스워드 변경까지 최대 일자를 나타냅니다.\n\n");
	next_line();
	
	printf("만약 해당 필드가 '30'으로 되어 있다면,\n");
	printf("패스워드 변경을 한 지 30일이 지난 후에 패스워드가 만료됩니다.\n");
	next_line();
	
	printf("6번째 필드]\n");
	printf("'7'에 해당하며 패스워드 만료를 알리는 경고 기간을 표시합니다.\n");
	printf("'7'이라고 되어 있다면 패스워드 만료 기간 7일 전에 경고 메시지를 출력해줍니다.\n\n");
	next_line();
	
	printf("7번째 필드]\n");
	printf("'-1'에 해당하며 패스워드가 만료되고 패스워드가 잠기기까지의 유예기간을 표시합니다.\n\n");
	next_line();
	
	printf("패스워드 만료 기간이 지난 후 해당 기간이 지나면\n");
	printf("패스워드의 상태는 잠김(Lock)상태가 됩니다.\n");
	next_line();
	
	system("clear");
	printf("이외의 옵션은 다음과 같습니다.\n\n");
	printf("  [ -a 옵션 ] : -S 옵션과 같이 쓰이는 옵션으로, 'all'을 의미하며 \n");
	printf("               모든 사용자에 대한 passwd -S 명령어를 실행합니다.\n\n");
	printf("  [ -l 옵션 ] : 사용자의 패스워드를 잠김(Lock) 상태로 만들어 로그인을 막습니다.\n\n");
	printf("  [ -d 옵션 ] : 사용자의 패스워드를 제거합니다.\n");
	printf("                패스워드가 제거된 계정은 패스워드 없이 로그인이 가능합니다.\n\n");
	next_line();
	
	printf("위에서 살펴본 것 처럼 사용자를 관리하는 명령어는\n");
	printf("해당 시스템에 속해 있는 계정을 마음대로 삭제하거나 패스워드를 변경할 수 있습니다.\n");
	next_line();
	
	printf("'root' 권한으로만 사용자 관리 명령어를 사용할 수 있는 이유는 바로 이것 때문입니다.\n");
	next_line();

	printf("마지막으로 지금까지 실습에 이용했던 'user1' 계정을 삭제하겠습니다.\n\n");
	next_line();
	
	printf("[실습] '-r' 옵션을 이용해서 'user1'의 홈 디렉토리와 계정을 삭제하세요.\n");
	printf("사용법 : \"sudo userdel [옵션] [삭제할 계정명]\"\n");
	printf("ex) sudo userdel -r user1\n");
	fake_run_command("sudo userdel -r user1");
	
	printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
	printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
	printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
	next_line();
	
	printf("계정 관리 명령어 학습이 끝났습니다.\n");
	printf("고생하셨습니다.\n");

	// Delete default directory
	delete_defdir();
}
