/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prambaud <prambaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:14:21 by prambaud          #+#    #+#             */
/*   Updated: 2024/11/29 17:13:22 by prambaud         ###   ########.fr       */
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
    while (current && current->index != ft_lstsize(lst))
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

int ft_checkdecile(t_list *lst, double n) // check si les noeds sont tous > a 'n'
{
    while (lst)
    {
        if (lst->decile < n)
            return (0);
        lst = lst->next;
    }
    return (1);
}


void ft_swap_if_sorted(t_list **lst) // swaper si dans l ordre croissant pour rendre B le plus decroissant possible // NOT USED
{
    if (!lst || !(*lst)->next)
        return ;
    if ((*lst)->index < (*lst)->next->index)
        ft_swapb(lst);
}

int ft_pushalla0_4(t_list **lst, t_list **lst1)
{
    int res;

    res = 0;
    if ((*lst)->decile <= 0.2) // les 0.2 sont mis au dessus
    {
        ft_pusha(lst, lst1);
        if ((*lst)->decile > 0.4)
             ft_rotatea(lst); //RR !! Si le prochain allait devoir etre rotate, on le rotate maintenant pour save un move
        ft_rotateb(lst1);
        res = res +2;
    }
    else if ((*lst)->decile <= 0.4) 
        res = res + ft_pusha(lst, lst1);
    else
        res = res + ft_rotatea(lst);
    return (res);
}

int ft_pushalla0_8(t_list **lst, t_list **lst1)
{
    int res;

    res = 0;
    if ((*lst)->decile <= 0.6) 
        res = res + ft_pusha(lst, lst1);
    else if ((*lst)->decile <= 0.8) // les 0.8 sont mis au dessus
    {
        ft_pusha(lst, lst1);
        ft_rotateb(lst1);
        if ((*lst)->decile > 0.8) //RR !! Si le prochain allait devoir etre rotate, on le rotate maintenant pour save un move
             ft_rotatea(lst);
        res = res +2;
    }
    else
        res = res + ft_rotatea(lst);
    return (res);
}

int ft_pushallA(t_list **lst, t_list **lst1) // on balance tous lvers b, en 4 groupes trie. Le but est d avoir les plus gros en bas.
{ 
    int res;

    res = 0;
    while (!ft_checkdecile(*lst, 0.4)) // envoie les < 0.4 dans B
        res = res + ft_pushalla0_4(lst, lst1);
    while (!ft_checkdecile(*lst, 0.8)) // envoie les < 0.8 dans B
        res = res + ft_pushalla0_8(lst, lst1);
    while (*lst) // puis les 0.8+
    {
        ft_pusha(lst, lst1);
        res++;
    }
    return (res);
}

int ft_swap_pushb(t_list **lst, t_list **lst1)
{
    ft_swapb(lst1);
    ft_pushb(lst1, lst);
    return (2);  
}

int ft_rotate_pushb(t_list **lst, t_list **lst1)
{
    ft_rotateb(lst1);
    ft_pushb(lst1, lst);
    return (2);  
}

int    ft_push_back_max(t_list **lst, t_list **lst1)
{
    int position;
    int i;

    i = 0;
    position = ft_position_vs_max(*lst1);
    if (position == 0) // Quand le plus grand est en position 0
        i = i + ft_pushb(lst1, lst);
    else if (position == 1) // Quand le plus grand est en position 1
        i = i + ft_swap_pushb(lst, lst1);
    else if (position <= (ft_lstsize(*lst1) - position)) // si le max est plus proche du bas que du bas de la pile
    {
        while (i < position - 1) // on rotate jusqu a l avant dernier
            i = i + ft_rotateb(lst1);
        if (ft_position_vs_sec_max(*lst1) > (ft_lstsize(*lst1) - ft_position_vs_sec_max(*lst1))) // si le 2eme plus grand est dans la partie haute il vaut mieux swap pour pas l eloigner
            i = i + ft_swap_pushb(lst, lst1);
        else
            i = i + ft_rotate_pushb(lst, lst1);
    }
    else // si le max est plus proche du haut que du haut de la pile on 
    {
        while (i < ft_lstsize(*lst1) - position)
            i = i + ft_reverseb(lst1);
        i = i + ft_pushb(lst1, lst);
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
    int fd;

    count = 0;
    current = *lst;
    currentB = *lst1;
    if (ft_check_ifdone(current))
        return (0);
    printf("///GO2\\\\n");
    count = count + ft_pushallA(&current, &currentB); // on balance tous les > med vers b
    printf("Le nombre d actions apres le PUSHA est de >> %d\n", count);
    count = count + ft_pushbackall(&current, &currentB);
    // //ft_print_lst_all(current, currentB); 
    printf("Le nombre d actions est de >> %d\n", count);
    printf("C' est OK? >> %d\n\n\n", ft_check_ifdone(current));
    return (count);
    ft_print_lst_all(current, currentB);
} 

