/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuomins <csuomins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 18:48:12 by csuomins          #+#    #+#             */
/*   Updated: 2025/08/12 19:57:38 by csuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	write (fd, s, ft_strlen(s));
	write (fd, "\n", 1);
}

// int main (void)
// {
// 	char *str1 = "8 horinhas de sono";
// 	ft_putendl_fd(str1, 1);
// 	return (0);
// }
