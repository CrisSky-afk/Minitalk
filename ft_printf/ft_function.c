/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_function.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuomins <csuomins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 17:45:07 by csuomins          #+#    #+#             */
/*   Updated: 2025/08/26 18:13:36 by csuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		str = "(null)";
	while (str[i] != '\0')
		i += ft_putchar(str[i]);
	return (i);
}

int	ft_putnbr(int nb)
{
	long	number;
	int		ret;

	number = nb;
	ret = 0;
	if (number < 0)
	{
		ret += ft_putchar('-');
		number = -number;
	}
	if (number >= 10)
		ret += ft_putnbr(number / 10);
	ret += ft_putchar((number % 10) + '0');
	return (ret);
}

// int main (void) //main da ft_putstr
// {
// 	char *str1 = "testando uns negocio ai";
// 	char *str2 = NULL;
// 	int n1 = ft_putstr(str1);

// 	write (1, "\n", 1);
	// ft_putstr(str1);
	// ft_putchar('\n');
	// ft_putstr(str2);
	// ft_putchar('\n');

// 	printf("%d\n", n1);
// }

// int main (void) \\ main ft_putnbr
// {
// 	int		n = 1654;
// 	printf("%i\n", n);
// 	printf("%d\n", ft_putnbr(n));
// }