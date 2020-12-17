#include "func.h"

int convert_name(char select[])
{
    // 김기서 
    if (!strncmp(select, "file", strlen("file")) && strlen(select) == strlen("file"))
        training_file();
    else if (!strncmp(select, "find", strlen("find")) && strlen(select) == strlen("find"))
        training_find();
    else if (!strncmp(select, "history", strlen("history")) && strlen(select) == strlen("history"))
        training_history();
    else if (!strncmp(select, "make", strlen("make")) && strlen(select) == strlen("make"))
        training_make();
    else if (!strncmp(select, "more", strlen("more")) && strlen(select) == strlen("more"))
        training_more_less();
    else if (!strncmp(select, "mount", strlen("mount")) && strlen(select) == strlen("mount"))
        training_mount();
    else if (!strncmp(select, "sort", strlen("sort")) && strlen(select) == strlen("sort"))
        training_sort();
    else if (!strncmp(select, "tar", strlen("tar")) && strlen(select) == strlen("tar"))
        training_tar();
    else if (!strncmp(select, "umask", strlen("umask")) && strlen(select) == strlen("umask"))
        training_umask();
    else if (!strncmp(select, "uname", strlen("uname")) && strlen(select) == strlen("uname"))
        training_uname();

    // 김청준
    else if (!strncmp(select, "curl", strlen("curl")) && strlen(select) == strlen("curl"))
        training_curl();
    else if (!strncmp(select, "group", strlen("group")) && strlen(select) == strlen("group"))
        training_group();
    else if (!strncmp(select, "head", strlen("head")) && strlen(select) == strlen("head"))
        training_head_tail();
    else if (!strncmp(select, "lsblk", strlen("lsblk")) && strlen(select) == strlen("lsblk"))
        training_lsblk();
    else if (!strncmp(select, "mkfs", strlen("mkfs")) && strlen(select) == strlen("mkfs"))
        training_mkfs();
    else if (!strncmp(select, "ping", strlen("ping")) && strlen(select) == strlen("ping"))
        training_ping();
    else if (!strncmp(select, "sed", strlen("sed")) && strlen(select) == strlen("sed"))
        training_sed();
    else if (!strncmp(select, "user", strlen("user")) && strlen(select) == strlen("user"))
        training_user_passwd();

    // 노무승
    else if (!strncmp(select, "fsck", strlen("fsck")) && strlen(select) == strlen("fsck"))
        training_fsck();
    else if (!strncmp(select, "halt", strlen("halt")) && strlen(select) == strlen("halt"))
        training_halt();
    else if (!strncmp(select, "ifconfig", strlen("ifconfig")) && strlen(select) == strlen("ifconfig"))
        training_ifconfig();
    else if (!strncmp(select, "init", strlen("init")) && strlen(select) == strlen("init"))
        training_init();
    else if (!strncmp(select, "kill", strlen("kill")) && strlen(select) == strlen("kill"))
        training_kill();
    else if (!strncmp(select, "nano", strlen("nano")) && strlen(select) == strlen("nano"))
        training_nano();
    else if (!strncmp(select, "netstat", strlen("netstat")) && strlen(select) == strlen("netstat"))
        training_netstat();
    else if (!strncmp(select, "poweroff", strlen("poweroff")) && strlen(select) == strlen("poweroff"))
        training_poweroff();
    else if (!strncmp(select, "reboot", strlen("reboot")) && strlen(select) == strlen("reboot"))
        training_reboot();
    else if (!strncmp(select, "runlevel", strlen("runlevel")) && strlen(select) == strlen("runlevel"))
        training_runlevel();
    else if (!strncmp(select, "shutdown", strlen("shutdown")) && strlen(select) == strlen("shutdown"))
        training_shutdown();
    else if (!strncmp(select, "su", strlen("su")) && strlen(select) == strlen("su"))
        training_su();
    else if (!strncmp(select, "sudo", strlen("sudo")) && strlen(select) == strlen("sudo"))
        training_sudo();
    else if (!strncmp(select, "top", strlen("top")) && strlen(select) == strlen("top"))
        training_top();
    else if (!strncmp(select, "wget", strlen("wget")) && strlen(select) == strlen("wget"))
        training_wget();

    // 백송선
    else if (!strncmp(select, "alias", strlen("alias")) && strlen(select) == strlen("alias"))
        training_alias();
    else if (!strncmp(select, "apt", strlen("apt")) && strlen(select) == strlen("apt"))
        training_apt();
    else if (!strncmp(select, "chsh", strlen("chsh")) && strlen(select) == strlen("chsh"))
        training_chsh();
    else if (!strncmp(select, "cmp", strlen("cmp")) && strlen(select) == strlen("cmp"))
        training_cmp();
    else if (!strncmp(select, "comm", strlen("comm")) && strlen(select) == strlen("comm"))
        training_comm();
    else if (!strncmp(select, "diff", strlen("diff")) && strlen(select) == strlen("diff"))
        training_diff();
    else if (!strncmp(select, "grep", strlen("grep")) && strlen(select) == strlen("grep"))
        training_grep();
    else if (!strncmp(select, "locate", strlen("locate")) && strlen(select) == strlen("locate"))
        training_locate();
    else if (!strncmp(select, "man", strlen("man")) && strlen(select) == strlen("man"))
        training_man();
    else if (!strncmp(select, "pipe", strlen("pipe")) && strlen(select) == strlen("pipe"))
        training_pipe();
    else if (!strncmp(select, "ps", strlen("ps")) && strlen(select) == strlen("ps"))
        training_ps();
    else if (!strncmp(select, "vi", strlen("vi")) && strlen(select) == strlen("vi"))
        training_vi();
    else if (!strncmp(select, "whereis", strlen("whereis")) && strlen(select) == strlen("whereis"))
        training_whereis();
    else if (!strncmp(select, "which", strlen("which")) && strlen(select) == strlen("which"))
        training_which();

    // 이안나
    else if (!strncmp(select, "chmod", strlen("chmod")) && strlen(select) == strlen("chmod"))
        training_chmod();
    else if (!strncmp(select, "chown", strlen("chown")) && strlen(select) == strlen("chown"))
        training_chown();
    else if (!strncmp(select, "chroot", strlen("chroot")) && strlen(select) == strlen("chroot"))
        training_chroot();
    else if (!strncmp(select, "dd", strlen("dd")) && strlen(select) == strlen("dd"))
        training_dd();
    else if (!strncmp(select, "echo", strlen("echo")) && strlen(select) == strlen("echo"))
        training_echo();
    else if (!strncmp(select, "env", strlen("env")) && strlen(select) == strlen("env"))
        training_env();
    else if (!strncmp(select, "export", strlen("export")) && strlen(select) == strlen("export"))
        training_export();
    else if (!strncmp(select, "git", strlen("git")) && strlen(select) == strlen("git"))
        training_git();
    else if (!strncmp(select, "ln", strlen("ln")) && strlen(select) == strlen("ln"))
        training_ln();
    else if (!strncmp(select, "redirection", strlen("redirection")) && strlen(select) == strlen("redirection"))
        training_redirection();  
    else if (!strncmp(select, "set", strlen("set")) && strlen(select) == strlen("set"))
        training_set_unset();
    else if (!strncmp(select, "users", strlen("users")) && strlen(select) == strlen("users"))
        training_users();
    
    else if (!strncmp(select, "bg", strlen("bg")) && strlen(select) == strlen("bg"))
        training_bg_fg_jobs();
    else if (!strncmp(select, "ssh", strlen("ssh")) && strlen(select) == strlen("ssh"))
        training_ssh();
    else if (!strncmp(select, "sftp", strlen("sftp")) && strlen(select) == strlen("sftp"))
        training_sftp();
    else
    {
        printf("\n잘못된 값을 입력하셨습니다.\n");
        return -1;
    }
    return 0;

}
