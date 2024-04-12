/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <ana-lda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 20:09:54 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/04/12 20:23:50 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dtr;
	char	*str;

	dtr = (char *)dest;
	str = (char *)src;
	if (!src && !dest)
		return (dest);
	if (dest < src)
		ft_memcpy(dtr, str, n);
	if (src < dest)
	{
		while (n--)
			dtr[n] = str[n];
	}
	return (dest);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	src[] = "galera";
	char	dest[] = "de cauboi";
	size_t	n = 0;
	
	printf("%s\n", (char *)ft_memmove(dest, src, n));
}*/