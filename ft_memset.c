/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <ana-lda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 17:19:32 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/04/12 18:06:32 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = (char) c;
		i++;
	}
	return (s);
}
/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	char a[] = "ana";
	har b[] = "ana";

	printf("ft_memset: %s\n", (char *)ft_memset(a, 's', 4));
	printf("memset: %s\n", (char *)memset(b, 's', 4));
}*/