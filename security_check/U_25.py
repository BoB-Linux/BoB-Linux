# [U-25] NFS 서비스 접근 통제 검사
# 2020/11/24 : 노무승
#   1. NFS 서비스 설정 파일의 권한, 소유권, 내용을 확인하여 점검함.
#       (매뉴얼의 취약 판단 기준에서 파일 권한, 소유권 부분을 추가하고
#       삭제 방법을 리눅스 패키지 관리자 별로 안내해주게끔 수정함.)
#   2. 우분투 20.04 기반에서 실제 NFS 서비스를 설치하여 테스트 해 봄.
#       왜 매뉴얼에는 와일드카드(*) 내용은 안 나와 있냐.. ㅁㄴㅇㄹ

import os.path
import subprocess
C_END     = "\033[0m"
C_RED    = "\033[31m"
C_GREEN  = "\033[32m"
C_YELLOW = "\033[33m"
C_NUM = "U-25"

def U25() :
    f_output = ""
    f_output = f_output + "[" + C_NUM + "] NFS 서비스 접근 통제 검사" + "\n"
    flag = False

    path = "/etc/exports"
    if (os.path.isfile(path)):
        # server access file (owner && file access value check)
        temp = subprocess.getoutput("ls -al " + path)
        temp = temp.split()
        print(temp[0][0])
        if (temp[0][8] != "-"):
            f_output = f_output + C_YELLOW + "\t[경고] " + path + " : 해당 파일을 다른 사용자가 수정할 수 있습니다.\n" + C_END
            flag = True
        if (temp[2] != "root"):
            f_output = f_output + C_YELLOW + "\t[경고] " + path + " : 해당 파일의 소유자가 root계정이 아닙니다.\n" + C_END
            flag = True

        # server access file (setting check)
        handle = open(path, mode="r", encoding="utf-8")  
        temp = handle.readline()
        data = ""
        while temp:
            temp = temp.replace(" ", "")
            temp = temp.replace("\t", "")
            temp = temp.replace("\n", "")
            temp = temp.upper()
            if (len(temp) != 0):
                if (temp[0] != "#") :
                    data = data + temp
            temp = handle.readline()
        handle.close()

        if (len(data) != 0) :
            f_output = f_output + "\t[알림] " + path + " : NFS 서버 접근 설정 파일에 내용이 있습니다.\n" + C_END
            if (data.find("*") != -1):
                f_output = f_output +  C_YELLOW + "\t[경고] NFS 서버 접근 설정이 모두(everyone)로 되어 있습니다.\n" + C_END 
                f_output = f_output +  C_YELLOW + "\t\t때문에 와일드 카드 문구(*) 사용을 금합니다.\n" + C_END 
                flag = True

    if (flag) :
        f_output = f_output + C_RED + "\t[검사 결과] 보안 조치가 필요합니다.\n" + C_END  
        f_output = f_output + "\n"
        f_output = f_output + "[" + C_NUM + "] 조치 방법\n"
        f_output = f_output + "\t1. NFS 서버를 아예 사용하지 않는다면 NFS 관련 패키지를 모두 삭제해주세요.\n"
        f_output = f_output + "\t\t(데비안 계열(우분투 등) : apt remove nfs-common nfs-kernel-server rpcbind portmap -y)\n"
        f_output = f_output + "\t\t(레드햇 계열(CentOS 등) : yum remove nfs-utils -y)\n" 
        f_output = f_output + "\t2. NFS 서버를 잠시 사용하지 않는다면 NFS 서버 접속 설정을 변경해주세요.\n"
        f_output = f_output + "\t\t('/etc/exports' 파일 내부 내용을 모두 지우거나 맨 앞에 #을 붙여 주석 처리해주세요.)\n"
        f_output = f_output + "\t\t(수정 후 재부팅 또는 서비스 재시작 필요 (exportfs -a && systemctl restart nfs-kernel-server))\n"
        f_output = f_output + "\t3. 만일 NFS 서버를 사용하신다면 보안을 위해 NFS 서버를 사용하지 않는 것을 권장드리며,\n"
        f_output = f_output + "\t\t'/etc/exports' 파일 내부 설정에서 everyone 설정(* 문구)을 지우거나 주석 처리해주세요.\n"
        f_output = f_output + "\t\t\t(ex. '[폴더] *(rw,sync,no_subtree_check)' →  취약)\n"
        f_output = f_output + "\t\t(수정 후 재부팅 또는 서비스 재시작 필요 (exportfs -a && systemctl restart nfs-kernel-server))\n"
        f_output = f_output + "\t4. 또한 다른 사용자가 해당 파일을 쓸 수 있는지 소유권이 root 계정이 아닌지 확인해야 합니다.\n"
        f_output = f_output + "\t\t(chmod 600 /etc/exports : 파일 접근 권한 변경)\n"
        f_output = f_output + "\t\t(chown root /etc/exports : 파일 소유권(UID) 변경)\n"
    else :
        f_output = f_output + C_GREEN + "\t[검사 결과] 안전합니다.\n" + C_END
        f_output = f_output + "\n"

    print(f_output,end='')
    handle = open("./" + C_NUM + ".txt", mode='w', encoding='utf-8')
    handle.write(f_output)
    handle.close()

U25()
