/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuomins <csuomins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 16:07:16 by csuomins          #+#    #+#             */
/*   Updated: 2025/08/13 17:41:23 by csuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	len_total;
	size_t	len_s1;
	size_t	len_s2;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	len_total = ft_strlen(s1) + ft_strlen(s2);
	new_str = (char *)malloc((len_total + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	ft_memcpy(new_str, s1, len_s1);
	ft_memcpy((new_str + len_s1), s2, len_s2);
	new_str[len_total] = '\0';
	return (new_str);
}

// int main (void)
// {
// 	char *str1 = "fazendo ";
// 	char *str2 = "teste";
// 	char *result = ft_strjoin(str1, str2);
// 	printf("%s\n", result);
// 	free(result);
// }