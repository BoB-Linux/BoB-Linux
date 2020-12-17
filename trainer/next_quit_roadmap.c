#include "func.h"

void next_quit_roadmap(void)
{
        char select[CMD_SIZE];
        printf("\n다음 로드맵 트레이닝을 진행하시려면 [Enter]를, 종료하시려면 [q]를 입력하세요.\n");
        fgets(select, sizeof(select), stdin);
        select[strlen(select)-1] = '\0';
        if (!strncmp(select, "q", 1) && strlen(select) == 1)
        {
                exit(0);
        }
        else
        {
                return;
        }
}
