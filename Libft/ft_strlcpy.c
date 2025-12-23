/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuomins <csuomins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 18:18:42 by csuomins          #+#    #+#             */
/*   Updated: 2025/08/13 17:41:33 by csuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t		i;
	size_t		src_len;

	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (!size)
		return (src_len);
	while ((src[i]) && (i < (size -1)))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

// int main (void)
// {
// 	char str1[] = "bom dia porra!";
// 	char str2[20];
// 	size_t len;

// 	printf("Origem: %s\n", str1);
// 	len = ft_strlcpy(str2, str1, 2);
// 	printf("Destino: %s\n", str2);
// 	printf("Tamanho da origem: %zu\n", len);
// 	return (0);
// }
