/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuomins <csuomins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 19:57:19 by csuomins          #+#    #+#             */
/*   Updated: 2025/08/13 17:40:22 by csuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// int main (void)
// {
// 	printf("%i\n", ft_isdigit(6));
// 	printf("%i\n", ft_isdigit('v'));
// 	printf("%i\n", ft_isdigit('+'));
// 	printf("%i\n", ft_isdigit(0));
// }