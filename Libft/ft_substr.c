/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuomins <csuomins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 16:55:33 by csuomins          #+#    #+#             */
/*   Updated: 2025/08/09 16:39:43 by csuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*empty;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= s_len)
	{
		empty = malloc(1);
		empty[0] = '\0';
		return (empty);
	}
	if ((s_len - start) < len)
		len = (s_len) - start;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_memcpy(str, s + start, len);
	str[len] = '\0';
	return (str);
}

// int main (void)
// {
// 	char str1[20] = "bomba de tijolos";

// 	char *result = ft_substr(str1, 9, 7);
// 	printf("%s\n", result);
// 	free(result);
// }