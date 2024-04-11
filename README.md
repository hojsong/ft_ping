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
