#include "func.h"

int run_command(char valid_cmd[]);
void next_quit();

void training_export(void)
{
	create_defdir();
	system("clear");
	//////////////////////////////////////////////////////////////////////////////////////////////////////

	printf("이번에 학습할 명령어는 \"export\" 입니다.\n\n");
	printf("\"export\"는 환경 변수를 지정 혹은 변경하거나\n");
    printf("이미 정의되어 있는 환경 변수를 보여줄 때 사용됩니다.\n");
	next_line();

    printf("\"export\"(으)로 이미 선언된 쉘 변수를 환경 변수로 변경해줄 때 자주 사용하며\n");
    printf("설정된 환경 변수는 전역 변수로 설정됩니다.\n");
    next_line();

	printf("사용법은 \" export [환경변수 이름]=\"[값]\" \" 또는\n");
    printf("\"export [환경변수 이름]\" 또는 \"export\" 입니다.\n\n");
    printf("ex) export test=\"helloworld\", export test\n\n");
	next_line();

    printf("주의할 점은 \" export [환경변수 이름]=\"[값]\" \"(을)를 사용할 때\n");
    printf("[환경변수 이름]과 '='(와)과 [값] 사이에 띄어쓰기는 없어야 합니다.\n");
    next_line();

    printf("\"export\"만 입력하여 실행할 경우,  현재 환경 변수 목록을 출력합니다.\n\n");
    next_line();

	printf("[실습] 'myVal=\"hello\"'(을)를 입력하여 'myVal'의 변수 명으로\n");
    printf("'hello' 라는 값을 저장하도록 선언해보세요.\n\n");
    printf("사용법 : [환경변수 이름]=\"[값]\"\n");
	nothing_print_fake_run_command("myVal=\"hello\"");

    printf("\n\n위의 실습으로 지정한 쉘 변수 \"myVal\"을 환경 변수로 변경해보겠습니다.\n\n");
    next_line();

    printf("[실습] \"export myVal\"(을)를 입력해보세요.\n");
    nothing_print_fake_run_command("export myVal");
    printf("\n\n잘 입력하셨다면, 환경 변수 \"myVal\"이 환경 변수 목록에 등록되었을 것입니다.\n\n");
    next_line();

    printf("환경 변수를 확인할 때는 \"echo\" 명령어를 이용하여 확인할 수 있습니다.\n\n");
    next_line();

    printf("[실습] \"echo $myVal\"(을) 입력하여 \"myVal\" 변수가 잘 선언되었는지 확인해보세요.\n");
    nothing_print_fake_run_command("echo $myVal");
    printf("\nhello\n");

    printf("\n\n잘 입력하셨다면, 'hello'가 출력되는 것을 확인하실 수 있을 것입니다.\n\n");
    next_line();

	printf("[실습] \"export\"(을)를 입력하면 현재 선언된 환경 변수들이 출력될 것 입니다.\n");
	nothing_print_fake_run_command("export");

	printf("declare -x CLUTTER_IM_MODULE=\"xim\"\ndeclare -x COLORTERM=\"truecolor\"\ndeclare -x DBUS_SESSION_BUS_ADDRESS=\"unix:path=/run/user/1000/bus\"\ndeclare -x DESKTOP_SESSION=\"ubuntu\"\ndeclare -x DISPLAY=\":0\"\ndeclare -x GDMSESSION=\"ubuntu\"\ndeclare -x GJS_DEBUG_OUTPUT=\"stderr\"\ndeclare -x GJS_DEBUG_TOPICS=\"JS ERROR;JS LOG\"\ndeclare -x GNOME_DESKTOP_SESSION_ID=\"this-is-deprecated\"\ndeclare -x GNOME_SHELL_SESSION_MODE=\"ubuntu\"\ndeclare -x GNOME_TERMINAL_SCREEN=\"/org/gnome/Terminal/screen/50af7912_f748_4af9_87bc_ae7d913ff4bd\"\ndeclare -x GNOME_TERMINAL_SERVICE=\":1.59\"\ndeclare -x GPG_AGENT_INFO=\"/run/user/1000/gnupg/S.gpg-agent:0:1\"\ndeclare -x GTK_IM_MODULE=\\ibus\"\ndeclare -x GTK_MODULES=\"gail:atk-bridge\"\ndeclare -x HOME=\"/home/%s\"\ndeclare -x IM_CONFIG_PHASE=\"2\"\ndeclare -x LANG=\"en_US.UTF-8\"\ndeclare -x LOGNAME=\"%s\"\ndeclare -x LS_COLORS=\"rs=0:di=01;34:ln=01;36:mh=00:pi=40;33:so=01;35:do=01;35:bd=40;33;01:cd=40;33;01:or=40;31;01:mi=00:su=37;41:sg=30;43:ca=30;41:tw=30;42:ow=34;42:st=37;44:ex=01;32:*.tar=01;31:*.tgz=01;31:*.arc=01;31:*.arj=01;31:*.taz=01;31:*.lha=01;31:*.lz4=01;31:*.lzh=01;31:*.lzma=01;31:*.tlz=01;31:*.txz=01;31:*.tzo=01;31:*.t7z=01;31:*.zip=01;31:*.z=01;31:*.Z=01;31:*.dz=01;31:*.gz=01;31:*.lrz=01;31:*.lz=01;31:*.lzo=01;31:*.xz=01;31:*.zst=01;31:*.tzst=01;31:*.bz2=01;31:*.bz=01;31:*.tbz=01;31:*.tbz2=01;31:*.tz=01;31:*.deb=01;31:*.rpm=01;31:*.jar=01;31:*.war=01;31:*.ear=01;31:*.sar=01;31:*.rar=01;31:*.alz=01;31:*.ace=01;31:*.zoo=01;31:*.cpio=01;31:*.7z=01;31:*.rz=01;31:*.cab=01;31:*.wim=01;31:*.swm=01;31:*.dwm=01;31:*.esd=01;31:*.jpg=01;35:*.jpeg=01;35:*.mjpg=01;35:*.mjpeg=01;35:*.gif=01;35:*.bmp=01;35:*.pbm=01;35:*.pgm=01;35:*.ppm=01;35:*.tga=01;35:*.xbm=01;35:*.xpm=01;35:*.tif=01;35:*.tiff=01;35:*.png=01;35:*.svg=01;35:*.svgz=01;35:*.mng=01;35:*.pcx=01;35:*.mov=01;35:*.mpg=01;35:*.mpeg=01;35:*.m2v=01;35:*.mkv=01;35:*.webm=01;35:*.ogm=01;35:*.mp4=01;35:*.m4v=01;35:*.mp4v=01;35:*.vob=01;35:*.qt=01;35:*.nuv=01;35:*.wmv=01;35:*.asf=01;35:*.rm=01;35:*.rmvb=01;35:*.flc=01;35:*.avi=01;35:*.fli=01;35:*.flv=01;35:*.gl=01;35:*.dl=01;35:*.xcf=01;35:*.xwd=01;35:*.yuv=01;35:*.cgm=01;35:*.emf=01;35:*.ogv=01;35:*.ogx=01;35:*.aac=00;36:*.au=00;36:*.flac=00;36:*.m4a=00;36:*.mid=00;36:*.midi=00;36:*.mka=00;36:*.mp3=00;36:*.mpc=00;36:*.ogg=00;36:*.ra=00;36:*.wav=00;36:*.oga=00;36:*.opus=00;36:*.spx=00;36:*.xspf=00;36:\"\n", getlogin(), getlogin());
	printf("declare -x PATH=\"/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin\"\ndeclare -x QT4_IM_MODULE=\"xim\"\ndeclare -x QT_ACCESSIBILITY=\"1\"\ndeclare -x QT_IM_MODULE=\"xim\"\ndeclare -x SESSION_MANAGER=\"local/ubuntu-18:@/tmp/.ICE-unix/1509,unix/ubuntu-18:/tmp/.ICE-unix/1509\"\ndeclare -x SHELL=\"/bin/bash\"\ndeclare -x SHLVL=\"1\"\ndeclare -x SSH_AGENT_PID=\"1643\"\ndeclare -x SSH_AUTH_SOCK=\"/run/user/1000/keyring/ssh\"\ndeclare -x TERM=\"xterm-256color\"\ndeclare -x TEXTDOMAIN=\"im-config\"\ndeclare -x TEXTDOMAINDIR=\"/usr/share/locale/\"\ndeclare -x USER=\"%s\"\ndeclare -x USERNAME=\"%s\"\ndeclare -x VTE_VERSION=\"5202\"\ndeclare -x WINDOWPATH=\"2\"\ndeclare -x XAUTHORITY=\"/run/user/1000/gdm/Xauthority\"\ndeclare -x XDG_CONFIG_DIRS=\"/etc/xdg/xdg-ubuntu:/etc/xdg\"\ndeclare -x XDG_DATA_DIRS=\"/usr/share/ubuntu:/usr/local/share/:/usr/share/:/var/lib/snapd/desktop\"\ndeclare -x XDG_MENU_PREFIX=\"gnome-\"\ndeclare -x XDG_RUNTIME_DIR=\"/run/user/1000\"\ndeclare -x XDG_SEAT=\"seat0\"\ndeclare -x XDG_SESSION_ID=\"2\"\ndeclare -x XDG_SESSION_TYPE=\"x11\"\ndeclare -x XDG_VTNR=\"2\"\ndeclare -x XMODIFIERS=\"@im=ibus\"\ndeclare -x myVal=\"hello\"\n", getlogin(), getlogin());

    printf("\n\n위의 보이시는 것들이 이미 선언된 환경 변수들입니다.\n\n");
    printf("마지막 줄을 보시면 \"export\" 명령어로 추가한 환경 변수가 선언되어 있습니다.\n\n\n");
    next_line();

    printf("\"export\" 명령어에 의해 변경된 환경 변수는\n");
    printf("\"export\"(을)를 실행한 사용자가 로그아웃 전까지만 유효합니다.\n\n");
    printf("영구적으로 유효하게 하려면, 환경 변수를 정의하는 설정 파일(/etc/profile 등)에\n");
    printf("\"export\" 명령어 구문을 적으시면 됩니다.\n");
    next_line();

	printf("\"export\" 명령어의 학습이 끝났습니다.\n");
    printf("고생하셨습니다.\n");

    delete_defdir();
}
