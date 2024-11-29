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
 //   printf("sa\n");
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
  //  printf("sb\n");
    return (1);
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
 //   printf("ra\n");
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
 //   printf("rb\n");
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
 //   printf("rr\n");
    return (2);
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
  //  printf("rra\n");
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
  //  printf("rrb\n");
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
   // printf("pb\n");
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
    //  printf("pa\n");
    return (1);
}