/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuomins <csuomins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 16:55:14 by csuomins          #+#    #+#             */
/*   Updated: 2025/08/13 18:23:52 by csuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countword(char const *str, char c)
{
	size_t		count;

	if (!str || !*str)
		return (0);
	count = 0;
	while (*str != '\0')
	{
		while (*str == c)
			str++;
		if (*str != '\0' && *str != c)
		{
			count++;
			while (*str != '\0' && *str != c)
				str++;
		}
	}
	return (count);
}

static int	ft_fill_result(const char *s, char c, char **result)
{
	size_t		word_len;
	size_t		i;

	i = 0;
	while (*s != '\0')
	{
		while (*s != '\0' && *s == c)
			s++;
		if (*s != '\0' && *s != c)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			result[i] = ft_substr(s, 0, word_len);
			if (!result[i])
			{
				return (i);
			}
			s += word_len;
			i++;
		}
	}
	result[i] = NULL;
	return (-1);
}

char	**ft_split(char const *s, char c)
{
	int		word_count;
	char	**words;
	int		status;

	if (!s)
		return (NULL);
	word_count = ft_countword(s, c);
	words = malloc(sizeof(char *) * (word_count + 1));
	if (!words)
		return (NULL);
	status = ft_fill_result(s, c, words);
	if (status != -1)
	{
		while (status > 0)
			free(words[--status]);
		free (words);
		return (NULL);
	}
	return (words);
}

// int main (void)
// {
// 	const char *str1 = "split  ||this|for|me|||||!|";
// 	char c = '|';
// 	char **words;

// 	words = ft_split(str1, c);
// 	if (!words)
// 		return 1;

// 	printf("Antes de splitar: %s\n", str1);
// 	printf("Depois de splitar:\n");
// 	int i = 0;
// 	while (words[i])
// 	{
// 		printf("%s\n", words[i]);
// 		i++;
// 	}
// 	i = 0;
// 	while (words[i])
// 	{
//     	free(words[i]);  // libera cada string individual
//     	i++;
// 	}
// 	free(words);  // libera o array de ponteiros

// 	return 0;
// }

// ft_split cria o array (char **) 
// → ponteiro de ponteiro.
// ft_fill_result preenche esse array 
// → precisa receber o mesmo ponteiro de ponteiro.