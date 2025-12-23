/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuomins <csuomins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 17:41:11 by csuomins          #+#    #+#             */
/*   Updated: 2025/08/26 17:41:43 by csuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbruns(unsigned int nb)
{
	int	ret;

	ret = 0;
	if (nb >= 10)
		ret += ft_putnbruns(nb / 10);
	ret += ft_putchar((nb % 10) + '0');
	return (ret);
}

int	ft_puthex(int base, char *basehex, unsigned long nb)
{
	int	ret;

	ret = 0;
	if (nb / base)
		ret += ft_puthex(base, basehex, nb / base);
	ret += ft_putchar(basehex[nb % base]);
	return (ret);
}

int	ft_pointer(unsigned long ptr)
{
	int	ret;

	ret = 0;
	if (!ptr)
		return (ft_putstr("(nil)"));
	ret += ft_putstr("0x");
	ret += ft_puthex(16, "0123456789abcdef", ptr);
	return (ret);
}
