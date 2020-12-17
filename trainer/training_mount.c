#include "func.h"

void training_mount()
{
	create_defdir();
	system("clear");

	printf("이번에 학습할 명령어는 \"mount\" 입니다.\n\n");
	printf("\"mount\" 명령어는 장치와 파일시스템을 연결하는 역할을 합니다.\n");
	next_line();
	
	printf("\"mount\" 명령어의 실행 파일은 \"/usr/bin/mount\"(으)로 있습니다.\n");
	next_line();
	
	printf("기본적인 사용법은 : \"mount [옵션]\"입니다.\n");
	printf("ex) mount -l\n");
	next_line();
	
	printf("리눅스에서는 많은 것이 파일로 다뤄집니다.\n");
	printf("디스크 장치 또한 예외가 아닙니다.\n");
	next_line();
	
	printf("이 디스크 장치를 사용하기 위해서 장치 파일과 디렉토리와 \n");
	printf("연결(mount)해주는 명령어가 \"mount\" 명령어 입니다.\n\n");
	next_line();
	
	printf("[실습] \"mount -l\" 을 입력하여 현재 마운트 목록을 살펴보세요.\n");
	
	nothing_print_fake_run_command("mount -l");
	printf("마운트 목록의 일부분만 출력해드리겠습니다.\n\n");
	printf("sysfs on /sys type sysfs (rw,nosuid,nodev,noexec,relatime)\n");
	printf("proc on /proc type proc (rw,nosuid,nodev,noexec,relatime)\n");
	printf("udev on /dev type devtmpfs (rw,nosuid,noexec,relatime,size=1986708k,nr_inodes=496677,mode=755)\n");
	printf("devpts on /dev/pts type devpts (rw,nosuid,noexec,relatime,gid=5,mode=620,ptmxmode=000)\n");
	printf("tmpfs on /run type tmpfs (rw,nosuid,nodev,noexec,relatime,size=403024k,mode=755)\n");
	printf("/dev/sda1 on / type ext4 (rw,relatime)\n");
	printf("\n\n많은 정보가 출력되었습니다.\n");
	printf("마지막에 출력된 '/dev/sda1 ...'을 예시로 말씀드리겠습니다.\n");
	next_line();
	
	printf("[/dev/sda1] 과 같이 앞 쪽은 장치를 나타냅니다.\n");
	next_line();
	
	printf("on 뒤의 [/] 는 마운트 된 디렉토리를 나타냅니다.\n");
	next_line();
	
	printf("type 뒤 [ext4]는 파일시스템을 나타냅니다.\n");
	next_line();
	
	printf("괄호 안의 내용들은 해당 장치의 속성을 나타냅니다.\n\n");
	next_line();
	
	printf("사용법은 : \"mount [옵션] [마운트할 디바이스] [연결할 디렉토리]\" 입니다.\n\n");
	next_line();
	
	printf("\"mount\" 명령어의 자주 쓰는 옵션은 아래와 같습니다.\n\n");
	printf("  [ -r ] : 읽기 전용으로 마운트\n\n");
	printf("  [ -w ] : 읽기/쓰기로 마운트\n\n");
	printf("  [ -t ] : 파일 시스템의 형식을 지정\n\n");
	next_line();
	
	printf("\"mount\"와 관련된 명령어로는 \"umount\"가 있습니다.\n");
	printf("\"umount\" 명령어는 마운트를 해제하는 명령어 입니다.\n");
	next_line();
	
	printf("\"mount\" 명령어는 실제 장치를 시스템에 인식시키는 용도로 사용되기 때문에\n");
	printf("실제로 장치를 인식시키며 연습해보셔야 합니다.\n");
	next_line();
	
	printf("보통 CD-ROM이나 파일 시스템, iso 등을 마운트합니다.\n");
	next_line();
	
	printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
	printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
	printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
	next_line();
	
	printf("\"mount\" 명령어의 학습이 끝났습니다.\n");
	printf("고생하셨습니다.\n");

	delete_defdir();
}
