/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuomins <csuomins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 16:36:54 by csuomins          #+#    #+#             */
/*   Updated: 2025/08/12 17:24:08 by csuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t		i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// void	ft_to_upper(unsigned int i, char *c)
// {
// 	if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
// 		*c = *c - 32;
// }

// int main (void)
// {
// 	char str1[100] = "qual a semelhanca entre um corvo e uma escrivaninha";
// 	printf("Antes da alteracao: %s\n", str1);
// 	ft_striteri(str1, ft_to_upper);
// 	printf("Depois da alteracao: %s\n", str1);
// 	return (0);
// }