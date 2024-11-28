/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_tools.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prambaud <prambaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 12:54:11 by vincent           #+#    #+#             */
/*   Updated: 2024/11/27 12:00:53 by prambaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int ft_posinlist(t_list *lst, int val)
{
    t_list *current;
    int tot;

    current = lst;
    tot = 0;
    while (current)
    {
        if (current->content < val)
            tot++;
        current = current->next;
    }
    return (tot); // nombre d élements plus petit que val
}

int ft_mediane(t_list *lst)
{
    int i;
    t_list  *current;

    current = lst;
    i = ft_lstsize(current);
    while (current)
    {
        if ((i % 2 != 0) && ft_posinlist(lst, current->content) == (i / 2))
            return (current->content); // lui et les plus petits representent 50%+ des elements au moins
        if ((i % 2 == 0) && ft_posinlist(lst, current->content) == (i / 2) - 1)
            return (current->content); // lui et les plus petits representent 50%+ des elements au moins
        current = current->next;
    }
    return (0);
}

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

int ft_check_ifdoneB(t_list *lst)
{
    t_list *current;

    current = lst;
    while (current->next && (current->content > current->next->content))
        current = current->next;
    if (!current->next)
        return (1);
    return (0);
}

int ft_check_if_med(t_list *lst, int med) // check si tous les chiffres sont < med
{
    t_list *current;

    if (!lst)
        return (0);
    current = lst;
    while (current)
    {
        if (current->content > med)
         return (0);
        current = current->next;
    }
    if (!current)
        return (1);
    return (0);
}
