/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuomins <csuomins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 19:23:09 by csuomins          #+#    #+#             */
/*   Updated: 2025/08/09 16:39:55 by csuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int				i;
	unsigned char	target;

	i = 0;
	target = (unsigned char)c;
	while (str[i] != '\0')
	{
		if (str[i] == target)
			return ((char *)(str + i));
		i++;
	}
	if (target == '\0')
		return ((char *)(str + i));
	return (NULL);
}

// int main (void)
// {
// 	char str1[20] = "calculadora";
// 	char *ptr;

// 	ptr = ft_strchr(str1, 'o');
// 	printf("%c\n", *ptr);
// 	return (0);
// }
