/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuomins <csuomins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 20:04:55 by csuomins          #+#    #+#             */
/*   Updated: 2025/08/13 17:40:10 by csuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

// int main (void)
// {
// 	printf("%i\n", ft_isalnum(3));
// 	printf("%i\n", ft_isalnum('a'));
// 	printf("%i\n", ft_isalnum('P'));
// 	printf("%i\n", ft_isalnum('+'));
// }