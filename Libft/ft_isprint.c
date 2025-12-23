/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuomins <csuomins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 20:23:33 by csuomins          #+#    #+#             */
/*   Updated: 2025/08/13 17:40:25 by csuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// int main (void)
// {
// 	printf("%i\n", ft_isprint(3));
// 	printf("%i\n", ft_isprint('g'));
// 	printf("%i\n", ft_isprint('9'));
// 	printf("%i\n", ft_isprint(31));
// }