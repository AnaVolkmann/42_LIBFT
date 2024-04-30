/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <ana-lda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:06:55 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/04/30 14:49:07 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** @brief concatena duas strings.
 @param s1 e s2 sao string a serem concatenadas.
 @return uma nova string resultado da juncao de s1 e s2.
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + (ft_strlen(s2) + 1)));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		str[j++] = s1[i++];
	i = 0;
	while (s2[i])
		str[j++] = s2[i++];
	str[j] = 0;
	return (str);
}
/*#include <stdio.h>

int	main(void)
{
	char const	str1[] = "abc";
	char const	str2[] = "def";

	printf("antes s2:%s\n", str1);
	printf("antes s1:%s\n", str2);
	printf("depois do join: %s\n", ft_strjoin(str1, str2));
}*/