/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuomins <csuomins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 17:55:59 by csuomins          #+#    #+#             */
/*   Updated: 2025/08/12 18:21:28 by csuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

// tela:
// int main (void)
// {
// 	ft_putchar_fd('L', 1);
// 	return (0);
// }

// arquivo:
// #include <fcntl.h>

// int main (void)
// {
// 	int fd = open("teste.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	if (fd == -1)
// 		return (1);
// 	ft_putchar_fd('V', fd);
// 	close (fd);
// 	return (0);
// }
