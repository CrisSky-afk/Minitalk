/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuomins <csuomins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 18:14:02 by csuomins          #+#    #+#             */
/*   Updated: 2025/08/13 17:41:44 by csuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t			i;
	unsigned char	str_s1;
	unsigned char	str_s2;

	i = 0;
	while (i < n)
	{
		str_s1 = (unsigned char)s1[i];
		str_s2 = (unsigned char)s2[i];
		if (str_s1 != str_s2)
			return (str_s1 - str_s2);
		if (str_s1 == '\0')
			break ;
		i++;
	}
	return (0);
}

// int main (void)
// {
// 	char *str1 = "rosas sao vermelhas";
// 	char *str2 = "rosas sao Azuis";
// 	int result = ft_strncmp(str1, str2, 11);
// 	printf("%d\n", result);
// 	if (result == 0)
// 		printf("As strings sao iguais");
// 	else if (result > 0)
// 		printf("A str1 e maior que str2");
// 	else
// 		printf("A str2 e maior que str1");
// 	return (0);
// }
