#include "func.h"

char def_dir[DIR_SIZE];	
char rst_dir[DIR_SIZE + 10];	
char rm_dir[DIR_SIZE + 10];

int main()
{
    system("clear");
    print_banner();

    training_intro();

    select_menu();
    
    printf("\n[트레이너를 종료합니다]\n\n");
    printf("[Enter]를 입력하세요.\n");
    next_line();
    
    return 0;
}
