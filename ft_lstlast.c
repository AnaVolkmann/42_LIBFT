/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <ana-lda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 20:17:32 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/04/23 20:53:07 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** @brief linhas 21: enquanto lst + 1 != de nulo...
lst recebe o proximo elemento da lista/
quanto o proximo elemento for nulo, 
entao retornamos o ultimo elemento da lista
 @param lst no da lista passado como parametro
 @return retorna o ultimo no da lista 
 */
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/* #include <stdio.h>

int	main(void)
{
	t_list	*n1;
	
	n1 = ft_lstnew("ola eu sou um noh");
	n1->next = ft_lstnew("oi\n");
	n1->next->next = ft_lstnew("ultimo noh\n");
	printf("o content do utlimo noh da lista eh: %s\n", 
	(char *)ft_lstlast(n1)->content);
} */