#include "../includes/minitalk.h"

static void handler(int sig)
{
    static int bit = 0;
    static unsigned char c = 0;

    if (sig == SIGUSR1)
        c |= (1 << (7 - bit));

    bit++;

    if (bit == 8)
    {
        if (c == '\0')
            write(1, "\n", 1);
        else
            write(1, &c, 1);
        bit = 0;
        c = 0;
    }
}

int main(void)
{
    struct sigaction sa;
    char *pid_str;

    pid_str = ft_itoa(getpid());
    if (!pid_str)
        return (1);

    ft_printf("Server PID: %s\n", pid_str);
    ft_printf("Waiting for messages...\n");
    free(pid_str);

    sa.sa_handler = handler;
    sigemptyset(&sa.sa_mask);
    sigaddset(&sa.sa_mask, SIGUSR1);
    sigaddset(&sa.sa_mask, SIGUSR2);
    sa.sa_flags = 0;

    if (sigaction(SIGUSR1, &sa, NULL) == -1 || sigaction(SIGUSR2, &sa, NULL) == -1)
        return (1);

    while (1)
        pause();
}
