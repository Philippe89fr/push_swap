/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushall_a12.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prambaud <prambaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 15:23:16 by prambaud          #+#    #+#             */
/*   Updated: 2024/12/02 11:12:28 by prambaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include "../libft/libft.h"

int ft_pushalla0_166(t_list **lst, t_list **lst1)
{
    int res;

    res = 0;
    if ((*lst)->decile <= 0.083) // les 0.2 sont mis au dessus
    {
        ft_pusha(lst, lst1);
        if ((*lst)->decile > 0.166) //RR !! Si le prochain allait devoir etre rotate, on le rotate maintenant pour save un move
             ft_rotatea_b(lst, lst1);
        else
            ft_rotateb(lst1);
        res = res +2;
    }
    else if ((*lst)->decile <= 0.166) 
        res = res + ft_pusha(lst, lst1);
    else
        res = res + ft_rotatea(lst);
    return (res);
}

int ft_pushalla0_332(t_list **lst, t_list **lst1)
{
    int res;

    res = 0;
    if ((*lst)->decile <= 0.249) // les 0.2 sont mis au dessus
    {
        ft_pusha(lst, lst1);
        if ((*lst)->decile > 0.332) //RR !! Si le prochain allait devoir etre rotate, on le rotate maintenant pour save un move
             ft_rotatea_b(lst, lst1);
        else
            ft_rotateb(lst1);
        res = res +2;
    }
    else if ((*lst)->decile <= 0.332) 
        res = res + ft_pusha(lst, lst1);
    else
        res = res + ft_rotatea(lst);
    return (res);
}

int ft_pushalla0_498(t_list **lst, t_list **lst1)
{
    int res;

    res = 0;
    if ((*lst)->decile <= 0.415) // les 0.2 sont mis au dessus
    {
        ft_pusha(lst, lst1);
        if ((*lst)->decile > 0.498) //RR !! Si le prochain allait devoir etre rotate, on le rotate maintenant pour save un move
             ft_rotatea_b(lst, lst1);
        else
            ft_rotateb(lst1);
        res = res +2;
    }
    else if ((*lst)->decile <= 0.498) 
        res = res + ft_pusha(lst, lst1);
    else
        res = res + ft_rotatea(lst);
    return (res);
}
int ft_pushalla0_664(t_list **lst, t_list **lst1)
{
    int res;

    res = 0;
    if ((*lst)->decile <= 0.581) // les 0.2 sont mis au dessus
    {
        ft_pusha(lst, lst1);
        if ((*lst)->decile > 0.664) //RR !! Si le prochain allait devoir etre rotate, on le rotate maintenant pour save un move
             ft_rotatea_b(lst, lst1);
        else
            ft_rotateb(lst1);
        res = res +2;
    }
    else if ((*lst)->decile <= 0.664) 
        res = res + ft_pusha(lst, lst1);
    else
        res = res + ft_rotatea(lst);
    return (res);
}

int ft_pushalla0_830(t_list **lst, t_list **lst1)
{
    int res;

    res = 0;
    if ((*lst)->decile <= 0.747) // les 0.2 sont mis au dessus
    {
        ft_pusha(lst, lst1);
        if ((*lst)->decile > 0.830) //RR !! Si le prochain allait devoir etre rotate, on le rotate maintenant pour save un move
             ft_rotatea_b(lst, lst1);
        else
            ft_rotateb(lst1);
        res = res +2;
    }
    else if ((*lst)->decile <= 0.830) 
        res = res + ft_pusha(lst, lst1);
    else
        res = res + ft_rotatea(lst);
    return (res);
}

int ft_pushalla1_12(t_list **lst, t_list **lst1)
{
    int res;

    res = 0;
    if ((*lst)->decile <= 0.913) 
    {
        ft_pusha(lst, lst1);
        ft_rotateb(lst1);
        res = res +2;
    }
    else
        res = res + ft_pusha(lst, lst1);
    return (res);
}

int ft_pushallA12(t_list **lst, t_list **lst1) // on balance tous lvers b, en 6 groupes trie. Le but est d avoir les plus gros en bas.
{ 
    int res;

    res = 0;
    while (!ft_checkdecile(*lst, 0.166)) // envoie les < 0.166 dans B
        res = res + ft_pushalla0_166(lst, lst1);
    while (!ft_checkdecile(*lst, 0.332)) // envoie les < 0.332 dans B
        res = res + ft_pushalla0_332(lst, lst1);
    while (!ft_checkdecile(*lst, 0.498)) // envoie les < 0.498 dans B
        res = res + ft_pushalla0_498(lst, lst1);
    while (!ft_checkdecile(*lst, 0.664)) // envoie les < 0.664 dans B
        res = res + ft_pushalla0_664(lst, lst1);
    while (!ft_checkdecile(*lst, 0.830)) // envoie les < 0.830dans B
        res = res + ft_pushalla0_830(lst, lst1);
    while (*lst) // puis les 0.830+
        res = res + ft_pushalla1_12(lst, lst1);
    return (res);
}