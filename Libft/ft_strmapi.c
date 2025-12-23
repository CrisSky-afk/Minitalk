/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuomins <csuomins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 15:54:45 by csuomins          #+#    #+#             */
/*   Updated: 2025/08/12 16:26:07 by csuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t				s_len;
	char				*str;
	unsigned int		i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	str = malloc(s_len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char	to_lower(unsigned int i, char c)
// {
// 	if (i % 2 == 0 && c >= 'A' && c <= 'Z')
// 		return (c + 32);
// 	return (c);
// }

// int main (void)
// {
// 	char str1[100] = "QUAL A SEMELHANCA DE UM CORVO E UMA ESCRIVANINHA?";
// 	char *result = ft_strmapi(str1, to_lower);
// 	printf("Antes da modificacao:%s\n ", str1);
// 	printf("Depois da modificacao:%s\n ", result);
// 	free(result);
// }
