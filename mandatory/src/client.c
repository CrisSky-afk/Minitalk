#include "../includes/minitalk.h"

static void send_byte(pid_t pid, unsigned char c)
{
    int i = 0;

    while (i < 8)
    {
        if (c & (1 << (7 - i)))
            kill(pid, SIGUSR1);
        else
            kill(pid, SIGUSR2);

        usleep(750); // entre bits
        i++;
    }
    usleep(850); // 🔥 entre bytes (importante)
}


int main (int argc, char *argv[])
{
    pid_t pid;
    int i;

    if (argc != 3)
    {
        ft_printf("Usage: %s <PID> <message>\n", argv[0]);
        return (1);
    }
    pid = ft_atoi(argv[1]);
    if (pid <= 0)
    {
        ft_printf("Error: Invalid PID\n");
        return (1);
    }
    i = 0;
    while (argv[2][i])
    {
        send_byte(pid, (unsigned char)argv[2][i]);
        i++;
    }
    send_byte(pid, '\0');
    return (0);
}