/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuomins <csuomins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 15:46:37 by csuomins          #+#    #+#             */
/*   Updated: 2025/08/12 16:32:56 by csuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nblen(int nb)
{
	int		len;
	long	n;

	len = 0;
	n = nb;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

void	ft_alldig(char *str, long n, size_t *i)
{
	if (n >= 10)
		ft_alldig(str, n / 10, i);
	str[*i] = '0' + ((n % 10));
	(*i)++;
}

char	*ft_itoa(int n)
{
	char		*result;
	size_t		i;
	long		nb;

	result = (char *)malloc(sizeof(char) * (ft_nblen(n) + 1));
	i = 0;
	if (!result)
		return (NULL);
	if (n < 0)
	{
		result[0] = '-';
		i = 1;
	}
	else
	{
		i = 0;
	}
	nb = n;
	if (nb < 0)
		nb = -nb;
	ft_alldig(result, nb, &i);
	result[i] = '\0';
	return (result);
}

// int main (void)
// {
// 	int number = -727827227;
// 	char *result = ft_itoa(number);
// 	printf("Valor do numero inteiro: %i\n", number);
// 	printf("Valor do resultado em uma string de char: %s\n", result);
// 	free(result);
// }

// int main (void)
// {
//     char str1[20];
//     size_t i = 0;
//     long n = 12345;

//     ft_alldig(str1, n, &i);
//     str1[i] = '\0'; // finaliza a string

//     printf("Resultado da recursiva: %s\n", str1);

//     return 0;
// }