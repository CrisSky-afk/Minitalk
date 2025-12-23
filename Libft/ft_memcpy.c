/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuomins <csuomins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 18:06:25 by csuomins          #+#    #+#             */
/*   Updated: 2025/08/13 17:40:48 by csuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_src;
	unsigned char	*ptr_dest;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	ptr_src = (unsigned char *)src;
	ptr_dest = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		ptr_dest[i] = ptr_src[i];
		i++;
	}
	return (dest);
}

// int main (void)
// {
// 	char	str1[] = "estou testando";
// 	char	str2[sizeof(str1)];
// 	char *result = ft_memcpy(str2, str1, 4);
// 	printf("%s\n", result);
// 	return (0);
// }
