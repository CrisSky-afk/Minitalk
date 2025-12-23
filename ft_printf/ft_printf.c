/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuomins <csuomins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 17:28:57 by csuomins          #+#    #+#             */
/*   Updated: 2025/08/26 17:55:52 by csuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_src(char format, va_list arg)
{
	int	ret;

	ret = 0;
	if (format == 'c')
		ret += ft_putchar(va_arg(arg, int));
	else if (format == 's')
		ret += ft_putstr(va_arg(arg, char *));
	else if (format == 'p')
		ret += ft_pointer((unsigned long)va_arg(arg, void *));
	else if (format == 'd' || format == 'i')
		ret += ft_putnbr(va_arg(arg, int));
	else if (format == 'u')
		ret += ft_putnbruns(va_arg(arg, unsigned int));
	else if (format == 'x')
		ret += ft_puthex(16, "0123456789abcdef", va_arg(arg, unsigned int));
	else if (format == 'X')
		ret += ft_puthex(16, "0123456789ABCDEF", va_arg(arg, unsigned int));
	else if (format == '%')
		ret += ft_putchar('%');
	return (ret);
}

int	ft_printf(const char *format, ...)
{
	size_t		i;
	int			ret;
	va_list		arg;

	va_start(arg, format);
	i = 0;
	ret = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			ret += ft_src(format[i + 1], arg);
			i += 2;
		}
		else
		{
			ret += ft_putchar(format[i]);
			i++;
		}
	}
	va_end (arg);
	return (ret);
}

// int main (void)
// {
// 	int n = 42;
// 	void *ptr = &n;
// 	ft_printf("Hello world!\n");
// 	ft_printf("Char: %c\n", 'A');
// 	ft_printf("String: %s\n", "Bom dia com b de bacana");
// 	ft_printf("Inteiro: %d\n", -86);
// 	ft_printf("Decimal: %i\n", 344);
// 	ft_printf("Números sem sinais: %u\n", 3535);
// 	ft_printf("Hexadecimal em minúsculo: %x\n", 63265719);
// 	ft_printf("Hexadecimal em maiúsculo: %X\n", 63265719);
// 	ft_printf("Sinal de porcebtagem: %%\n");
// 	ft_printf("Ponteiro: %p\n", ptr);
// }
