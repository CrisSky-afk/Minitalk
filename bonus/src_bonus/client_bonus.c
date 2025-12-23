#include "../includes_bonus/minitalk_bonus.h"

static volatile sig_atomic_t g_ack = 0;

static void ack_handler(int sig)
{
    (void)sig;
    g_ack = 1;
}

static void send_byte(pid_t pid, unsigned char c)
{
    int i;

    i = 0;
    while (i < 8)
    {
        g_ack = 0;
        if (c & (1 << (7 - i)))
            kill(pid, SIGUSR1);
        else
            kill(pid, SIGUSR2);
        while (!g_ack)
            pause();
        i++;
    }
}

int main (int argc, char *argv[])
{
    struct sigaction sa;
    pid_t pid;
    int i;

    if (argc != 3)
    {
        ft_printf("Usage : %s <PID> <message>\n", argv[0]);
        return (1);
    }

    pid = (pid_t)ft_atoi(argv[1]);

    if (pid <= 0)
    {
        ft_printf("Error: Invalid PID\n");
        return (1);
    }

    sa.sa_handler = ack_handler;
    sigemptyset(&sa.sa_mask);
    sa.sa_flags = 0;
    sigaction(SIGUSR1, &sa, NULL);

    i = 0;
    while (argv[2][i])
    {
        send_byte(pid, (unsigned char)argv[2][i]);
        i++;
    }
    send_byte(pid, '\0');
    return (0);
}