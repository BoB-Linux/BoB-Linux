#include "func.h"

extern char def_dir[DIR_SIZE];
extern char rst_dir[DIR_SIZE + 10];
extern char rm_dir[DIR_SIZE + 10];

void create_defdir(void)
{
	struct passwd *pwd;
	pwd = getpwuid(getuid());
	snprintf(def_dir, sizeof(def_dir), "/home/%s/tr", pwd->pw_name);

	/* 클라우드 트레이너 전용(여러 사용자가 이용 시 디렉토리 경로 설정) : 11번 라인 삭제 후 활성화
	int i = 0;

        for(i=0; i<=99; i++)
        {
                snprintf(def_dir, sizeof(def_dir), "/home/%s/tr/%d", pwd->pw_name, i);
                if(access(def_dir, 0) == 0)
                        continue;
                else
                        break;
			
		if(i == 99)
		{
			system("rm -rf /home/trainer/tr");
		}
        }
	*/
	
	snprintf(rst_dir, sizeof(rst_dir), "rm -rf %s", def_dir);
	system(rst_dir);
	strncpy(rm_dir, rst_dir, sizeof(rm_dir));

	snprintf(rst_dir, sizeof(rst_dir), "mkdir -p %s", def_dir);
	system(rst_dir);

	chdir(def_dir);
}
