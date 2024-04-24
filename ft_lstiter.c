/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <ana-lda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 18:54:46 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/04/24 20:11:03 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h>

void	ft_testiter(void *ptr)
{
	printf("%s\n", (char *)ptr + 1);
} */

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst && f)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
/* 


int	main(void)
{
	t_list	*lista;
	t_list	*lista2 = NULL;

	lista = malloc(sizeof(t_list));
	lista2 = malloc(sizeof(t_list));
	lista->content = "43";
	lista->next = lista2;
	lista2->content = "44";
	lista2->next = 	NULL;
	ft_lstiter(lista, ft_testiter);
	return (0);
} */