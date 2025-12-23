/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuomins <csuomins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 21:19:33 by csuomins          #+#    #+#             */
/*   Updated: 2025/08/13 17:40:58 by csuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned int	i;

	ptr = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (str);
}

// int main (void)
// {
// 	char str1[] = "estou fazendo testes";
// 	char *result = ft_memset(str1, '!', 8);
// 	printf("%s\n", result);
// 	return (0);
// }
