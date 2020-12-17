#include "func.h"

void training_git(void)
{
	system("clear");
	printf("이번에 학습할 명령어는 \"git\" 입니다.\n\n");

	printf("이번 학습의 내용은 실제로 \"github\" 또는 \"gitlab\" 등을 이용하여\n");
	printf("실습하면서 진행해 보시길 바랍니다.\n");
	next_line();

	printf("\"git\"이란 리누스 토발즈가 개발한 분산형 버전관리 시스템이며\n\n");
	printf("파일의 변경사항을 추적하고 여러 명의 사용자들이\n");
	printf("해당 파일의 작업을 조율할 수 있습니다.\n\n");
	next_line();

	printf("\"git\"은 항상 파일을 지켜보고 있습니다.\n");
	next_line();

	printf("기존에 파일이 존재한다면, 변경된 내용이 있는지 확인하고\n");
	printf("변경된 내용이 있다면 해당 파일을 업데이트하여 최신으로 유지합니다.\n");
	next_line();

	printf("\"git\"은 어떠한 프로젝트에 여러 명이 참여할 때 파일들을 주고 받을 필요가 없이\n");
	printf("같은 파일을 여러 명이 동시에 작업하는 병렬 작업이 가능합니다.\n");
	next_line();

	printf("또한, 사용자가 어떠한 파일을 업데이트 할 때마다 백업과 같은 기능을 수행합니다.\n");
	printf("이 덕분에 사용자는 특정 버전의 상태로 되돌아갈 수도 있습니다.\n");
	next_line();

	printf("\"git\"을 커피라고 한다면\n");
	printf("커피숍과 같은 것은 대표적으로 \"github\"(와)과 \"gitlab\"이 있습니다.\n");
	next_line();

	printf("\"github\"(와)과 \"gitlab\"은 사용자가 서버를 가지고 있지 않아도\n");
	printf("\"git\"을 사용할 수 있는 서버를 제공해줍니다.\n");
	next_line();

	printf("원래 \"git\"을 사용하려면 자신의 서버에 설치하여 사용하는데\n");
	printf("이 때 개인 서버가 없다면 위의 대표적인 두 사이트를 이용하여 사용할 수 있습니다.\n");
	next_line();

	system("clear");
	printf("[github]\n\n\n");
	
	printf("공개적으로 사용 가능한 무료 서비스입니다.\n\n");
	
	printf("무료 계정과 유료 계정으로 나뉘는데 주로 오픈 소스 프로젝트를 진행할 때 이용됩니다.\n\n");
	
	printf("보통은 무료 계정으로 사용하지만, 이 때 소스 코드가 모두 오픈되어 있어야 합니다.\n\n");
	
	printf("프로젝트 팀의 코드를 비공개로 관리하고 싶다면\n\n");
	
	printf("유료 계정을 이용하거나 \"gitlab\"을 이용해야 합니다.\n\n");
	
	printf("\"github\"(은)는 오픈 소스 프로젝트가 목적이므로\n");
	printf("다른 사람들의 오픈 소스 프로젝트 코드들도 볼 수 있습니다.\n");
	next_line();

	system("clear");
	printf("[gitlab]\n\n\n");
	printf("개인 혹은 조직 내에서 이용하고 싶을 때 유용합니다.\n\n");
	
	printf("\"github\"(와)과 다른 점은 비공개로 관리하고 싶을 때 무료로 이용할 수 있습니다.\n\n");
	
	printf("또한, 자신의 서버가 있다면 \"gitlab\" 자체를 설치하여\n\n");
	printf("자신의 서버에 \"gitlab\" 환경을 구축할 수 있습니다.\n\n");
		
	printf("이 때 자신의 서버를 이용하여 다른 사람이 자신의 \"gitlab\" 환경을 보도록 하려면\n\n");
	
	printf("포트를 설정하여 외부에서 접속할 수 있도록 '포트포워딩'이라는 작업을 해주어야 합니다.\n");
	next_line();

	system("clear");
	printf("\"git\"에는 총 세가지 상태가 있습니다.\n\n");
	
	printf("1. Committed : 데이터가 로컬 DB에 안전하게 저장되었다는 것을 의미합니다.\n");
	printf("2. Modified : 수정한 파일이 아직 로컬 DB에 커밋되지 않았다는 것을 의미합니다.\n");
	printf("3. Staged : 현재 수정된 파일이 곧 커밋될 것이라고 표시된 상태를 의미합니다.\n\n");
	next_line();

	printf("\"git\"은 명령어를 통해 레포지토리 관리가 가능합니다.\n");
	printf("우선 \"git\" 명령어를 사용하기 위해서는 \"git\"을 설치해야 합니다.\n");
	next_line();

	printf("데비안이나 우분투 계열에서는 \"sudo apt-get install git\"을 입력하면\n");
	printf("\"git\"을 설치할 수 있습니다.\n\n");
	next_line();

	printf("자주 사용하는 \"git\" 명령어는 다음과 같습니다.\n");
	next_line();

	printf("[작업 영역 생성하기]\n");
	printf("git init - 빈 git 저장소를 생성하거나 또는 git 저장소 초기화합니다.\n");
	printf("git clone - 리포지토리를 로컬 디렉토리로 복제하여 가져옵니다.\n\n");
	next_line();

	printf("[현재 상태를 변화시키는 작업]\n");
	printf("git add - 새로 생성되거나 수정된 파일을 git에 추가합니다.\n");
	printf("git mv - 파일 또는 디렉토리, 심볼릭 링크를 이동하거나 이름을 변경합니다.\n");
	printf("git reset - 현재 HEAD를 지정된 상태로 리셋합니다.\n");
	printf("git rm  - 작업 트리와 인덱스 상에서 해당 파일을 삭제합니다.\n\n");
	next_line();

	printf("[history가 변경되는 작업]\n");
	printf("git branch : 브랜치를 생성하거나 삭제합니다.\n");
	printf("git checkout : 다른 브랜치로 전환하거나 작업 트리를 복원합니다.\n");
	printf("git commit : 저장소에 대한 변경사항을 기록합니다.\n");
	printf("git diff : 커밋과 작업 트리에 대한 변경 사항을 표시합니다.\n");
	printf("git merge : 두개 이상의 개발 작업 히스토리를 병합합니다.\n");
	printf("git rebase : 한 브랜치에서 다른 브랜치로 병합합니다.\n");
	printf("git tag : 태그를 확인하거나, 태그를 붙이고 삭제합니다.\n\n");
	next_line();

	printf("[공동 작업]\n");
	printf("git fetch : 리포지토리의 최신 정보를 로컬 저장소로 다운로드 합니다.\n");
	printf("git pull : 리포지토리 또는 로컬 브랜치에서 최신 정보를 가져와 통합합니다.\n");
	printf("git push : 로컬의 작업 상황을 원격 저장소에 반영하여 저장합니다.\n\n");
	next_line();

	//git 계정 설정
	system("clear");
	printf("[git 계정 설정]\n\n\n");
	printf("예시로, \"git\"을 처음 사용한다면 아래와 같이 초기 작업을 해줍니다.\n\n");
	printf("사용법 : git config --global user.name <사용자명>\n");
	printf("ex) git config --global user.name rookie\n\n");
	printf("사용법 : git config --global user.email <이메일주소>\n");
	printf("ex) git config --global.email rookie@example.com\n\n");
	next_line();

	printf("위의 내용은 서버에 회원 가입이 된 상태에서\n");
	printf("사용자명과 이메일 주소를 입력해야 합니다.\n");
	next_line();

	printf("만약 \"github\"에서 회원 가입을 했다면\n");
	printf("\"github\"에서 사용하는 사용자명과 이메일을 입력해주시면 됩니다.\n");
	next_line();

	printf("참고) \"git config --list\" 명령어를 통해 설정된 값들을 확인할 수 있습니다.\n");
	next_line();

	//저장소 지식
	system("clear");
	printf("[git 저장소 지식]\n\n\n");
	printf("원격 저장소 : 파일이 저장되어 있으며\n");
	printf("              여러 사람이 함께 공유하여 작업하는 저장소입니다.\n\n");
	printf("로컬 저장소 : 자신의 PC에 파일이 저장되어 있으며\n");
	printf("              개인 전용 저장소로 다른 사람에게 공유되지 않습니다.\n");
	next_line();

	printf("\"github\"(을)를 예시로 들면, \"github\"는 원격 저장소입니다.\n\n");
	
	printf("그리고 \"github\"에 작업 디렉토리를 생성하고 자신의 컴퓨터로 디렉토리를 다운로드하면\n");
	printf("\"자신의 컴퓨터\"는 로컬 저장소가 됩니다.\n");
	next_line();

	//원격 저장소 복사 및 다운로드
	system("clear");
	printf("[원격 저장소 복사 및 다운로드]\n\n\n");
	printf("원격 저장소에 있는 레포지토리를 로컬 저장소로 다운받습니다.\n\n");
	printf("사용법 : git clone <주소>\n");
	printf("ex) git clone https://github.com/rookie/test_dir.git\n\n\n");
	next_line();

	printf("이제 다운받은 디렉토리로 이동하여 명령어들을 수행해야 합니다.\n");
	next_line();

	//add
	system("clear");
	printf("[파일 추가]\n\n\n");
	printf("로컬 저장소에서 파일을 추가하거나 수정하고 나면\n");
	printf("해당 파일을 업로드 대기 그룹에 추가시킵니다.\n\n");
	printf("사용법 : git add <파읾명>\n");
	printf("ex 1) git add test_file.txt\n");
	printf("ex 2) git add .\n\n");
	next_line();

	//status
	system("clear");
	printf("[현재 상태 확인]\n\n\n");
	printf("어떤 파일이 수정되었고, 어떤 파일이 변경되었는지 등 \n");
	printf("현재 상태를 파악할 때 사용합니다.\n\n");
	printf("사용법 : git status\n\n");
	next_line();

	//commit
	system("clear");
	printf("[로컬 저장소의 작업 중인 브랜치에 등록]\n\n\n");
	printf("대기 그룹에 모아둔 파일들을 나중에 알아볼 수 있는 메시지와 함께 \n");
	printf("로컬 브랜치에 등록합니다.\n\n");
	printf("사용법 : git commit -m <메시지>\n");
	printf("ex) git commit -m \"update test_file.txt\"\n");
	next_line();

	//push
	system("clear");
	printf("[원격 저장소에 등록]\n\n\n");
	printf("로컬 저장소의 현재 브랜치를 원격 저장소에 저장합니다.\n");
	printf("(이 명령어를 실행해야만 실제 서버에 있는 원격 저장소 파일들이 변경됩니다.)\n\n");
	printf("사용법 : git push <remote> <branch>\n");
	printf("ex 1) git push\n");
	printf("ex 2) git push origin master\n\n");
	next_line();

	//pull
	system("clear");
	printf("[로컬 저장소를 원격 저장소와 같은 상태로 갱신]\n\n\n");
	printf("여러 사람이 \"git\"을 이용하여 공유 중이라면\n");
	printf("'pull'을 이용하여 로컬 저장소를 원격 저장소와 같은 상태로 갱신합니다.\n\n");
	printf("사용법 : git pull\n");
	next_line();

	//branch
	system("clear");

	printf("[브랜치 생성]\n\n\n");
	printf("안전하게 격리된 환경에서 작업을 진행하고 싶다면\n");
	printf("'브랜치'를 새로 만들고 이동하여 격리된 환경에서 작업하면 됩니다.\n\n");
	printf("사용법 : git branch <브랜치 이름>\n");
	printf("ex) git branch test_branch\n\n\n");
	next_line();

	printf("[브랜치 이동]\n\n\n");
	printf("이미 있거나 새로 생성된 브랜치로 이동하고 싶다면 'checkout'만 이용하면 됩니다.\n\n");
	printf("git checkout <브랜치 이름>\n");
	printf("ex) git checout test_branch\n\n\n");
	next_line();

	printf("[브랜치 생성 및 이동]\n\n\n");
	printf("위의 브랜치를 생성하고 이동하는 과정을 한 번에 할 수 있습니다.\n\n");
	printf("사용법 : git checkout -b <브랜치 이름>\n");
	printf("ex) git checkout -b test_branch\n\n\n");
	next_line();

	//브랜치 삭제
	printf("[브랜치 삭제]\n\n\n");
	printf("브랜치를 삭제하고 싶다면 다음의 명령과 같이 입력하면 됩니다.\n\n");
	printf("사용법 : git branch -d <브랜치 이름>\n");
	printf("ex) git branch -d test_branch\n\n\n");
	next_line();

	printf("[원격 저장소에 브랜치 등록]\n\n\n");
	printf("하지만 위의 방법으로 브랜치를 생성하고 작업하면 로컬에만 저장된 상태입니다.\n\n");
	printf("아래의 명령을 이용하면 원격 저장소에 전송하여 다른 사람이 볼 수 있게 합니다.\n\n");
	printf("사용법 : git push origin <브랜치 이름>\n");
	printf("ex) git push origin public_branch\n\n\n");
	next_line();

	//merge
	printf("[브랜치 병합]\n\n\n");
	printf("만약 새 브랜치를 생성하여 작업하였는데\n");
	printf("결과물이 좋아서 \"master 브랜치\"에 병합하고 싶다면\n\n");
	
	printf("반드시 'checkout'을 이용하여 \"master 브랜치\"로 이동한 후 다음과 같이 입력하면 됩니다.\n\n");
	printf("사용법 : git merge <master에 병합할 브랜치>\n");
	printf("ex) git merge test_branch\n\n\n");
	next_line();

	printf("주의할 점은 반드시 \"병합될 목적 브랜치\"로 이동 후\n");
	printf("\"병합 할 브랜치\"를 입력해주어야 합니다.\n");
	next_line();

	//log
	system("clear");
	printf("[로그]\n\n\n");
	printf("특정 버전으로 되돌아가고 싶다면 자신이 해온 기록을 확인해야 할 것입니다.\n\n");
	printf("아래의 명령으로 자신이 작업했던 기록들을 확인할 수 있습니다.\n\n");
	printf("사용법 : git log\n");
	next_line();

	system("clear");
	printf("지금까지 배운 내용은 \"git\"을 사용함에 있어서\n");
	printf("가장 기본적으로 알고 있어야 하는 것들입니다.\n");
	next_line();

	printf("\"git\"에 대해 더 많이 알고 사용하고 싶다면 아래의 URL을 통해 확인해보시길 바랍니다\n");
	printf("https://git-scm.com/book/ko/v2\n\n");
	next_line();

	printf("\"git\"은 매우 매우 중요하고 개발이나 프로젝트 등을 하다 보면\n");
	printf("한 번쯤은 이용하게 될 것입니다.\n\n");
	
	printf("혼자 작업을 하더라도 \"git\"을 이용하여 능숙하게 다룰 수 있어야 합니다.\n");
	next_line();

	printf("\"git\"에 내장된 GUI로는 \"gitk\"가 있습니다.\n");
	next_line();

	printf("\"gitk\" 이외에도 대표적인 그래픽 클라이언트로는 다음과 같습니다.\n");
	printf("\"gitx\", \"Source Tree\", \"GitHub Desktop\", \"Gitbox\" 등이 있습니다.\n");
	next_line();

	printf("[Tip] \"github\" 이나 \"gitlab\" 등을 이용하면\n");
	printf("자신 또는 다른 사람에게 자신이 어떤 것들을 공부하였는지\n");
	printf("기록 및 증명하는 자료로 쓰일 수도 있습니다.\n");
	next_line();

	printf("이후에 콘솔 혹은 터미널에 \"man\" 명령어나\n");
	printf("\"[명령어] --help\"와 같이 '--help' 옵션을 통해\n");
	printf("더 많은 정보와 옵션들을 확인하시길 바랍니다.\n");
	next_line();

	printf("\"git\" 명령어의 학습이 끝났습니다.\n\n");
	printf("고생하셨습니다.\n");
}

