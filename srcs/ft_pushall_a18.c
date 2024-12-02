/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushall_a20.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prambaud <prambaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 15:23:16 by prambaud          #+#    #+#             */
/*   Updated: 2024/12/02 13:16:29 by prambaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include "../libft/libft.h"

int ft_pushalla0_111(t_list **lst, t_list **lst1)
{
    int res;

    res = 0;
    if ((*lst)->decile <= 0.056) // les 0.2 sont mis au dessus
    {
        ft_pusha(lst, lst1);
        if ((*lst)->decile > 0.111) //RR !! Si le prochain allait devoir etre rotate, on le rotate maintenant pour save un move
             ft_rotatea_b(lst, lst1);
        else
            ft_rotateb(lst1);
        res = res +2;
    }
    else if ((*lst)->decile <= 0.111) 
        res = res + ft_pusha(lst, lst1);
    else
        res = res + ft_rotatea(lst);
    return (res);
}

int ft_pushalla0_222(t_list **lst, t_list **lst1)
{
    int res;

    res = 0;
    if ((*lst)->decile <= 0.167) // les 0.2 sont mis au dessus
    {
        ft_pusha(lst, lst1);
        if ((*lst)->decile > 0.222) //RR !! Si le prochain allait devoir etre rotate, on le rotate maintenant pour save un move
             ft_rotatea_b(lst, lst1);
        else
            ft_rotateb(lst1);
        res = res +2;
    }
    else if ((*lst)->decile <= 0.222) 
        res = res + ft_pusha(lst, lst1);
    else
        res = res + ft_rotatea(lst);
    return (res);
}

int ft_pushalla0_334(t_list **lst, t_list **lst1)
{
    int res;

    res = 0;
    if ((*lst)->decile <= 0.278) // les 0.2 sont mis au dessus
    {
        ft_pusha(lst, lst1);
        if ((*lst)->decile > 0.334) //RR !! Si le prochain allait devoir etre rotate, on le rotate maintenant pour save un move
             ft_rotatea_b(lst, lst1);
        else
            ft_rotateb(lst1);
        res = res +2;
    }
    else if ((*lst)->decile <= 0.334) 
        res = res + ft_pusha(lst, lst1);
    else
        res = res + ft_rotatea(lst);
    return (res);
}
int ft_pushalla0_445(t_list **lst, t_list **lst1)
{
    int res;

    res = 0;
    if ((*lst)->decile <= 0.389) // les 0.2 sont mis au dessus
    {
        ft_pusha(lst, lst1);
        if ((*lst)->decile > 0.445) //RR !! Si le prochain allait devoir etre rotate, on le rotate maintenant pour save un move
             ft_rotatea_b(lst, lst1);
        else
            ft_rotateb(lst1);
        res = res +2;
    }
    else if ((*lst)->decile <= 0.445) 
        res = res + ft_pusha(lst, lst1);
    else
        res = res + ft_rotatea(lst);
    return (res);
}

int ft_pushalla0_556(t_list **lst, t_list **lst1)
{
    int res;

    res = 0;
    if ((*lst)->decile <= 0.500) // les 0.2 sont mis au dessus
    {
        ft_pusha(lst, lst1);
        if ((*lst)->decile > 0.556) //RR !! Si le prochain allait devoir etre rotate, on le rotate maintenant pour save un move
             ft_rotatea_b(lst, lst1);
        else
            ft_rotateb(lst1);
        res = res +2;
    }
    else if ((*lst)->decile <= 0.556) 
        res = res + ft_pusha(lst, lst1);
    else
        res = res + ft_rotatea(lst);
    return (res);
}
int ft_pushalla0_667(t_list **lst, t_list **lst1)
{
    int res;

    res = 0;
    if ((*lst)->decile <= 0.612) // les 0.2 sont mis au dessus
    {
        ft_pusha(lst, lst1);
        if ((*lst)->decile > 0.667) //RR !! Si le prochain allait devoir etre rotate, on le rotate maintenant pour save un move
             ft_rotatea_b(lst, lst1);
        else
            ft_rotateb(lst1);
        res = res +2;
    }
    else if ((*lst)->decile <= 0.667) 
        res = res + ft_pusha(lst, lst1);
    else
        res = res + ft_rotatea(lst);
    return (res);
}

int ft_pushalla0_778(t_list **lst, t_list **lst1)
{
    int res;

    res = 0;
    if ((*lst)->decile <= 0.723) // les 0.2 sont mis au dessus
    {
        ft_pusha(lst, lst1);
        if ((*lst)->decile > 0.778) //RR !! Si le prochain allait devoir etre rotate, on le rotate maintenant pour save un move
             ft_rotatea_b(lst, lst1);
        else
            ft_rotateb(lst1);
        res = res +2;
    }
    else if ((*lst)->decile <= 0.778) 
        res = res + ft_pusha(lst, lst1);
    else
        res = res + ft_rotatea(lst);
    return (res);
}
int ft_pushalla0_890(t_list **lst, t_list **lst1)
{
    int res;

    res = 0;
    if ((*lst)->decile <= 0.834) // les 0.2 sont mis au dessus
    {
        ft_pusha(lst, lst1);
        if ((*lst)->decile > 0.890) //RR !! Si le prochain allait devoir etre rotate, on le rotate maintenant pour save un move
             ft_rotatea_b(lst, lst1);
        else
            ft_rotateb(lst1);
        res = res +2;
    }
    else if ((*lst)->decile <= 0.890) 
        res = res + ft_pusha(lst, lst1);
    else
        res = res + ft_rotatea(lst);
    return (res);
}

int ft_pushalla1_18(t_list **lst, t_list **lst1)
{
    int res;

    res = 0;
    if ((*lst)->decile <= 0.954) 
    {
        ft_pusha(lst, lst1);
        ft_rotateb(lst1);
        res = res +2;
    }
    else
        res = res + ft_pusha(lst, lst1);
    return (res);
}

int ft_pushallA18(t_list **lst, t_list **lst1) // on balance tous lvers b, en 6 groupes trie. Le but est d avoir les plus gros en bas.
{ 
    int res;

    res = 0;
    while (!ft_checkdecile(*lst, 0.111)) // envoie les < 0.166 dans B
        res = res + ft_pushalla0_111(lst, lst1);
    while (!ft_checkdecile(*lst, 0.222)) // envoie les < 0.332 dans B
        res = res + ft_pushalla0_222(lst, lst1);
    while (!ft_checkdecile(*lst, 0.334)) // envoie les < 0.498 dans B
        res = res + ft_pushalla0_334(lst, lst1);
    while (!ft_checkdecile(*lst, 0.445)) // envoie les < 0.664 dans B
        res = res + ft_pushalla0_445(lst, lst1);
    while (!ft_checkdecile(*lst, 0.556)) // envoie les < 0.664 dans B
        res = res + ft_pushalla0_556(lst, lst1);
    while (!ft_checkdecile(*lst, 0.667)) // envoie les < 0.830dans B
        res = res + ft_pushalla0_667(lst, lst1);
    while (!ft_checkdecile(*lst, 0.778)) // envoie les < 0.830dans B
        res = res + ft_pushalla0_778(lst, lst1);
    while (!ft_checkdecile(*lst, 0.890)) // envoie les < 0.830dans B
        res = res + ft_pushalla0_890(lst, lst1);
    while (*lst) // puis les 0.830+
        res = res + ft_pushalla1_18(lst, lst1);
    return (res);
}