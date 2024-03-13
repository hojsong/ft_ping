#pragma once 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netinet/ip.h>
#include <netinet/ip_icmp.h>
#include <arpa/inet.h>
#include <sys/time.h>
#include <signal.h>
#include <netdb.h>
#include <regex.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>

#define DEST_PORT 0
#define PACKET_SIZE 64
#define TIMEOUT 1  
#define BUF_SIZE 512

void            process_end();
void            signal_handler(int signum);
void            ft_printOptional(struct addrinfo *res);
void            ft_rate();
double          sqrt_newton_raphson(double c);


int             validate_domain_name(const char *domainName);
void	        *ft_memset(void *b, int c, size_t len);
int             ft_strcmp(char *str, char *opt);
int             optional(char *str, char *opt);
void            fill_icmp_packet(struct icmp *icmp_hdr, int sequence);
int             time_stamp(struct timeval start, struct timeval end, struct timeval *total);
unsigned short  checksum(unsigned short *paddress, int len);
