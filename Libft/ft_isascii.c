/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuomins <csuomins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 20:10:53 by csuomins          #+#    #+#             */
/*   Updated: 2025/08/13 17:40:18 by csuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// int main (void)
// {
// 	printf("%i\n", ft_isascii(2));
// 	printf("%i\n", ft_isascii('o'));
// 	printf("%i\n", ft_isascii('M'));
// 	printf("%i\n", ft_isascii('~'));
// 	printf("%i\n", ft_isascii(' '));
// 	printf("%i\n", ft_isascii(130));
// }