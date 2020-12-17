#include "func.h"

void training_linux_basic(void)
{
    create_defdir();
    system("clear");
    
    char menu[20] = "";
    printf("환영합니다.\n\n");
    printf("리눅스 기본 지식 트레이닝입니다.\n");
    printf("리눅스에 대한 여러 가지 기본 사항들을 익힐 수 있습니다.\n\n\n");
    
    next_line();
    while (1)
    {
        printf("1 : 리눅스란 무엇인가\n");
	printf("2 : 리눅스 배포판과 종류\n");
	printf("3 : 리눅스의 필요성\n");
	printf("4 : 리눅스의 기본 디렉토리들\n");
	printf("5 : 리눅스, 장치의 파일화\n");
	printf("6 : 가상 콘솔\n");
	printf("7 : 프로세스와 ID\n");
	printf("q : 종료(quit)\n\n");
	printf("실행할 학습을 선택하세요 : ");

        fgets(menu, sizeof(menu), stdin);

        // 나머지 입력 값 제거
        menu[strlen(menu) - 1] = '\0';

        // 입력값 검증 부분
        if (!strncmp(menu, "1", strlen("1")) && strlen(menu) == strlen("1"))
        {
            training_whatislinux();
            next_quit();
        }
        else if (!strncmp(menu, "2", strlen("2")) && strlen(menu) == strlen("2"))
        {
            training_linux_distro();
            next_quit();
        }    
        else if (!strncmp(menu, "3", strlen("3")) && strlen(menu) == strlen("3"))
        {
            training_whyneedlinux();
            next_quit();
        }
        else if (!strncmp(menu, "4", strlen("4")) && strlen(menu) == strlen("4"))
        {
            training_linux_defdir();
            next_quit();
        }
        else if (!strncmp(menu, "5", strlen("5")) && strlen(menu) == strlen("5"))
        {
            training_device_file();
            next_quit();
        }
        else if (!strncmp(menu, "6", strlen("6")) && strlen(menu) == strlen("6"))
        {
            training_virtual_console();
            next_quit();
        }
        else if (!strncmp(menu, "7", strlen("7")) && strlen(menu) == strlen("7"))
        {
            training_process_id();
            next_quit();
        }
        else if ( (!strncmp(menu, "q", strlen("q")) && strlen(menu) == strlen("q")) || (!strncmp(menu, "Q", strlen("Q")) && strlen(menu) == strlen("Q")) )
        {
            break;
        }
        else
        {
            system("clear");
            printf("잘못된 입력입니다. 다시 입력해주세요.\n\n");
        }
    }
    system("clear");
    
    /*
    printf("이상으로 리눅스 기본 지식 Part가 끝났습니다.\n\n");
    
    printf("이 트레이닝에서 배운 것만으로는 많이 부족할 것입니다.\n");
    printf("추후에 꼭 구글에 검색을 해보시거나 서적 등을 통해 더 많이 공부하시길 바랍니다.\n\n");
    */
    printf("리눅스 기본 지식 트레이닝을 종료합니다.\n");
    printf("고생하셨습니다.\n");
    
    delete_defdir();
}
