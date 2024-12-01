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

int ft_swapa(t_list **lst)
{
    int temp;
    double temp1;
    int temp2;

    if (!lst || !*lst || !(*lst)->next)
        return (0);
    temp = (*lst)->content;
    (*lst)->content = (*lst)->next->content;
    (*lst)->next->content = temp;
    temp1 = (*lst)->decile;
    (*lst)->decile = (*lst)->next->decile;
    (*lst)->next->decile = temp1;
    temp2 = (*lst)->index;
    (*lst)->index = (*lst)->next->index;
    (*lst)->next->index = temp2;
 //   ft_printf("sa\n");
    return (1);
}

int ft_swapb(t_list **lst)
{
    int temp;
    double temp1;
    int temp2;

    if (!lst || !*lst || !(*lst)->next)
        return (0);
    temp = (*lst)->content;
    (*lst)->content = (*lst)->next->content;
    (*lst)->next->content = temp;
    temp1 = (*lst)->decile;
    (*lst)->decile = (*lst)->next->decile;
    (*lst)->next->decile = temp1;
    temp2 = (*lst)->index;
    (*lst)->index = (*lst)->next->index;
    (*lst)->next->index = temp2;
  //  ft_printf("sb\n");
    return (1);
}

int ft_rotatea(t_list **lst)
{
    t_list *first;
    t_list *current;

    if (!lst || !*lst || !(*lst)->next)
        return (0);
    first = *lst; //stock la valeur du premier;
    *lst = (*lst)->next; // avance d un
    first->next = NULL; // deco le noeud
    current = ft_lstlast(*lst); // va sur le dernier
    current->next = first; // met le premier a la fin
 //   ft_printf("ra\n");
    return (1);
}

int ft_rotateb(t_list **lst)
{
    t_list *first;
    t_list *current;

    if (!lst || !*lst || !(*lst)->next)
        return (0);
    first = *lst; //stock la valeur du premier;
    *lst = (*lst)->next; // avance d un
    first->next = NULL; // deco le noeud
    current = ft_lstlast(*lst); // va sur le dernier
    current->next = first; // met le premier a la fin
 //   ft_printf("rb\n");
    return (1);
}

int ft_rotatea_b(t_list **lst, t_list **lst1)
{
    t_list *first;
    t_list *current;
    t_list *first1;
    t_list *current1;

    if (!lst || !*lst || !(*lst)->next)
        return (0);
    if (!lst1 || !*lst1 || !(*lst1)->next)
        return (0);
    first = *lst; //stock la valeur du premier;
    *lst = (*lst)->next; // avance d un
    first->next = NULL; // deco le noeud
    current = ft_lstlast(*lst); // va sur le dernier
    current->next = first; // met le premier a la fin

    first1 = *lst1; //stock la valeur du premier;
    *lst1 = (*lst1)->next; // avance d un
    first1->next = NULL; // deco le noeud
    current1 = ft_lstlast(*lst1); // va sur le dernier
    current1->next = first1; // met le premier a la fin
 //   ft_printf("rr\n");
    return (2);
}
