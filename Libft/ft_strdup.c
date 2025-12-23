/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuomins <csuomins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 16:34:02 by csuomins          #+#    #+#             */
/*   Updated: 2025/08/13 17:41:14 by csuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	char	*size;

	len = ft_strlen((char *)s);
	size = (char *)malloc((len + 1) * (sizeof(char)));
	if (!size)
		return (NULL);
	ft_memcpy(size, s, len);
	size[len] = '\0';
	return (size);
}

// int main(void)
// {
//     char *str1 = "fazendo o teste da bagaça";
//     char *ptr = ft_strdup(str1);

//     printf("Conteúdo copiado: %s\n", ptr);   // mostra a string duplicada
//     printf("Endereço novo  : %p\n", (void *)ptr); // mostra o ponteiro novo
//     printf("Endereço original: %p\n", (void *)str1);// compara com o original

//     free(ptr); // boa prática: libera a memória alocada
//     return 0;
// }