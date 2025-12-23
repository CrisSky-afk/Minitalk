#include "../includes_bonus/minitalk_bonus.h"

static void handler(int sig, siginfo_t *info, void *context)
{
    static int bit;
    static unsigned char c;

    (void)context;
    if (sig == SIGUSR1)
        c |= (1 << (7 - bit));
    bit++;
    if (kill(info->si_pid, SIGUSR1) == -1)
    {
        bit = 0;
        c = 0;
        return;
    }
    if (bit == 8)
    {
        if (c == '\0')
            write (1, "\n", 1);
        else
            write (1, &c, 1);
        bit = 0;
        c = 0;
    }
}


int main(void)
{
    struct sigaction sa;
    pid_t pid;
    char *pid_str;

    pid = getpid();
    pid_str = ft_itoa(pid);
    if (!pid_str)
        return (1);
    ft_printf("Server PID: %s\n", pid_str);
    ft_printf("Waiting for messages...\n");
    free(pid_str);

    sa.sa_sigaction = handler;
    sigemptyset(&sa.sa_mask);
    sigaddset(&sa.sa_mask, SIGUSR1);
    sigaddset(&sa.sa_mask, SIGUSR2);
    sa.sa_flags = SA_SIGINFO;

    if (sigaction(SIGUSR1, &sa, NULL) == -1 || sigaction(SIGUSR2, &sa, NULL) == -1)
        return (1);

    while (1)
        pause();
}