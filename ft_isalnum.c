/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <ana-lda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 20:48:37 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/04/11 21:12:03 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c < 'A' || (c > 'Z' && c < 'a') || c > 'z') && (c < 48 || c > 57))
		return (0);
	return (8);
}
/*#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	printf("%i\n", ft_isalnum('a'));
	printf("%i\n", isalnum('a'));
}*/