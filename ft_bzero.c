/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <ana-lda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 20:25:48 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/04/13 16:54:58 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*#include <strings.h>
#include <stdio.h>

int	main(void)
{
	char	str[] = "ana banana";

	printf("antes: %s\n", str);
	ft_bzero(str, 1);
	printf("depois: %s\n", str);
}*/