## BoB-Linux 설치 매뉴얼
- 본 문서는 ***BoB-Linux***를 사용하기 위해 필요한 모든 파일을 다운로드하고
- 가상 머신을 부팅시키기까지의 전 과정에 대한 매뉴얼입니다.
- 해당 매뉴얼만 잘 따라와도 손쉽게 BoB-Linux를 설치하고 시작할 수 있습니다.
- 리눅스나 가상 머신 사용에 익숙하지 않은 분들은 꼭 참고하여 BoB-Linux를 시작하세요!
-----
### Step 1. Virtual Box 설치하기
- 먼저 BoB-Linux를 실행 시킬 가상 머신을 설치해야 합니다. 아래의 링크를 클릭하여 **VirtualBox 홈페이지**로 이동하세요
  - [VirtualBox 홈페이지 링크](https://www.virtualbox.org/)
-----
#### Step 1.1
![1](https://user-images.githubusercontent.com/67176669/101727951-d1238b00-3af8-11eb-8e33-f062ef75ac8c.PNG)
- 위 그림에서 빨간 네모 박스 안에 있는 **Download VirtualBox x.x**를 클릭하세요.
  - (참고로 x.x는 버전명으로 최신 버전에 따라 버전명이 다를 수 있습니다.)
-----
#### Step 1.2
![2](https://user-images.githubusercontent.com/67176669/101728212-560ea480-3af9-11eb-947c-9b8b45d0f126.PNG)
- 잘 따라왔다면 다음과 같은 화면으로 이동되었을 것입니다. 빨간 박스 안에서 자신의 호스트에 알맞는 파일을 다운로드 해야 합니다.
- 대부분의 사용자분들은 **윈도우 운영체제**를 사용하고 있을 것이므로, 맨 위의 **Windows hosts**를 클릭하여 설치 파일을 다운로드 받으면 됩니다.
-----
#### Step 1.3
![3](https://user-images.githubusercontent.com/67176669/101729823-417fdb80-3afc-11eb-9b09-83dbf742f9e5.png)
- 다운로드 받은 파일을 실행시키세요.
-----
#### Step 1.4
![4](https://user-images.githubusercontent.com/67176669/101729936-78ee8800-3afc-11eb-95dc-ee39079ad512.png)
- **Next**를 눌러 진행하세요.
-----
#### Step 1.5
![5](https://user-images.githubusercontent.com/67176669/101729926-768c2e00-3afc-11eb-9443-ac05aa95d259.png)
- VirtualBox를 설치할 위치를 선택합니다. 따로 설정할 위치가 없으시다면 그냥 **Next**를 눌러서 진행하세요.
-----
#### Step 1.6
![6](https://user-images.githubusercontent.com/67176669/101729929-7724c480-3afc-11eb-8c6f-dd053af2845d.png)
- VirtualBox에 대한 여러 가지 옵션을 설정합니다. 이 부분도 **Next**로 진행하세요.
-----
#### Step 1.7
![7](https://user-images.githubusercontent.com/67176669/101729931-77bd5b00-3afc-11eb-9c0e-ec0cb80b8850.png)
- 잠시 인터넷 연결이 끊길 수 있다는 경고 메시지입니다. 실행 중인 작업이 없다면 **Yes**를 누르세요.
  - 만약 인터넷과 연결된 다른 작업을 하고 계시면 작업 종료까지 기다리셔서 설치하세요.
-----
#### Step 1.8
![8](https://user-images.githubusercontent.com/67176669/101729932-7855f180-3afc-11eb-9d28-f8e8ad9c455b.png)
- 이제 설치할 준비가 되었습니다. **Install**을 클릭하시면 설치가 진행됩니다.
  - 중간에 "이 앱이 디바이스를 변경할 수 있도록 허용하시겠어요?"와 같은 메시지가 뜬다면 **예**를 눌러주세요.
-----
#### Step 1.9
![9](https://user-images.githubusercontent.com/67176669/101729933-7855f180-3afc-11eb-8657-fb0d706285ec.png)
- 설치가 정상적으로 완료되면 위와 같은 창이 뜹니다. **finish**를 누르시면 설치가 완료되고 VirtualBox가 실행됩니다.
-----
### Step 2. BoB-Linux.ova 다운로드 받기
- 이제 **BoB-Linux**를 실행하기 위한 가상 머신인 **VirtualBox** 설치를 완료했습니다.
- 이번 과정에서는 VirtualBox에서 BoB-Linux를 간단하게 설치할 수 있는 BoB-Linux.ova 파일을 다운로드 받을 것입니다.
- 아래의 링크를 클릭해서 **BoB-Linux.ova** 파일을 다운로드 받으세요.
  - [BoB-Linux.ova 다운로드 링크](https://boblinux.fossa.kr:21443/blackmoon/boblinux/-/raw/master/BoB%20Linux)
  - [BoB-Linux.ova 다운로드 링크(GUI)](https://boblinux.fossa.kr:21443/blackmoon/boblinux/-/raw/master/BoB%20Linux%20GUI)
-----
### Step 3. VirtualBox에 BoB-Linux.ova 가져오기
- 마지막 과정입니다. 이번 과정에서는 VirtualBox의 기능인 **가상 시스템 가져오기**를 이용하여 BoB Linux를 설치할 것입니다.
- 먼저 **BoB-Linux.ova** 파일이 다운로드된 위치를 확인해주세요.
  - 본 가이드에서는 **C:\Users\user\Downloads**에 **BoB-Linux.ova** 파일이 존재한다고 가정하고 진행합니다.
-----
#### Step 3.1
![10](https://user-images.githubusercontent.com/67176669/101731358-e0a5d280-3afe-11eb-8ff1-c660e3d3e9f6.PNG)
- 빨간 네모 박스 위치의 **파일**을 클릭하세요
-----
#### Step 3.2
![11](https://user-images.githubusercontent.com/67176669/101731553-24004100-3aff-11eb-9c90-b29976c9ca71.png)
- 빨간 네모 박스 위치의 **가상 시스템 가져오기**를 클릭하세요.
-----
#### Step 3.3
![12](https://user-images.githubusercontent.com/67176669/101733298-f9fc4e00-3b01-11eb-9c8e-7e6a9758c3e6.PNG)
- 빨간 네모 박스 위치의 아이콘을 클릭한 뒤 Step 2.에서 다운로드 받은 **BoB-Linux.ova** 파일을 선택하세요.
-----
#### Step.3.4
![13](https://user-images.githubusercontent.com/67176669/101733243-e0f39d00-3b01-11eb-9cab-025fccee0b0d.PNG)
- 파란색 네모 박스처럼 파일의 경로가 표시됩니다.
- 잘 따라왔다면 **다음**을 눌러주세요.
------
#### Step 3.5
![14](https://user-images.githubusercontent.com/67176669/101733463-46e02480-3b02-11eb-84dd-fe2e8d4aabfe.PNG)
- 빨간색 네모 박스의 **가져오기**를 클릭해서 **BoB-Linux.ova** 파일을 설치하세요.
  - BoB-Linux 설정에 대한 정보가 나와있습니다.
  - **머신 기본 폴더**는 **BoB Linux**가상 머신 관련 파일이 위치하게 될 디렉토리입니다.
  - 만약, 자기가 사용하던 가상 환경을 옮기고 싶다면, 해당 폴더를 통째로 옮기면 됩니다
  - 해당 내용을 지금 모두 이해할 필요는 없습니다. 가상 머신을 사용하면서 점차 알게될 내용입니다.
- 설치에는 짧은 시간이 소모됩니다.(20 ~ 30초)
-----
<br><br>
## Finish
![15](https://user-images.githubusercontent.com/67176669/101733024-7b071580-3b01-11eb-8a17-81542a647a29.png)
- 이제 빨간색 네모 박스의 **시작**을 누르시면 BoB-Linux가 실행됩니다!
- 트레이닝 기능과 보안 점검 프로그램에 대한 사용 방법은 **BoB-Linux 사용 매뉴얼**을 참고하세요!
-----
