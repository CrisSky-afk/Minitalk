/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuomins <csuomins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 20:13:38 by csuomins          #+#    #+#             */
/*   Updated: 2025/08/13 17:40:53 by csuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char			*s;
	char				*d;
	const char			*last_s;
	char				*last_d;

	if (!dest && !src)
		return (NULL);
	d = dest;
	s = src;
	if (d < s)
		while (n--)
			*d++ = *s++;
	else
	{
		last_s = (s + (n - 1));
		last_d = (d + (n - 1));
		while (n--)
			*last_d-- = *last_s--;
	}
	return (dest);
}

// int main(void)
// {
// 	char str1[] = "feijao e melancia";
// 	char str2[] = "banana e alface";

// 	printf("Antes: %s\n", str2);
// 	ft_memmove(str2, str1, 1);
// 	printf("Depois: %s\n", str2);
// 	printf("\n");
// 	printf("Antes: %s\n", str2);
// 	ft_memmove(str2, str1 + 1, 2);
// 	printf("Depois: %s\n", str2);
// 	printf("\n");
// 	printf("Antes: %s\n", str2);
// 	ft_memmove(str2, str1 + 2, 3);
// 	printf("Depois: %s\n", str2);
// 	printf("\n");
// 	printf("Antes: %s\n", str2);
// 	ft_memmove(str2, str1 + 3, 4);
// 	printf("Depois: %s\n", str2);
// 	printf("\n");
// 	printf("Antes: %s\n", str2);
// 	ft_memmove(str2, str1 + 4, 5);
// 	printf("Depois: %s\n", str2);
// 	printf("\n");
// 	printf("Antes: %s\n", str2);
// 	ft_memmove(str2, str1 + 5, 6);
// 	printf("Depois: %s\n", str2);
// 	printf("\n");
// 	printf("Antes: %s\n", str2);
// 	ft_memmove(str2, str1 + 6, 7);
// 	printf("Depois: %s\n", str2);
// 	printf("\n");
// 	printf("Antes: %s\n", str2);
// 	ft_memmove(str2, str1 + 7, 8);
// 	printf("Depois: %s\n", str2);
// 	printf("\n");
// 	printf("Antes: %s\n", str2);
// 	ft_memmove(str2, str1 + 8, 9);
// 	printf("Depois: %s\n", str2);
// 	printf("\n");
// 	printf("Antes: %s\n", str2);
// 	ft_memmove(str2, str1 + 9, 10);
// 	printf("Depois: %s\n", str2);
// }
