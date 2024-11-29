/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algovf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prambaud <prambaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:14:21 by prambaud          #+#    #+#             */
/*   Updated: 2024/11/29 12:15:08 by prambaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int ft_position_vs_max(t_list *lst)
{
    int i;
    t_list *current;
    int size;

    size = ft_lstsize(lst);
    i = 0;
    current = lst;
    if (!lst)
        return (0);
    while (current && current->index != size)
    {
        i++;
        current = current->next;
    }
    return (i);
}

int ft_position_vs_sec_max(t_list *lst)
{
    int i;
    t_list *current;
    int size;

    size = ft_lstsize(lst);
    i = 0;
    current = lst;
    if (!lst || size == 1)
        return (0);
    while (current && current->index != (size - 1))
    {
        i++;
        current = current->next;
    }
    return (i);
}

int ft_checkdecile(t_list *lst, double n) // check si les noeds > a 'n'
{
    while (lst)
    {
        if (lst->decile < n)
            return (0);
        lst = lst->next;
    }
    return (1);
}

int ft_pushallA(t_list **lst, t_list **lst1) // on balance tous vers b, en 4 groupes trie. Le but est d avoir les plus gros en haut.
{ 
    int res;

    res = 0;
    /* ON PEUT SUREMENT FAIRE DES SWAPS AU PASSAGE POUR AMELIORER LE TRI*/
    while (!ft_checkdecile(*lst, 0.4)) // envoie les < 0.4 dans B
    {
        if ((*lst)->decile <= 0.2) // les 0.2 sont mis au dessus
        {
            ft_push(lst, lst1);
            ft_rotate(lst1);
            res = res +2;
        }
        else if ((*lst)->decile <= 0.4) 
        {
            ft_push(lst, lst1);
            res++;
        }
        else
        {
            ft_rotate(lst);
            res++;
        }
    }
    while (!ft_checkdecile(*lst, 0.8)) // envoie les < 0.8 dans B
    {
        if ((*lst)->decile <= 0.6) 
        {
            ft_push(lst, lst1);
            res++;
        }
        else if ((*lst)->decile <= 0.8) // les 0.8 sont mis au dessus
        {
            ft_push(lst, lst1);
            ft_rotate(lst1);
            res = res +2;
        }
        else
        {
            ft_rotate(lst);
            res++;
        }
    }
    while (*lst) // puis les 0.8+
    {
        ft_push(lst, lst1);
        res++;
    }
    return (res);
}

int    ft_push_back_max(t_list **lst, t_list **lst1)
{
    int position;
    int sec_position;
    int size;
    int i;
    t_list *currentB;

    currentB = *lst1;
    i = 0;
    size = ft_lstsize(*lst1);
    position = ft_position_vs_max(*lst1);
    sec_position = ft_position_vs_sec_max(currentB);
    if (size == 1) // Quand le premier est en position 0
    {
        ft_push(lst1, lst);
        i++;
    }
    /*
    else if (position == 1) // si le second est plus loin 
    {
        if ((size - sec_position) < sec_position && sec_position != 0) 
        {
            ft_rotate(lst1);
            ft_push(lst1, lst);
            i = i + 2;
        }
        else
        {
            ft_swap(lst1);
            ft_push(lst1, lst);
            i = i + 2;
        }
    }
    */
    else if (position == 1) // Quand le premier est en position 1
    {
        ft_swap(lst1);
        ft_push(lst1, lst);
        i = i + 2;
    } 
    else if (position <= (size - position)) // si le max est plus proche du haut que du bas de la pile
    {
        while (i < position)
        {
            ft_rotate(lst1);
            i++;
        }
        ft_push(lst1, lst);
        i++;
    }
    else // si le max est plus proche du bas que du haut de la pile
    {
        while (i < size - position)
        {
            ft_reverse(lst1);
            i++;
        }
        ft_push(lst1, lst);
        i++;
    }
    return (i);
}

int ft_pushbackall(t_list **lst, t_list **lst1)
{
    int res;

    res = 0;
    while (*lst1)
        res = res + ft_push_back_max(lst, lst1);
    return res;
}

int ft_algo(t_list **lst, t_list **lst1)
{
    t_list *current;
    t_list *currentB;
    int count;

    count = 0;
    current = *lst;
    currentB = *lst1;
    if (ft_check_ifdone(current))
        return (0); 
    printf("///GO\\\\n");
    // //ft_print_lst_all(current, currentB);
    count = count + ft_pushallA(&current, &currentB); // on balance tous les > med vers b
    printf("POST pushallA, lst:\n");
    // //ft_print_lst_all(current, currentB);
    printf("Le nombre d actions apres le PUSHA est de >> %d\n", count);
    count = count + ft_pushbackall(&current, &currentB);
    // //ft_print_lst_all(current, currentB); 
    printf("Le nombre d actions est de >> %d\n", count);
    printf("C' est OK? >> %d\n\n\n", ft_check_ifdone(current));
    return (count);
} 

