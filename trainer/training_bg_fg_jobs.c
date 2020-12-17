#include "func.h"

void training_bg_fg_jobs(void)
{
	create_defdir();

	system("clear");

	printf("이번에 학습할 명령어는 \"bg\"와 \"fg\" 그리고 \"jobs\" 입니다.\n\n");

	printf("리눅스는 멀티태스킹 시스템이므로 리눅스의 모든 프로세스는\n");
	printf("백그라운드 혹은 포그라운드 둘 중 하나의 모드로 동작합니다.\n");
	next_line();

	printf("또한 몇몇 프로세스는 자동으로 백그라운드로 실행되기도 합니다.\n");
	next_line();

	printf("사용자가 흔히 터미널이나 콘솔 창에서 명령을 입력하면\n");
	printf("그 명령은 포그라운드로 실행됩니다.\n");
	next_line();

	printf("백그라운드와 포그라운드의 유용한 점은\n");
	printf("포그라운드에서의 작업 진행 시간이 오래 걸릴 때\n");
	printf("해당 작업을 백그라운드에서 진행되게 하고 포그라운드에서는 다른 작업을 할 수 있습니다.\n");
	next_line();

	printf("예를 들면 어떠한 파일을 원격지 서버로부터 다운로드하면서\n");
	printf("어떠한 문서를 작성해야 할 때 백그라운드와 포그라운드 기능을 활용할 수 있습니다.\n");
	next_line();

	printf("백그라운드에서는 원격지 서버로부터 파일을 다운로드하는 작업을 실행하고\n");
	printf("포그라운드에서는 어떠한 문서를 작성하면됩니다.\n");
	next_line();

	printf("\"jobs\" 명령어를 이용하면 자기 자신이 실행 시킨 프로세스 리스트와\n");
	printf("프로세스 앞에 순서를 함께 출력해주는데, 여기서 백그라운드 작업도 볼 수 있습니다.\n");
	next_line();


	printf("어떠한 작업을 백그라운드 또는 포그라운드로 전환할 때\n");
	printf("\"bg\" 명령어와 \"fg\" 명령어를 사용하지만\n");
	printf("\"bg\" 명령어 대신 '&' 기호를 사용해도 됩니다.\n");
	next_line();

	printf("'&' 기호를 실행하고자 하는 명령어 뒤에 입력해주면 됩니다.\n\n");
	next_line();

	printf("[실습] \"sleep 100 &\"을 입력해보세요.\n");
	just_run_command("sleep 100 &");
	
	printf("\n\n위의 \"sleep 100\" 명령은\n");
	printf("100초 동안 잠시 멈춘것과 같은 효과가 나타납니다.\n");
	next_line();

	printf("방금 실행한 명령은 백그라운드에서 동작했기 때문에\n");
	printf("명령을 실행한 후 바로 프롬프트가 나타났습니다.\n");
	next_line();

	printf("만약 포그라운드에서 동작하도록 한다면\n");
	printf("100초 동안 다른 어떠한 동작도 할 수 없을 것입니다.\n");
	next_line();

	printf("위의 명령처럼 포그라운드에서의 작업 시간이 오래 걸리는 명령을\n");
	printf("포그라운드에서 실행하면 해당 작업이 완료될 때까지 멈춰있어야 할 것입니다.\n");
	next_line();

	printf("\"bg\" 명령어를 이용하여 백그라운드 작업으로 전환할 때는\n");
	printf("먼저 \"jobs\" 명령어를 통해 어떤 작업이 실행 중인지\n");
	printf("정지되었는지 완료되었는지를 확인하면 좋습니다.\n\n");
	next_line();

	printf("[실습] \"jobs\"를 입력해보세요.\n");
	nothing_print_fake_run_command("jobs");
	printf("\n[1]+ 실행중	sleep 100 &\n");

	printf("\n\n현재 어떤 프로세스들이 동작 중인지가 보여질 것입니다.\n");
	next_line();

	printf("또한 앞에는 [1]과 같이 숫자가 적혀져 있을 것이고\n");
	printf("어떤 상태인지와 어떤 명령어를 실행했는지를 보여줍니다.\n");
	next_line();

	printf("\"bg\" 명령을 사용할 때는 해당 숫자를 이용하여 백그라운드로 전환할 수 있습니다.\n\n");
	next_line();

	printf("[실습] \"sleep 150\"을 입력해보세요.\n");
	nothing_print_fake_run_command("sleep 150");

	printf("\n\n위의 명령은 150초 동안 멈춘 것과 같은 효과를 포그라운드에서 실행하는 것입니다.\n");
	printf("(트레이닝에서는 학습 진행을 위해 적용되지 않습니다.\n\n");
	next_line();

	printf("[실습] \"jobs\" 명령을 통해 포그라운드에서 동작 중인 \"sleep\" 명령은\n");
	printf("몇 번째인지 확인해보세요.\n");
	nothing_print_fake_run_command("jobs");
	printf("\n[1]+ 실행중	sleep 100 &\n");
	printf("[2]+ 완료       sleep 150\n");
	
	printf("\n\n포그라운드에서 동작 중인 \"sleep\" 명령은 2번째 입니다.\n");
	next_line();

	printf("[실습] \"bg %%2\"(을)를 입력해보세요.\n");
	nothing_print_fake_run_command("bg %2");
	printf("[2]+ sleep 150 &\n");

	printf("\n\n이제 다시 \"jobs\" 명령어로 확인해보면\n");
	printf("아까 2번에 해당하는 명령이 백그라운드로 실행되고 있을 것입니다.\n\n");
	next_line();

	printf("[실습] \"jobs\"를 입력해보세요.\n");
	nothing_print_fake_run_command("jobs");
	printf("[1]+ 완료	sleep 100 &\n");
	printf("[2]+ 실행중 	sleep 150 &\n");

	printf("\n\n위의 출력 결과를 보면 상태 부분에 '실행중'이 보일 것입니다.\n");
	next_line();

	printf("백그라운드에서 동작 중이던 작업을 포그라운드로 전환하기 위해서는\n");
	printf("\"bg\" 명령어의 사용법과 같습니다.\n\n");
	next_line();

	printf("[실습] \"fg %%2\"(을)를 입력해보세요.\n");
	nothing_print_fake_run_command("fg %2");

	printf("\n\n\"bg\" 명령어에서처럼 숫자를 이용하여 백그라운드에서 동작 중인 작업을\n");
	printf("포그라운드로 전환할 수 있습니다.\n");
	next_line();

	printf("동작 중인 작업을 종료할 때는 \"Ctrl + c\"를 이용하면 되지만\n");
	printf("\"kill\" 명령어를 이용하여 종료할 수 있습니다.\n");
	next_line();

	printf("먼저 \"jobs\" 명령어로 종료하고자 하는 명령의 번호를 확인하고\n");
	printf("\"kill %%1\"과 같이 명령하면 동작 중인 명령은 종료됩니다.\n");
	next_line();

	printf("또한 포그라운드에서 \"Ctrl + z\"를 이용하면 동작 중인 작업을\n");
	printf("종료하는 것이 아닌, 일시 정지 할 수 있습니다.\n");
	next_line();

	printf("일시 정지 된 작업은 \"jobs\" 명령어로 확인할 수 있으며\n");
	printf("\"bg\" 혹은 \"fg\" 명령어와 일시 정지된 명령의 숫자를 조합하여 다시 실행할 수 있습니다.\n");
	printf("ex) fg %%1 혹은 bg %%1\n");
	next_line();

	printf("\"bg\"와 \"fg\" 그리고 \"jobs\" 명령어의 학습이 끝났습니다.\n");
	printf("고생하셨습니다.\n");
	next_line();


}
