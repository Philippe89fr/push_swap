/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushall_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prambaud <prambaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 15:23:16 by prambaud          #+#    #+#             */
/*   Updated: 2024/11/30 15:24:03 by prambaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include "../libft/libft.h"

int ft_pushalla0_4(t_list **lst, t_list **lst1)
{
    int res;

    res = 0;
    if ((*lst)->decile <= 0.2) // les 0.2 sont mis au dessus
    {
        ft_pusha(lst, lst1);
        if ((*lst)->decile > 0.4) //RR !! Si le prochain allait devoir etre rotate, on le rotate maintenant pour save un move
             ft_rotatea_b(lst, lst1);
        else
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
        if ((*lst)->decile > 0.8) //RR !! Si le prochain allait devoir etre rotate, on le rotate maintenant pour save un move
             ft_rotatea_b(lst, lst1);
        else
            ft_rotateb(lst1);
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