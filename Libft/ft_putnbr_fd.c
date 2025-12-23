/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuomins <csuomins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 18:56:01 by csuomins          #+#    #+#             */
/*   Updated: 2025/08/13 17:38:56 by csuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr_long_fd(long number, int fd)
{
	if (number < 0)
	{
		ft_putchar_fd('-', fd);
		number = -number;
	}
	if (number >= 10)
		ft_putnbr_long_fd(number / 10, fd);
	ft_putchar_fd((number % 10) + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (fd < 0)
		return ;
	ft_putnbr_long_fd((long)n, fd);
}

// int main (void)
// {
// 	int nb = 15267228;
// 	ft_putnbr_fd(nb, 1);
// 	return (0);
// }