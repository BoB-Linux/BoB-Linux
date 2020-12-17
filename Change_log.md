### Ver 0.0.1
- Ubuntu base rootfs에 커널 빌드
- 부팅 성공

### Ver 0.1.0
- bash, gcc, libc 등 필수 패키지 설치

### Ver 0.1.1
- 네트워크 환경 설정
- 트레이닝 기능 구현에 필요한 기본 유틸리티 구성

### Ver 0.2.0
- BoB Linux 기본 환경 구축
- 안정성 향상 및 버그 제거
- 원시 트레이닝 기능 탑재(구현중)

### Ver 0.2.0.1 (GUI)
- Ver 0.2.0 rc1 : X-Window를 이용한 GUI 환경 부팅
- 프로젝트 방향 변경으로 GUI는 사용하지 않음

### Ver 0.2.0.2 (GUI)
- Ver 0.2.0 rc2 : Cinnamon을 이용한 GUI 환경
- 한글 출력 및 입력 구성
- 프로젝트 방향 변경으로 GUI는 사용하지 않음

### Ver 0.2.1 (2020-11-21)
- 해상도 설정 (1024x768 : vga=0x317)
- font size 및 한글 입출력 구현
  - 한글 출력 : fbterm 
  - 한글 입력 : uim 입력기
- 쉘 스크립트를 통한 init account installer 구현
  - 기본 계정 rookie / rookie를 이용
- man page를 위한 unminimize
  - 용량 소폭 증가
  
### Ver 0.2.2(2020-11-25)
- 커널 업데이트(5.8.0-29-generic)
- 안정성 향상 및 버그 제거
  - 부팅시 fbterm & uim 입력기 적용 로직 변경
  - 로그인된 터미널에서 'exit' 입력할 시 fbterm만 종료되는 문제 해결
- grub2 업데이트
- fbterm 스크롤 문제 해결

### Ver 0.2.3(2020-11-29)
- 90% 완성된 트레이닝 기능(기본 명령어 학습 완료) 탑재
- init account installer 취약점 및 인터페이스 개선
  - /etc/bash.bashrc 대신 홈 디렉토리의 .bashrc를 사용
  - 모든 설정 완료 후 메시지 한글 출력
- 트레이닝 기능 취약점 개선(su 관련)

### Ver 0.2.4(2020-12-07)
- tty 6에는 fbterm 자동 시작 미적용
- 리눅스 기본 지식 파트
- 트레이닝 기능 메뉴에 보안 로드맵 탑재
- 보안 점검을 위한 취약한 환경 적용

### Ver 0.2.5(2020-12-13)
- /etc/apache2/apache2.conf 수정
  - 보안 점검 프로그램 36번 항목 관련 오류 수정
- 트레이닝 학습 명령어 추가(ssh, sftp, bg, fg)
- init account installer 수정
  - 새로운 계정 생성 시에도 rookie 계정 유지되도록 변경
  - 실습을 위한 조치
- 보안 점검 프로그램 추가
- 불필요한 파일 삭제
- fbterm 버퍼 사이즈 2000으로 변경

### Ver 1.0.0
- init account installer에서 잘못된 입력 값에 의해 계정 생성 실패 문제
  - 사용자 계정에 유효하지 않은 값을 입력했을 때 쉘 스크립트가 제대로 작동하지 않음
  - 계정 생성에 실패했을 때는 rookie 계정으로 시작하도록 설정
- rookie 계정 이용 시에도 초기 도움말 출력
  - README 파일 less 명령어를 통해 읽게 조언
- 계정 설정 시 일부 텍스트 가독성 향상
