/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <ana-lda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 11:33:32 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/04/20 11:56:19 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static 	count_words(char *s, char c)
{
	int i;
	int words;

	i = 0;
	words = 0;
	while (s[i])
		if (s[i] != c && (s[i] +1) == c)
			words++;
		i++;
	return (words);
}
static	next_word(char const *s, char c)
{
	int i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}
static ft_free(char **s, int n)
{
	int i;

	i = 0;
	while (i <= n)
	{
		free(s[i]);
		n--;
	}
	free(s);
}
char	**ft_split(char const *s, char c)
{
	int	j;
	char const *result;

	result = (char *)malloc(sizeof(char) * ())
}