#include "func.h"

void advanced_trainer()
{
    system("clear");
    printf("응용 명령어 학습입니다.\n\n");
    printf("해당 커리큘럼에선 보안을 위해 리눅스를 사용할 때 응용할 수 있는 명령어를 학습합니다.\n\n");
    printf("다음에 출력되는 목록에 따라 원하는 명령어를 선택하여 학습할 수 있습니다.\n");
    next_line();
    
    char select[20];
    while (1)
    {   
        system("clear");
        printf("명령어 목록입니다.\n\n");
        printf("입력 방법 : [23. head](+tail) -> '23' 또는 'head' 입력\n\n");
        printf(" [1. alias] \t\t [2. apt] \t\t [3. bg](+fg, jobs) \n [4. chmod] \t\t [5. chown] \t\t [6. chroot] \n [7. chsh] \t\t [8. cmp] \t\t [9. comm] \n [10. curl]\t\t");
        
        printf(" [11. dd] \t\t [12. diff] \n [13. echo] \t\t [14. env] \t\t [15. export] \n [16. file] \t\t [17. find] \t\t [18. fsck] \n [19. git] \t\t [20. grep] \t\t");

        printf(" [21. group] \n [22. halt] \t\t [23. head](+tail) \t [24. history] \n [25. ifconfig] \t [26. init] \t\t [27. kill] \n [28. ln] \t\t [29. locate] \t\t [30. lsblk] \n [31. make] \t\t [32. man] \t\t [33. mkfs] \n [34. more](+less) \t");
        
        printf(" [35. mount] \t\t [36. nano] \n [37. netstat] \t\t [38. ping] \t\t [39. pipe] \n [40. poweroff] \t [41. ps] \t\t [42. reboot] \n [43. redirection] \t [44. runlevel] \t [45. sed] \n [46. set](+unset) \t [47. sftp] \t\t [48. shutdown] \n");
        
        printf(" [49. sort] \t\t [50. ssh] \t\t [51. su] \n [52. sudo] \t\t [53. tar] \t\t [54. top] \n [55. umask] \t\t [56. uname] \t\t [57. user](+관련 명령어) \n [58. users] \t\t [59. vi] \t\t [60. wget] \n [61. whereis] \t\t [62. which] \n [q. 종료]\n");

        printf("\n명령어의 번호 또는 이름을 입력하세요 : ");

        int status_code = 1;
        fgets(select, sizeof(select), stdin);
        select[strlen(select) - 1] = '\0';
        /* 첫번째 인덱스의 값이 아스키 코드로 49~57 사이면 숫자로 판단 각 번호에 있는 명령어 시작. 판별하는 switch문은 따로 함수 구성 */
        /* 입력 값이 'q' 또는 'Q'라면 종료 */
        /* 그 외에는 문자열로 판단 if else 문을 이용해 해당하는 함수 실행*/
        if (select[0] >= 49 && select[0] <= 57)
        {
            status_code = call_training(select);
        }
        else if (select[0] == 'q' || select[0] == 'Q')
            break;
        else
        {
            status_code = convert_name(select);
        }

        if (status_code == -1)
        {
            printf("[Enter]를 입력한 후 올바른 값을 다시 입력해주세요.\n");
            next_line();
        }
        else 
            next_quit();
    }
    printf("응용 명령어 학습이 종료되었습니다.\n고생하셨습니다.\n");
}
