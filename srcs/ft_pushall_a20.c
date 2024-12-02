/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushall_a181.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prambaud <prambaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 15:23:16 by prambaud          #+#    #+#             */
/*   Updated: 2024/12/02 13:16:55 by prambaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include "../libft/libft.h"

int ft_pushalla0_10(t_list **lst, t_list **lst1)
{
    int res;

    res = 0;
    if ((*lst)->decile <= 0.05) // les 0.2 sont mis au dessus
    {
        ft_pusha(lst, lst1);
        if ((*lst)->decile > 0.10) //RR !! Si le prochain allait devoir etre rotate, on le rotate maintenant pour save un move
             ft_rotatea_b(lst, lst1);
        else
            ft_rotateb(lst1);
        res = res +2;
    }
    else if ((*lst)->decile <= 0.10) 
        res = res + ft_pusha(lst, lst1);
    else
        res = res + ft_rotatea(lst);
    return (res);
}

int ft_pushalla0_20(t_list **lst, t_list **lst1)
{
    int res;

    res = 0;
    if ((*lst)->decile <= 0.15) // les 0.2 sont mis au dessus
    {
        ft_pusha(lst, lst1);
        if ((*lst)->decile > 0.20) //RR !! Si le prochain allait devoir etre rotate, on le rotate maintenant pour save un move
             ft_rotatea_b(lst, lst1);
        else
            ft_rotateb(lst1);
        res = res +2;
    }
    else if ((*lst)->decile <= 0.20) 
        res = res + ft_pusha(lst, lst1);
    else
        res = res + ft_rotatea(lst);
    return (res);
}

int ft_pushalla0_30(t_list **lst, t_list **lst1)
{
    int res;

    res = 0;
    if ((*lst)->decile <= 0.25) // les 0.2 sont mis au dessus
    {
        ft_pusha(lst, lst1);
        if ((*lst)->decile > 0.30) //RR !! Si le prochain allait devoir etre rotate, on le rotate maintenant pour save un move
             ft_rotatea_b(lst, lst1);
        else
            ft_rotateb(lst1);
        res = res +2;
    }
    else if ((*lst)->decile <= 0.30) 
        res = res + ft_pusha(lst, lst1);
    else
        res = res + ft_rotatea(lst);
    return (res);
}
int ft_pushalla0_40(t_list **lst, t_list **lst1)
{
    int res;

    res = 0;
    if ((*lst)->decile <= 0.35) // les 0.2 sont mis au dessus
    {
        ft_pusha(lst, lst1);
        if ((*lst)->decile > 0.40) //RR !! Si le prochain allait devoir etre rotate, on le rotate maintenant pour save un move
             ft_rotatea_b(lst, lst1);
        else
            ft_rotateb(lst1);
        res = res +2;
    }
    else if ((*lst)->decile <= 0.40) 
        res = res + ft_pusha(lst, lst1);
    else
        res = res + ft_rotatea(lst);
    return (res);
}

int ft_pushalla0_50(t_list **lst, t_list **lst1)
{
    int res;

    res = 0;
    if ((*lst)->decile <= 0.45) // les 0.2 sont mis au dessus
    {
        ft_pusha(lst, lst1);
        if ((*lst)->decile > 0.50) //RR !! Si le prochain allait devoir etre rotate, on le rotate maintenant pour save un move
             ft_rotatea_b(lst, lst1);
        else
            ft_rotateb(lst1);
        res = res +2;
    }
    else if ((*lst)->decile <= 0.50) 
        res = res + ft_pusha(lst, lst1);
    else
        res = res + ft_rotatea(lst);
    return (res);
}
int ft_pushalla0_60(t_list **lst, t_list **lst1)
{
    int res;

    res = 0;
    if ((*lst)->decile <= 0.55) // les 0.2 sont mis au dessus
    {
        ft_pusha(lst, lst1);
        if ((*lst)->decile > 0.60) //RR !! Si le prochain allait devoir etre rotate, on le rotate maintenant pour save un move
             ft_rotatea_b(lst, lst1);
        else
            ft_rotateb(lst1);
        res = res +2;
    }
    else if ((*lst)->decile <= 0.60) 
        res = res + ft_pusha(lst, lst1);
    else
        res = res + ft_rotatea(lst);
    return (res);
}

int ft_pushalla0_70(t_list **lst, t_list **lst1)
{
    int res;

    res = 0;
    if ((*lst)->decile <= 0.65) // les 0.2 sont mis au dessus
    {
        ft_pusha(lst, lst1);
        if ((*lst)->decile > 0.70) //RR !! Si le prochain allait devoir etre rotate, on le rotate maintenant pour save un move
             ft_rotatea_b(lst, lst1);
        else
            ft_rotateb(lst1);
        res = res +2;
    }
    else if ((*lst)->decile <= 0.70) 
        res = res + ft_pusha(lst, lst1);
    else
        res = res + ft_rotatea(lst);
    return (res);
}
int ft_pushalla0_80(t_list **lst, t_list **lst1)
{
    int res;

    res = 0;
    if ((*lst)->decile <= 0.75) // les 0.2 sont mis au dessus
    {
        ft_pusha(lst, lst1);
        if ((*lst)->decile > 0.80) //RR !! Si le prochain allait devoir etre rotate, on le rotate maintenant pour save un move
             ft_rotatea_b(lst, lst1);
        else
            ft_rotateb(lst1);
        res = res +2;
    }
    else if ((*lst)->decile <= 0.80) 
        res = res + ft_pusha(lst, lst1);
    else
        res = res + ft_rotatea(lst);
    return (res);
}
int ft_pushalla0_90(t_list **lst, t_list **lst1)
{
    int res;

    res = 0;
    if ((*lst)->decile <= 0.85) // les 0.2 sont mis au dessus
    {
        ft_pusha(lst, lst1);
        if ((*lst)->decile > 0.90) //RR !! Si le prochain allait devoir etre rotate, on le rotate maintenant pour save un move
             ft_rotatea_b(lst, lst1);
        else
            ft_rotateb(lst1);
        res = res +2;
    }
    else if ((*lst)->decile <= 0.90) 
        res = res + ft_pusha(lst, lst1);
    else
        res = res + ft_rotatea(lst);
    return (res);
}

int ft_pushalla1_20(t_list **lst, t_list **lst1)
{
    int res;

    res = 0;
    if ((*lst)->decile <= 0.95) 
    {
        ft_pusha(lst, lst1);
        ft_rotateb(lst1);
        res = res +2;
    }
    else
        res = res + ft_pusha(lst, lst1);
    return (res);
}

int ft_pushallA20(t_list **lst, t_list **lst1) // on balance tous lvers b, en 6 groupes trie. Le but est d avoir les plus gros en bas.
{ 
    int res;

    res = 0;
    while (!ft_checkdecile(*lst, 0.10)) // envoie les < 0.166 dans B
        res = res + ft_pushalla0_10(lst, lst1);
    while (!ft_checkdecile(*lst, 0.20)) // envoie les < 0.332 dans B
        res = res + ft_pushalla0_20(lst, lst1);
    while (!ft_checkdecile(*lst, 0.30)) // envoie les < 0.498 dans B
        res = res + ft_pushalla0_30(lst, lst1);
    while (!ft_checkdecile(*lst, 0.40)) // envoie les < 0.664 dans B
        res = res + ft_pushalla0_40(lst, lst1);
    while (!ft_checkdecile(*lst, 0.50)) // envoie les < 0.664 dans B
        res = res + ft_pushalla0_50(lst, lst1);
    while (!ft_checkdecile(*lst, 0.60)) // envoie les < 0.830dans B
        res = res + ft_pushalla0_60(lst, lst1);
    while (!ft_checkdecile(*lst, 0.70)) // envoie les < 0.830dans B
        res = res + ft_pushalla0_70(lst, lst1);
    while (!ft_checkdecile(*lst, 0.80)) // envoie les < 0.830dans B
        res = res + ft_pushalla0_80(lst, lst1);
            while (!ft_checkdecile(*lst, 0.90)) // envoie les < 0.830dans B
        res = res + ft_pushalla0_90(lst, lst1);
    while (*lst) // puis les 0.830+
        res = res + ft_pushalla1_20(lst, lst1);
    return (res);
}