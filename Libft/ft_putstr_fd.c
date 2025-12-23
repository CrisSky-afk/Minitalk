/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuomins <csuomins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 18:21:57 by csuomins          #+#    #+#             */
/*   Updated: 2025/08/13 18:33:31 by csuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	write (fd, s, ft_strlen(s));
}

// int main (void)
// {
// 	char *str1 = "paozinho na chapa";
// 	ft_putstr_fd(str1, 1);
// 	return (0);
// }

// int main (void)
// {
// 	char *str1 = "\nend!";
// 	ft_putstr_fd(str1, -1);
// 	return (0);
// }

// #include <fcntl.h>
// #include <unistd.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main(void)
// {
// 	int fd = open("teste.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	if (fd < 0)
// 	{
// 		perror("Erro ao abrir o arquivo");
// 		return 1;
// 	}

// 	ft_putstr_fd("abcdef\n", fd);
// 	ft_putstr_fd("1234\t567\n", fd);
// 	ft_putstr_fd("\nend!", -1);  // fd inválido, não escreve nada
// 	ft_putstr_fd("\nend!", fd);

// 	close(fd);

// 	// Ler e imprimir o conteúdo do arquivo para conferir
// 	fd = open("teste.txt", O_RDONLY);
// 	if (fd < 0)
// 	{
// 		perror("Erro ao abrir o arquivo para leitura");
// 		return 1;
// 	}

// 	char buf[1024];
// 	ssize_t n = read(fd, buf, sizeof(buf) - 1);
// 	if (n < 0)
// 	{
// 		perror("Erro ao ler arquivo");
// 		close(fd);
// 		return 1;
// 	}
// 	buf[n] = '\0';

// 	printf("Conteúdo do arquivo:\n%s\n", buf);

// 	close(fd);
// 	return 0;
// }
