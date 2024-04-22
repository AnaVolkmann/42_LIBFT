/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <ana-lda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 11:33:32 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/04/22 19:59:28 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	if (*s == '\0')
		return (0);
	while (s[i])
	{
		if ((s[i] != c) && ((s[i + 1]) == c || s[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}
static int	next_word(char const *s, char c)
{
	int i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}
static int	ft_free(char **s, int n)
{
	while (n >= 0)
	{
		free(s[n--]);
	}
	free(s);
	return ('\0');
}
char	**ft_split(char const *s, char c)
{
	int		i;
	int		n;
	char	**result;

	n = count_words(s, c);
	result = ft_calloc(sizeof(char *), (n + 1));
	if (!s || !result)
		return (NULL);
	i = 0;
	while (i < n)
	{
		if (*s != c)
		{
			result[i] = (char *)ft_calloc(sizeof(char), next_word(s, c) + 1); 
			if (!result[i])
			{
				ft_free(result, i);
				return (NULL);
			}
			ft_strlcpy(result[i++], s, next_word(s, c) + 1);
			s += next_word(s, c);
		}
		s++;
	}
	return (result);
}

/* #include <stdio.h>

int	main(void)
{
	char	**t;
	int		i;

	i = 0;
	t = ft_split("", 'z');
	while (t[i - 1])
	{
		printf("%i -> %s\n", i, t[i]);
		i++;
	}
}  */