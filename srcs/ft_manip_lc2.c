/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manip_lc2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prambaud <prambaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 14:31:12 by prambaud          #+#    #+#             */
/*   Updated: 2024/11/30 15:29:40 by prambaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

// check si on a reussi
int ft_check_ifdone(t_list *lst)
{
    t_list *current;

    current = lst;
    while (current->next && (current->content < current->next->content))
        current = current->next;
    if (!current->next)
        return (1);
    return (0);
}

int ft_reversea(t_list **lst)
{
    t_list *second_last;
    t_list *last;

    if (!lst || !*lst || !(*lst)->next)
        return (0);
    last = *lst;
    while (last->next) // va jusqu au dernier nœud
    {
        second_last = last; // trouve l avant-dernier nœud
        last = last->next;  // Passe au nœud suivant
    }
    second_last->next = NULL; // le nouveau dernier est NUllifié
    last->next = *lst; // met l ancient dernier au debut
    *lst = last; // remet le pointeur au debut
    //ft_printf("rra\n");
    return (1);
}

int ft_reverseb(t_list **lst)
{
    t_list *second_last;
    t_list *last;

    if (!lst || !*lst || !(*lst)->next)
        return (0);
    last = *lst;
    while (last->next) // va jusqu au dernier nœud
    {
        second_last = last; // trouve l avant-dernier nœud
        last = last->next;  // Passe au nœud suivant
    }
    second_last->next = NULL; // le nouveau dernier est NUllifié
    last->next = *lst; // met l ancient dernier au debut
    *lst = last; // remet le pointeur au debut
  //  ft_printf("rrb\n");
    return (1);
}

int ft_pushb(t_list **lst, t_list **lst1)
{
    t_list *first;

    if (!lst || !*lst)
        return (0);
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
   // ft_printf("pb\n");
   return (1);
}

int ft_pusha(t_list **lst, t_list **lst1)
{
    t_list *first;

    if (!lst || !*lst)
        return (0);
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
    //  ft_printf("pa\n");
    return (1);
}