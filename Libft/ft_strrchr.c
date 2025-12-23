/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuomins <csuomins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 19:58:42 by csuomins          #+#    #+#             */
/*   Updated: 2025/08/13 17:41:53 by csuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int				i;
	unsigned char	target;

	i = 0;
	target = (unsigned char)c;
	while (str[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (str[i] == target)
			return ((char *)(str + i));
		i--;
	}
	return (NULL);
}

// int main (void)
// {
// 	char str1[20] = "moedor de carne";
// 	char *ptr;

// 	ptr = ft_strrchr(str1, 'r');
// 	printf("%c\n", *ptr);
// 	return (0);
// }

// int	main(void)
// {
// 	char *str1 = "moedor de carne";
// 	char *ptr;

// 	ptr = ft_strrchr(str1, 'r');

// 	if (ptr)
// 	{
// 		printf("Último 'r': %c\n", *ptr);
// 		printf("Índice do último 'r': %ld\n", ptr - str1);
// 	}
// 	else
// 		printf("'r' não encontrado\n");

// 	return (0);
// }