/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuomins <csuomins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 20:44:11 by csuomins          #+#    #+#             */
/*   Updated: 2025/08/13 17:41:28 by csuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		dst_len;
	size_t		src_len;

	dst_len = 0;
	while (dst_len < size && dst[dst_len] != '\0')
		dst_len++;
	src_len = ft_strlen(src);
	if (dst_len >= size)
		return (size + src_len);
	i = 0;
	while (src[i] != '\0' && (dst_len + i + 1 < size))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if (dst_len + i < size)
		dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

// int main (void)
// {
// 	char str2[50] = "bom dia porra!";
//  	char str1[] = "ingrid";
//  	size_t len;

//  	printf("Origem: %s\n", str1);
//  	len = ft_strlcat(str2, str1, 21);
//  	printf("Destino: %s\n", str2);
//  	printf("Tamanho da origem: %zu\n", len);
//  	return (0);
// }