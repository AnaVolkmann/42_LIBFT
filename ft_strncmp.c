/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <ana-lda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:54:39 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/04/11 20:43:27 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (n > 0 && (s1[i] != '\0' || s2[i] != '\0'))
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	i++;
	n--;
	return (0);
}
/*#include <stdio.h>
#include <string.h>

int main(void)
{
    char    str[]= "ABCDEF";
    char    str1[]= "abcdef";
    unsigned int    i = 1;

    printf("%i\n", ft_strncmp(str, str1, i));
    printf("%i\n", strncmp(str, str1, i)); 
}*/