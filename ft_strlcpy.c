/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <ana-lda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:23:44 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/04/12 21:11:48 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (!src[j])
		j++;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size -1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (j);
}
/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	destino[] = "pong";
	char	origem[] = "piiing";
	unsigned int	size;


	size = 5;
	printf("origem = %s\ndestino = %s\n", origem, destino);
	ft_strlcpy(destino, origem, size);
	printf("destino: %s\n", destino);
}*/