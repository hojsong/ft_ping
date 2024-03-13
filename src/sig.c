#include "../header/ft_ping.h"

extern struct addrinfo *g_res;
extern struct timeval total_time, program_start;
extern unsigned long long total, suc;
extern int   closefd, ac;
extern char  **av;
extern double *save_times;

void ft_printOptional(struct addrinfo *res){
  struct addrinfo *p;

  p = res;
  if (p->ai_family == AF_INET) {
    printf(" IPv4 address |");
  } else if (p->ai_family == AF_INET6) {
    printf(" IPv6 address |");
  }
}

void ft_rate(){
    unsigned long long rate;
    double averagesec, averageusec;
    
    printf("%llu packets transmitted, %llu packets received, ", total, suc);
    rate = ((total - suc) * 100) / total;
    printf("%llu%% packet loss, ", rate);
    averagesec = (double)(total_time.tv_sec * 1000000) / suc;
    averageusec = (double)(total_time.tv_usec) / suc;
    printf ("averageRTT : %.2fms", (averagesec + averageusec)/ 1000);
}

void process_end(){
    printf("--- Ping End url : %s ---\n", av[ac - 1]);
    if (ac == 3 && ft_strcmp(av[1], "-v") == 0){
        ft_printOptional(g_res);
        ft_rate();
    }
    freeaddrinfo(g_res);
    exit(0);
}

void signal_handler(int signum) {
    if (signum == SIGINT){
        process_end();
    }
}