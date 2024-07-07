# ft_ping


The ft_ping project is a custom implementation of the ping command, which is widely used to test the reachability of a host on an Internet Protocol (IP) network. This project is part of the 42 School curriculum, designed to help students understand the basics of network programming and system functions.

Description
This implementation of ping uses various system and network functions to send ICMP "echo request" packets to a host and listen for ICMP "echo reply" packets. It measures the round-trip time for messages sent from the originating host to a destination computer.

Key Functions
gettimeofday: Gets the current time.
exit: Exits the program.
inet_ntop / inet_pton: Converts IP addresses from binary to text form and vice versa.
ntohs / htons: Converts values between network byte order and host byte order.
signal / alarm / usleep: Manages signals and process sleeping.
socket / setsockopt / close: Manages socket operations.
sendto / recvmsg: Sends and receives messages on a socket.
getpid / getuid: Gets process and user IDs.
getaddrinfo / getnameinfo / freeaddrinfo: Manages address information.
strerror / gai_strerror: Converts error codes to human-readable strings.
printf and its family: Outputs data.
Usage
To use ft_ping, compile the project using make, which generates the ft_ping executable. Then, run the executable with a target host as an argument.

Basic Usage
bash


./ft_ping [host]
Verbose Mode
To enable verbose output, use the -v option.

bash


./ft_ping -v [host]
Testing with Docker
You can test the ft_ping project using Docker with Debian 11. Simply run the following shell script:

bash


./myScript.sh
This script will set up a Docker container with Debian 11 for you to test the project in an isolated environment.

Compiling for Different Operating Systems
The Makefile provided allows for compiling the project for different operating systems, including MacOS and Linux.

MacOS Compilation
To compile for MacOS, use the following command:

bash


make macos
Linux Compilation
To compile for Linux, use the following command:

bash


make linux
This ensures that the project can be compiled and run on different platforms without any issues.

License
This project is licensed under the MIT License - see the LICENSE.md file for details.

This README.md file now includes the additional information about testing with Docker using Debian 11 and compiling for different operating systems using the Makefile.



kr -------------------------------------------------------------------

ft_ping
ft_ping 프로젝트는 ping 명령어의 사용자 정의 구현입니다. ping은 인터넷 프로토콜(IP) 네트워크에서 호스트의 도달 가능성을 테스트하는 데 널리 사용됩니다. 이 프로젝트는 42 School 커리큘럼의 일부로, 학생들이 네트워크 프로그래밍과 시스템 함수의 기초를 이해하도록 돕기 위해 설계되었습니다.

설명
이 ping 구현은 다양한 시스템 및 네트워크 함수를 사용하여 ICMP "에코 요청" 패킷을 호스트로 보내고 ICMP "에코 응답" 패킷을 수신합니다. 발신 호스트에서 대상 컴퓨터로 보낸 메시지의 왕복 시간을 측정합니다.

주요 함수

gettimeofday: 현재 시간을 가져옵니다.

exit: 프로그램을 종료합니다.

inet_ntop / inet_pton: IP 주소를 이진 형식과 텍스트 형식 사이에서 변환합니다.

ntohs / htons: 네트워크 바이트 순서와 호스트 바이트 순서 사이에서 값을 변환합니다.

signal / alarm / usleep: 신호와 프로세스 슬립을 관리합니다.

socket / setsockopt / close: 소켓 작업을 관리합니다.

sendto / recvmsg: 소켓에서 메시지를 보내고 받습니다.

getpid / getuid: 프로세스 및 사용자 ID를 가져옵니다.

getaddrinfo / getnameinfo / freeaddrinfo: 주소 정보를 관리합니다.

strerror / gai_strerror: 오류 코드를 사람이 읽을 수 있는 문자열로 변환합니다.

printf 및 관련 함수: 데이터를 출력합니다.

사용법
ft_ping을 사용하려면 make를 사용하여 프로젝트를 컴파일하세요. 이렇게 하면 ft_ping 실행 파일이 생성됩니다. 그런 다음 대상 호스트를 인수로 실행 파일을 실행하세요.

기본 사용법
./ft_ping [host]

상세 모드
상세 출력을 활성화하려면 -v 옵션을 사용하세요.
./ft_ping -v [host]

Docker를 이용한 테스트
Debian 11이 설치된 Docker를 사용하여 ft_ping 프로젝트를 테스트할 수 있습니다. 다음 셸 스크립트를 실행하세요:
./myScript.sh

이 스크립트는 Debian 11이 설치된 Docker 컨테이너를 설정하여 격리된 환경에서 프로젝트를 테스트할 수 있게 해줍니다.
다른 운영 체제용 컴파일
제공된 Makefile을 사용하면 MacOS와 Linux를 포함한 다른 운영 체제용으로 프로젝트를 컴파일할 수 있습니다.

MacOS 컴파일
MacOS용으로 컴파일하려면 다음 명령어를 사용하세요:
make macos

Linux 컴파일
Linux용으로 컴파일하려면 다음 명령어를 사용하세요:
make linux

이를 통해 프로젝트를 다양한 플랫폼에서 문제없이 컴파일하고 실행할 수 있습니다.
이 README.md 파일에는 이제 Debian 11을 사용한 Docker 테스트와 Makefile을 사용한 다른 운영 체제용 컴파일에 대한 추가 정보가 포함되어 있습니다.