/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuomins <csuomins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 19:01:34 by csuomins          #+#    #+#             */
/*   Updated: 2025/08/13 17:42:01 by csuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}

// int main (void)
// {
// 	char c = ft_tolower('A');
// 	write(1, &c, 1);
// 	write (1, "\n", 1);

// 	char d = ft_tolower('U');
// 	write(1, &d, 1);
// 	write (1, "\n", 1);

// 	char r = ft_tolower('v');
// 	write(1, &r, 1);
// }