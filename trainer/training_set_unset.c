#include "func.h"

void training_set_unset(void)
{
	create_defdir();
	system("clear");

	//////////////////////////////////////////////////////////////////////////////////////////////////////

	printf("이번에 학습할 명령어는 \"set, unset\"입니다.\n\n");
	printf("\"set\"은 현재 정의되어 있는 모든 변수(환경 변수, Shell 변수)와 그 값을 출력하고,\n");
	printf("변수의 값을 설정하는 명령어 입니다.\n");
	next_line();
	
	printf("\"unset\"은 선언된 변수를 제거하는 명령어입니다.\n");
	next_line();

	printf("환경 변수는 Shell의 환경을 정의하는 중요한 역할을 수행하는 변수이며,\n");
	printf("미리 예약된 변수 명을 사용합니다.\n");
	next_line();
	
	printf("shell 변수란 특정한 Shell에서만 적용되는 변수입니다.\n\n");
	printf("환경 변수는 현재 Shell 뿐만 아니라 서브 shell에서도 적용이 되므로, \n");
	printf("shell 변수보다 적용 범위가 넓습니다.\n");
	next_line();

	printf("\"set\" 명령어의 사용법은 : \"set\"입니다.\n");
	printf("ex) set\n");
	next_line();
	
	printf("간단하게 입력하여 현재 환경 변수와 Shell 변수 목록을 출력합니다.\n");
	next_line();

	printf("\"unset\" 명령어의 사용법은 : \"unset [변수 이름]\"입니다.\n");
	printf("ex) unset myVal\n");
	next_line();
	
	printf("해당 변수 이름으로 선언된 변수가 제거됩니다.\n");
	next_line();

	printf("그럼 우선 Shell 변수를 선언해봅시다.\n\n");
	next_line();

	printf("[실습] 'myVal=value'를 입력해 'myVal'의 변수 명으로 \n'value' 이라는 값을 저장하도록 선언해보세요.\n");
	fake_run_command("myVal=value");

	printf("\n\n[실습] 'set'을 입력하면 현재 선언된 많은 변수들이 출력될 것 입니다.\n");
	printf("\"set\"을 입력해보세요\n");
	nothing_print_fake_run_command("set");
	printf("BASH=/bin/bash\nBASHOPTS=checkwinsize:cmdhist:complete_fullquote:expand_aliases:extglob:extquote:force_fignore:histappend:interactive_comments:progcomp:promptvars:sourcepath\nBASH_ALIASES=()\nBASH_ARGC=()\nBASH_ARGV=()\nBASH_CMDS=()\nBASH_LINENO=()\nBASH_SOURCE=()\nCLUTTER_IM_MODULE=xim\nCOLORTERM=truecolor\nCOLUMNS=130\nDBUS_SESSION_BUS_ADDRESS=unix:path=/run/user/1000/bus\nDIRSTACK=()\nDISPLAY=:0\nEUID=1000\nGJS_DEBUG_OUTPUT=stderr\nGJS_DEBUG_TOPICS=\'JS ERROR;JS LOG\'\nGPG_AGENT_INFO=/run/user/1000/gnupg/S.gpg-agent:0:1\nGROUPS=()\nGTK_IM_MODULE=ibus\nGTK_MODULES=gail:atk-bridge\nHISTCONTROL=ignoreboth\nHISTFILE=/home/%s/.bash_history\nHISTFILESIZE=2000\nHISTSIZE=1000\nHOME=/home/%s\nIM_CONFIG_PHASE=2\nLINES=42\nLOGNAME=%s\nLS_COLORS=\'rs=0:di=01;34:ln=01;36:mh=00:pi=40;33:so=01;35:do=01;35:bd=40;33;01:cd=40;33;01:or=40;31;01:mi=00:su=37;41:sg=30;43:ca=30;41:tw=30;42:ow=34;42:st=37;44:ex=01;32:*.tar=01;31:*.tgz=01;31:*.arc=01;31:*.arj=01;31:*.taz=01;31:*.lha=01;31:*.lz4=01;31:*.lzh=01;31:*.lzma=01;31:*.tlz=01;31:*.txz=01;31:*.tzo=01;31:*.t7z=01;31:*.zip=01;31:*.z=01;31:*.Z=01;31:*.dz=01;31:*.gz=01;31:*.lrz=01;31:*.lz=01;31:*.lzo=01;31:*.xz=01;31:*.zst=01;31:*.tzst=01;31:*.bz2=01;31:*.bz=01;31:*.tbz=01;31:*.tbz2=01;31:*.tz=01;31:*.deb=01;31:*.rpm=01;31:*.jar=01;31:*.war=01;31:*.ear=01;31:*.sar=01;31:*.rar=01;31:*.alz=01;31:*.ace=01;31:*.zoo=01;31:*.cpio=01;31:*.7z=01;31:*.rz=01;31:*.cab=01;31:*.wim=01;31:*.swm=01;31:*.dwm=01;31:*.esd=01;31:*.jpg=01;35:*.jpeg=01;35:*.mjpg=01;35:*.mjpeg=01;35:*.gif=01;35:*.bmp=01;35:*.pbm=01;35:*.pgm=01;35:*.ppm=01;35:*.tga=01;35:*.xbm=01;35:*.xpm=01;35:*.tif=01;35:*.tiff=01;35:*.png=01;35:*.svg=01;35:*.svgz=01;35:*.mng=01;35:*.pcx=01;35:*.mov=01;35:*.mpg=01;35:*.mpeg=01;35:*.m2v=01;35:*.mkv=01;35:*.webm=01;35:*.ogm=01;35:*.mp4=01;35:*.m4v=01;35:*.mp4v=01;35:*.vob=01;35:*.qt=01;35:*.nuv=01;35:*.wmv=01;35:*.asf=01;35:*.rm=01;35:*.rmvb=01;35:*.flc=01;35:*.avi=01;35:*.fli=01;35:*.flv=01;35:*.gl=01;35:*.dl=01;35:*.xcf=01;35:*.xwd=01;35:*.yuv=01;35:*.cgm=01;35:*.emf=01;35:*.ogv=01;35:*.ogx=01;35:*.aac=00;36:*.au=00;36:*.flac=00;36:*.m4a=00;36:*.mid=00;36:*.midi=00;36:*.mka=00;36:*.mp3=00;36:*.mpc=00;36:*.ogg=00;36:*.ra=00;36:*.wav=00;36:*.oga=00;36:*.opus=00;36:*.spx=00;36:*.xspf=00;36:\'\nMAILCHECK=60\nOPTERR=1\nOPTIND=1\nPATH=/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin\nPIPESTATUS=([0]=\"0\")\nPPID=2054\nSHELL=/bin/bash\nSHELLOPTS=braceexpand:emacs:hashall:histexpand:history:interactive-comments:monitor\nSHLVL=1\nSSH_AGENT_PID=1643\nSSH_AUTH_SOCK=/run/user/1000/keyring/ssh\nTERM=xterm-256color\nTEXTDOMAIN=im-config\nTEXTDOMAINDIR=/usr/share/locale/\nUID=1000\nUSER=%s\nUSERNAME=%s\nVTE_VERSION=5202\nWINDOWPATH=2\nXAUTHORITY=/run/user/1000/gdm/Xauthority\nXDG_DATA_DIRS=/usr/share/ubuntu:/usr/local/share/:/usr/share/:/var/lib/snapd/desktop\nXDG_RUNTIME_DIR=/run/user/1000\nXDG_SEAT=seat0\nXDG_SESSION_ID=2\nXDG_SESSION_TYPE=x11\nXDG_VTNR=2\nmyVal=value\n", getlogin(), getlogin(), getlogin(), getlogin(), getlogin());
	
	printf("\n\n마지막 줄에 방금 입력한 'myVal=value'가 확인됩니다.\n");
	next_line();
	
	printf("이제 \"unset\" 명령어를 사용해 Shell 변수를 해제해봅시다.\n\n");
	next_line();
	
	printf("[실습] \"unset\" 명령어를 입력해 'myVal' 변수를 제거해보세요.\n");
	printf("사용법 : \"unset [변수 이름]\"\n");
	fake_run_command("unset myVal");	

	printf("\n\nunset을 입력하면 shell 변수 목록에서 성공적으로 제거되었을 것입니다.\n\n");
	printf("[실습] 'set'을 입력해보세요\n");
	nothing_print_fake_run_command("set");
	printf("BASH=/bin/bash\nBASHOPTS=checkwinsize:cmdhist:complete_fullquote:expand_aliases:extglob:extquote:force_fignore:histappend:interactive_comments:progcomp:promptvars:sourcepath\nBASH_ALIASES=()\nBASH_ARGC=()\nBASH_ARGV=()\nBASH_CMDS=()\nBASH_LINENO=()\nBASH_SOURCE=()\nCLUTTER_IM_MODULE=xim\nCOLORTERM=truecolor\nCOLUMNS=130\nDBUS_SESSION_BUS_ADDRESS=unix:path=/run/user/1000/bus\nDIRSTACK=()\nDISPLAY=:0\nEUID=1000\nGJS_DEBUG_OUTPUT=stderr\nGJS_DEBUG_TOPICS=\'JS ERROR;JS LOG\'\nGPG_AGENT_INFO=/run/user/1000/gnupg/S.gpg-agent:0:1\nGROUPS=()\nGTK_IM_MODULE=ibus\nGTK_MODULES=gail:atk-bridge\nHISTCONTROL=ignoreboth\nHISTFILE=/home/%s/.bash_history\nHISTFILESIZE=2000\nHISTSIZE=1000\nHOME=/home/%s\nIM_CONFIG_PHASE=2\nLINES=42\nLOGNAME=%s\nLS_COLORS=\'rs=0:di=01;34:ln=01;36:mh=00:pi=40;33:so=01;35:do=01;35:bd=40;33;01:cd=40;33;01:or=40;31;01:mi=00:su=37;41:sg=30;43:ca=30;41:tw=30;42:ow=34;42:st=37;44:ex=01;32:*.tar=01;31:*.tgz=01;31:*.arc=01;31:*.arj=01;31:*.taz=01;31:*.lha=01;31:*.lz4=01;31:*.lzh=01;31:*.lzma=01;31:*.tlz=01;31:*.txz=01;31:*.tzo=01;31:*.t7z=01;31:*.zip=01;31:*.z=01;31:*.Z=01;31:*.dz=01;31:*.gz=01;31:*.lrz=01;31:*.lz=01;31:*.lzo=01;31:*.xz=01;31:*.zst=01;31:*.tzst=01;31:*.bz2=01;31:*.bz=01;31:*.tbz=01;31:*.tbz2=01;31:*.tz=01;31:*.deb=01;31:*.rpm=01;31:*.jar=01;31:*.war=01;31:*.ear=01;31:*.sar=01;31:*.rar=01;31:*.alz=01;31:*.ace=01;31:*.zoo=01;31:*.cpio=01;31:*.7z=01;31:*.rz=01;31:*.cab=01;31:*.wim=01;31:*.swm=01;31:*.dwm=01;31:*.esd=01;31:*.jpg=01;35:*.jpeg=01;35:*.mjpg=01;35:*.mjpeg=01;35:*.gif=01;35:*.bmp=01;35:*.pbm=01;35:*.pgm=01;35:*.ppm=01;35:*.tga=01;35:*.xbm=01;35:*.xpm=01;35:*.tif=01;35:*.tiff=01;35:*.png=01;35:*.svg=01;35:*.svgz=01;35:*.mng=01;35:*.pcx=01;35:*.mov=01;35:*.mpg=01;35:*.mpeg=01;35:*.m2v=01;35:*.mkv=01;35:*.webm=01;35:*.ogm=01;35:*.mp4=01;35:*.m4v=01;35:*.mp4v=01;35:*.vob=01;35:*.qt=01;35:*.nuv=01;35:*.wmv=01;35:*.asf=01;35:*.rm=01;35:*.rmvb=01;35:*.flc=01;35:*.avi=01;35:*.fli=01;35:*.flv=01;35:*.gl=01;35:*.dl=01;35:*.xcf=01;35:*.xwd=01;35:*.yuv=01;35:*.cgm=01;35:*.emf=01;35:*.ogv=01;35:*.ogx=01;35:*.aac=00;36:*.au=00;36:*.flac=00;36:*.m4a=00;36:*.mid=00;36:*.midi=00;36:*.mka=00;36:*.mp3=00;36:*.mpc=00;36:*.ogg=00;36:*.ra=00;36:*.wav=00;36:*.oga=00;36:*.opus=00;36:*.spx=00;36:*.xspf=00;36:\'\nMAILCHECK=60\nOPTERR=1\nOPTIND=1\nPATH=/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin\nPIPESTATUS=([0]=\"0\")\nPPID=2054\nSHELL=/bin/bash\nSHELLOPTS=braceexpand:emacs:hashall:histexpand:history:interactive-comments:monitor\nSHLVL=1\nSSH_AGENT_PID=1643\nSSH_AUTH_SOCK=/run/user/1000/keyring/ssh\nTERM=xterm-256color\nTEXTDOMAIN=im-config\nTEXTDOMAINDIR=/usr/share/locale/\nUID=1000\nUSER=%s\nUSERNAME=%s\nVTE_VERSION=5202\nWINDOWPATH=2\nXAUTHORITY=/run/user/1000/gdm/Xauthority\nXDG_DATA_DIRS=/usr/share/ubuntu:/usr/local/share/:/usr/share/:/var/lib/snapd/desktop\nXDG_RUNTIME_DIR=/run/user/1000\nXDG_SEAT=seat0\nXDG_SESSION_ID=2\nXDG_SESSION_TYPE=x11\nXDG_VTNR=2\n", getlogin(), getlogin(), getlogin(), getlogin(), getlogin());
	
	printf("\n\n'myVal=value'가 삭제되었습니다.\n");
	next_line();
	
	printf("이처럼 set과 unset 명령어를 이용해 간단하게 변수를 확인하고 삭제할 수 있습니다.\n");
	next_line();
	
	printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
	printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
	printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
	next_line();
	
	printf("\"set, unset\" 명령어의 학습이 끝났습니다.\n");
	printf("고생하셨습니다.\n");


	delete_defdir();
}

