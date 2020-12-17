#include "func.h"

void next_line(void)
{
    __fpurge(stdin);
    getchar();
    __fpurge(stdin);
}
