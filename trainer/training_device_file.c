#include "func.h"

void training_device_file(void)
{
	system("clear");

	//리눅스 장치의 파일화
	printf("[리눅스, 장치의 파일화]\n\n");

	printf("보통 장치라고 한다면 아래의 것들을 명칭합니다.\n");
	printf("하드디스크, 키보드, 프린트, 모니터 등 시스템에 설치된 여러가지 하드웨어적 자원.\n");
	next_line();

	printf("리눅스에서는 위의 하드웨어적 자원들을 모두 파일화하여 관리하고 사용합니다.\n");
	next_line();

	printf("따라서 특정 하드웨어에게 명령을 수행하려면\n");
	printf("해당하는 장치 파일에 명령을 내리면 되는 것입니다.\n");
	next_line();

	printf("일반적인 장치 파일 접두사에는 다음과 같은 것들이 있습니다.\n\n");
	printf("  [ cdrom ] : CD, DVD-ROM 드라이브.\n\n");
	printf("  [ fd ]    : 플로피 디스크 드라이브.\n\n");
	printf("  [ hd ]    : 하드 드라이브 또는 CD-ROM과 같은 IDE로 연결된 장치.\n\n");
	printf("  [ md ]    : 하드 드라이브와 같은 메타 디스크와 RAID 장치.\n\n");
	printf("  [ ram ]   : RAM 디스크.\n\n");
	printf("  [ sd ]    : SCSI로 연결된 대용량 저장 장치.\n\n");
	printf("  [ usb ]   : USB로 연결된 장치.\n\n");
	next_line();

	printf("리눅스에서 \"/dev\" 디렉토리가 존재합니다.\n");
	next_line();

	printf("\"/dev\" 디렉토리는 노드(node)라는 요소를 포함하고 있으며\n");
	printf("각 노드들은 각각의 장치들을 가리킵니다.\n");
	next_line();

	system("clear");
	printf("[가상 메모리]\n\n");
	printf("하드디스크의 일부를 메모리처럼 사용하는 것을 의미합니다.\n\n");
	printf("리눅스에서 가상 메모리라는 영역을 \"스왑\" 또는 \"스왑 영역\" 이라고 부릅니다.\n\n\n");
	next_line();

	printf("[스왑핑]\n\n");
	printf("메모리와 하드디스크 사이의 데이터 교환을 의미합니다.\n\n");
	printf("스왑 용량을 확인하려면 메모리 확인 명령어인 \"free\"를 사용해야 합니다.\n");
	next_line();
}
