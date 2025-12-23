/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cris_sky <cris_sky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 18:29:26 by csuomins          #+#    #+#             */
/*   Updated: 2025/12/21 21:24:32 by cris_sky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	value;
	int	sign;

	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	value = 0;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		value = value * 10 + (*str - '0');
		str++;
	}
	return (value * sign);
}

// int main (void)
// {
// 	char str1[20] = "\n87";
// 	char str2[20] = "-7373 83";
// 	char str3[20] = "8d009";
// 	printf("%d\n", ft_atoi(str1));
// 	printf("%d\n", ft_atoi(str2));
// 	printf("%d\n", ft_atoi(str3));
// 	return (0);
// }
