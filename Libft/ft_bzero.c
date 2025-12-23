/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuomins <csuomins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 21:49:01 by csuomins          #+#    #+#             */
/*   Updated: 2025/08/13 17:39:53 by csuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t nb)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < nb)
	{
		ptr[i] = 0;
		i++;
	}
}

// int main (void)
// {
// 	char str1[] = "estou fazendo testes";
// 	int i = 0;

// 	ft_bzero(str1, 10);
// 	while (i < (int) sizeof(str1))
// 	{
// 		if (str1[i] == '\0')
// 			printf("0");
// 		else
// 			printf("%c", str1[i]);
// 		i++;
// 	}
//	return (0);
// }

// int main (void)
// {
// 	char str1[] = "string de teste";
// 	ft_bzero(str1, 2);
// 	write (1, str1, sizeof(str1));
// 	return (0);
// }