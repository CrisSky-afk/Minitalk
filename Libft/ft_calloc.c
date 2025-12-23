/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuomins <csuomins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 16:18:28 by csuomins          #+#    #+#             */
/*   Updated: 2025/08/13 17:40:01 by csuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, (nmemb * size));
	return (ptr);
}

// int main(void)
// {
//     int i = 0;
//     char *str = ft_calloc(10, sizeof(char)); // aloca e zera 10 chars
//     if (!str)
//     {
//         printf("Falha na alocação!\n");
//         return 1;
//     }

//     while (i < 10)
//     {
//         i++;
//         printf("%d ", str[i]);
//     }

//     free(str);

//     return 0;
// }

// int main(void)
// {
//     void *ptr;

//     // Teste calloc com nmemb = 0 e size = 0
//     ptr = ft_calloc(0, 0);
//     if (!ptr)
//     {
//         printf("Retornou NULL! Não deve acontecer.\n");
//         return 1;
//     }

//     printf("ft_calloc(0,0) retornou um ponteiro válido: %p\n", ptr);

//     free(ptr);
//     printf("free(ptr) executado com sucesso.\n");

//     return 0;
// }