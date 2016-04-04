#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <string.h>

static void s_h(int s, siginfo_t *i, void *c) {
    printf("SIGUSR%d from %d\n", s == SIGUSR1 ? 1 : 2, i->si_pid);
}

int main(int argc, char* argv[]) {
    struct sigaction a;
    sigemptyset(&a.sa_mask);
    sigemptyset(&a.sa_mask);
    sigaddset(&a.sa_mask, SIGUSR1);
    sigaddset(&a.sa_mask, SIGUSR2);
    a.sa_sigaction = s_h;
    a.sa_flags = SA_SIGINFO;
    sigaction(SIGUSR1, &a, 0);
    sigaction(SIGUSR2, &a, 0);
    if (sleep(10) == 0)
        printf("No signals were caught\n");
    return 0;
}
