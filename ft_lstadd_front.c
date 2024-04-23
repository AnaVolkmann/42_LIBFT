/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <ana-lda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:59:53 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/04/23 18:24:52 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_front(t_list **lst, t_list *new)
{
    if (new && lst)
    {
        new->next = *lst;
        *lst = new;
    }
}

/* #include "libft.h"
#include <stdio.h>

int main(void)
{
    t_list *lst;
    t_list  *lst2;
    t_list  *new;

    lst = malloc(sizeof(t_list));
    lst2 = malloc(sizeof(t_list));
    lst->content = "abcd";
    lst->next = lst2;
    lst2->content = "efgh";
    lst2->next = NULL;
    new = malloc(sizeof(t_list));
    new->content = "ABCD";
    new->next = NULL;
    printf("%s\n", (char*)new->next);
	ft_lstadd_front(&lst, new);
	printf("%s", (char *)new->next);
} */