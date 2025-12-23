/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuomins <csuomins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 21:01:26 by csuomins          #+#    #+#             */
/*   Updated: 2025/08/13 17:41:37 by csuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str)
{
	size_t		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// int main (void)
// {
// 	char str1[] = "hsshsh";
// 	char str2[] = "bc";
// 	printf("%d\n", ft_strlen(str1));
// 	printf("%d\n", ft_strlen(str2));
// }