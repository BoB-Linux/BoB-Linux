#include "func.h"

extern char def_dir[DIR_SIZE];
extern char rst_dir[DIR_SIZE + 10];
extern char rm_dir[DIR_SIZE + 10];

void delete_defdir(void)
{
    chdir(def_dir);
    chdir("..");
    system(rm_dir);
}
