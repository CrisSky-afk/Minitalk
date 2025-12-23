/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuomins <csuomins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 18:35:27 by csuomins          #+#    #+#             */
/*   Updated: 2025/08/12 17:19:17 by csuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

// int main (void)
// {
// 	char c = ft_toupper('a');
// 	write(1, &c, 1);
// 	write (1, "\n", 1);

// 	char d = ft_toupper('U');
// 	write(1, &d, 1);
// 	write (1, "\n", 1);

// 	char r = ft_toupper('v');
// 	write(1, &r, 1);
// }
