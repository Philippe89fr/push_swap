/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prambaud <prambaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:14:21 by prambaud          #+#    #+#             */
/*   Updated: 2024/11/28 10:15:52 by prambaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int ft_position_vs_max(t_list *lst)
{
    int i;
    t_list *current;

    i = 0;
    current = lst;
    if (!lst)
        return (0);
    while (current->index != ft_lstsize(lst) && current)
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

int ft_pushallA(t_list **lst, t_list **lst1) // on balance tous lvers b, en 4 groupes trie. Le but est d avoir les plus gros en bas.
{ 
    int res;

    res = 0;
    /* ON PEUT SUREMENT FAIRE DES SWAPS AU PASSAGE POUR AMELIORER LE TRI*/
    while (!ft_checkdecile(*lst, 0.5)) // envoie les < 0.5 dans B
    {
        if ((*lst)->decile <= 0.25) // les 0.25 sont mis au dessus
        {
            ft_push(lst, lst1);
            ft_rotate(lst1);
            res = res +2;
        }
        else if ((*lst)->decile <= 0.5) 
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
    while (!ft_checkdecile(*lst, 0.75)) // envoie les > 0.5 && < 0.75 dans B
    {
        if ((*lst)->decile <= 0.75)
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
    while (*lst) // puis les 0.75+
    {
        ft_push(lst, lst1);
        res++;
    }
    return (res);
}

int    ft_push_back_max(t_list **lst, t_list **lst1)
{
    int position;
    int size;
    int i;

    i = 0;
    size = ft_lstsize(*lst1);
    position = ft_position_vs_max(*lst1);/*
    if (size == 1)
    {
        ft_push(lst1, lst);
        i++;
    }*/
    if (position <= (size - position)) // si le max est plus proche du haut que du bas de la pile
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

void ft_algo(t_list **lst, t_list **lst1)
{
    t_list *current;
    t_list *currentB;
    int count;

    count = 0;
    current = *lst;
    currentB = *lst1;
    if (ft_check_ifdone(current))
        return; 
    printf("///GO\\\\n");
    ft_print_lst_all(current, currentB);
    count = count + ft_pushallA(&current, &currentB); // on balance tous les > med vers b
    printf("POST pushallA, lst:\n");
    ft_print_lst_all(current, currentB);
    printf("Le nombre d actions apres le PUSHA est de >> %d\n", count);
    count = count + ft_pushbackall(&current, &currentB);
    ft_print_lst_all(current, currentB);
    printf("Le nombre d actions est de >> %d\n", count);

/*
    printf("Le nombre d actions est de >> %d\n", count);
    count = count + ft_push_back_max(&current, &currentB);
        //printf("la position du max est %d\n", ft_position_vs_max(currentB));
    printf("Debut de PUSHBACK, lst:\n");
    printf("La position du MAX est: %d\n", ft_position_vs_max(currentB));
    count = count + ft_push_back_max(&current, &currentB);
    ft_print_lst_all(current, currentB);
    printf("Le nombre d actions est de >> %d apres push 1\n", count);
    count = count + ft_push_back_max(&current, &currentB);
    ft_print_lst_all(current, currentB);
    printf("Le nombre d actions est de >> %d apres push 2\n", count);
    count = count + ft_push_back_max(&current, &currentB);
    //ft_push(&currentB, &current);
    ft_print_lst_all(current, currentB); */
} 

