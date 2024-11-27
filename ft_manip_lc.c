/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manip_lc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 13:26:14 by vincent           #+#    #+#             */
/*   Updated: 2024/11/23 12:14:02 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void    ft_print_lst(t_list *lst)
{
    t_list *current;

    current = lst;
    while (current)
    {
        printf("%d\n", current->content);
        current = current->next;
    }
}

void    ft_print_lst_decile(t_list *lst)
{
    t_list *current;

    current = lst;
    while (current)
    {
        printf("%d et le decile: %lf\n", current->content, current->decile);
        current = current->next;
    }
}

void    ft_print_lst_index(t_list *lst)
{
    t_list *current;

    current = lst;
    while (current)
    {
        printf("La valeur est %d, l index est: %d et le decile: %lf\n", current->content, current->index, current->decile);
        current = current->next;
    }
}

void ft_swap(t_list **lst)
{
    int temp;

    if (!lst || !*lst || !(*lst)->next)
        return;
    temp = (*lst)->content;
    (*lst)->content = (*lst)->next->content;
    (*lst)->next->content = temp;
}

void ft_rotate2(t_list **lst)
{
    int temp;
    t_list *current;

    if (!lst || !*lst || !(*lst)->next)
        return;
    current = *lst;
    temp = current->content;
    while (current->next)
    {
        current->content = current->next->content;
        current = current->next;
    }
    current->content = temp;
}

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

void ft_rotate(t_list **lst)
{
    t_list *first;
    t_list *current;

    if (!lst || !*lst || !(*lst)->next)
        return;
    first = *lst; //stock la valeur du premier;
    *lst = (*lst)->next; // avance d un
    first->next = NULL; // deco le noeud
    current = ft_lstlast(*lst); // va sur le dernier
    current->next = first; // met le premier a la fin
}

void ft_reverse(t_list **lst)
{
    t_list *second_last;
    t_list *last;

    if (!lst || !*lst || !(*lst)->next)
        return;
    last = *lst;
    while (last->next) // va jusqu au dernier nœud
    {
        second_last = last; // trouve l avant-dernier nœud
        last = last->next;  // Passe au nœud suivant
    }
    second_last->next = NULL; // le nouveau dernier est NUllifié
    last->next = *lst; // met l ancient dernier au debut
    *lst = last; // remet le pointeur au debut
}

void ft_push(t_list **lst, t_list **lst1)
{
    t_list *first;

    if (!lst || !*lst)
        return;
    first = *lst; // stock valeur du premier de A
    *lst = (*lst)->next; // rebranche la chaine A à son nouveau début
    first->next = NULL; // Decroche de A
    if (!*lst1)
    {
        *lst1 = first; // Fait pointer au nouveau debut de B
    }
    else
    {
        first->next = *lst1; // branche à B
        *lst1 = first; // Fait pointer au nouveau debut de B
    }
}