/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuomins <csuomins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 18:46:20 by csuomins          #+#    #+#             */
/*   Updated: 2025/08/13 17:40:38 by csuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char	*ptr;
	size_t				i;

	ptr = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}

// int main (void)
// {
// 	char *str1 = "xuxuzinho";
// 	char *ptr = ft_memchr(str1, 'z', 10);

// 	if (ptr)
// 		printf("%s\n", ptr);
// 	else
// 		printf("não existe esse caractere aqui mano");
// }

// // #include <stdio.h>
// #include <string.h>

// int main() {
//   char str[] = "hello world";
//   char *ptr;
//   int c = 'o';
//   size_t n = strlen(str);

//   ptr = (char *)ft_memchr(str, c, n);

//   if (ptr) {
//     printf("Caractere '%c' encontrado em: %s\n", c, ptr);
//   } else {
//     printf("Caractere '%c' não encontrado\n", c);
//   }

//   return 0;
// }