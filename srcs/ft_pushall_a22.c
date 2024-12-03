/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushall_a22.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prambaud <prambaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 15:23:16 by prambaud          #+#    #+#             */
/*   Updated: 2024/12/02 16:37:21 by prambaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include "../libft/libft.h"

int ft_pushalla0_091(t_list **lst, t_list **lst1)
{
    int res;

    res = 0;
    if ((*lst)->decile <= 0.046) // les 0.2 sont mis au dessus
    {
        ft_pusha(lst, lst1);
        if ((*lst)->decile > 0.091) //RR !! Si le prochain allait devoir etre rotate, on le rotate maintenant pour save un move
             ft_rotatea_b(lst, lst1);
        else
            ft_rotateb(lst1);
        res = res +2;
    }
    else if ((*lst)->decile <= 0.091) 
        res = res + ft_pusha(lst, lst1);
    else
        res = res + ft_rotatea(lst);
    return (res);
}

int ft_pushalla0_182(t_list **lst, t_list **lst1)
{
    int res;

    res = 0;
    if ((*lst)->decile <= 0.137) // les 0.2 sont mis au dessus
    {
        ft_pusha(lst, lst1);
        if ((*lst)->decile > 0.182) //RR !! Si le prochain allait devoir etre rotate, on le rotate maintenant pour save un move
             ft_rotatea_b(lst, lst1);
        else
            ft_rotateb(lst1);
        res = res +2;
    }
    else if ((*lst)->decile <= 0.182) 
        res = res + ft_pusha(lst, lst1);
    else
        res = res + ft_rotatea(lst);
    return (res);
}

int ft_pushalla0_273(t_list **lst, t_list **lst1)
{
    int res;

    res = 0;
    if ((*lst)->decile <= 0.228) // les 0.2 sont mis au dessus
    {
        ft_pusha(lst, lst1);
        if ((*lst)->decile > 0.273) //RR !! Si le prochain allait devoir etre rotate, on le rotate maintenant pour save un move
             ft_rotatea_b(lst, lst1);
        else
            ft_rotateb(lst1);
        res = res +2;
    }
    else if ((*lst)->decile <= 0.273) 
        res = res + ft_pusha(lst, lst1);
    else
        res = res + ft_rotatea(lst);
    return (res);
}
int ft_pushalla0_364(t_list **lst, t_list **lst1)
{
    int res;

    res = 0;
    if ((*lst)->decile <= 0.319) // les 0.2 sont mis au dessus
    {
        ft_pusha(lst, lst1);
        if ((*lst)->decile > 0.364) //RR !! Si le prochain allait devoir etre rotate, on le rotate maintenant pour save un move
             ft_rotatea_b(lst, lst1);
        else
            ft_rotateb(lst1);
        res = res +2;
    }
    else if ((*lst)->decile <= 0.364) 
        res = res + ft_pusha(lst, lst1);
    else
        res = res + ft_rotatea(lst);
    return (res);
}

int ft_pushalla0_455(t_list **lst, t_list **lst1)
{
    int res;

    res = 0;
    if ((*lst)->decile <= 0.410) // les 0.2 sont mis au dessus
    {
        ft_pusha(lst, lst1);
        if ((*lst)->decile > 0.455) //RR !! Si le prochain allait devoir etre rotate, on le rotate maintenant pour save un move
             ft_rotatea_b(lst, lst1);
        else
            ft_rotateb(lst1);
        res = res +2;
    }
    else if ((*lst)->decile <= 0.455) 
        res = res + ft_pusha(lst, lst1);
    else
        res = res + ft_rotatea(lst);
    return (res);
}
int ft_pushalla0_546(t_list **lst, t_list **lst1)
{
    int res;

    res = 0;
    if ((*lst)->decile <= 0.501) // les 0.2 sont mis au dessus
    {
        ft_pusha(lst, lst1);
        if ((*lst)->decile > 0.546) //RR !! Si le prochain allait devoir etre rotate, on le rotate maintenant pour save un move
             ft_rotatea_b(lst, lst1);
        else
            ft_rotateb(lst1);
        res = res +2;
    }
    else if ((*lst)->decile <= 0.546) 
        res = res + ft_pusha(lst, lst1);
    else
        res = res + ft_rotatea(lst);
    return (res);
}

int ft_pushalla0_637(t_list **lst, t_list **lst1)
{
    int res;

    res = 0;
    if ((*lst)->decile <= 0.592) // les 0.2 sont mis au dessus
    {
        ft_pusha(lst, lst1);
        if ((*lst)->decile > 0.637) //RR !! Si le prochain allait devoir etre rotate, on le rotate maintenant pour save un move
             ft_rotatea_b(lst, lst1);
        else
            ft_rotateb(lst1);
        res = res +2;
    }
    else if ((*lst)->decile <= 0.637) 
        res = res + ft_pusha(lst, lst1);
    else
        res = res + ft_rotatea(lst);
    return (res);
}
int ft_pushalla0_728(t_list **lst, t_list **lst1)
{
    int res;

    res = 0;
    if ((*lst)->decile <= 0.683) // les 0.2 sont mis au dessus
    {
        ft_pusha(lst, lst1);
        if ((*lst)->decile > 0.728) //RR !! Si le prochain allait devoir etre rotate, on le rotate maintenant pour save un move
             ft_rotatea_b(lst, lst1);
        else
            ft_rotateb(lst1);
        res = res +2;
    }
    else if ((*lst)->decile <= 0.728) 
        res = res + ft_pusha(lst, lst1);
    else
        res = res + ft_rotatea(lst);
    return (res);
}
int ft_pushalla0_819(t_list **lst, t_list **lst1)
{
    int res;

    res = 0;
    if ((*lst)->decile <= 0.774) // les 0.2 sont mis au dessus
    {
        ft_pusha(lst, lst1);
        if ((*lst)->decile > 0.819) //RR !! Si le prochain allait devoir etre rotate, on le rotate maintenant pour save un move
             ft_rotatea_b(lst, lst1);
        else
            ft_rotateb(lst1);
        res = res +2;
    }
    else if ((*lst)->decile <= 0.819) 
        res = res + ft_pusha(lst, lst1);
    else
        res = res + ft_rotatea(lst);
    return (res);
}
int ft_pushalla0_910(t_list **lst, t_list **lst1)
{
    int res;

    res = 0;
    if ((*lst)->decile <= 0.865) // les 0.2 sont mis au dessus
    {
        ft_pusha(lst, lst1);
        if ((*lst)->decile > 0.910) //RR !! Si le prochain allait devoir etre rotate, on le rotate maintenant pour save un move
             ft_rotatea_b(lst, lst1);
        else
            ft_rotateb(lst1);
        res = res +2;
    }
    else if ((*lst)->decile <= 0.910) 
        res = res + ft_pusha(lst, lst1);
    else
        res = res + ft_rotatea(lst);
    return (res);
}

int ft_pushalla1_22(t_list **lst, t_list **lst1)
{
    int res;

    res = 0;
    if ((*lst)->decile <= 0.956) 
    {
        ft_pusha(lst, lst1);
        ft_rotateb(lst1);
        res = res +2;
    }
    else
        res = res + ft_pusha(lst, lst1);
    return (res);
}

int ft_pushallA22(t_list **lst, t_list **lst1) // on balance tous lvers b, en 6 groupes trie. Le but est d avoir les plus gros en bas.
{ 
    int res;

    res = 0;
    while (!ft_checkdecile(*lst, 0.091)) // envoie les < 0.166 dans B
        res = res + ft_pushalla0_091(lst, lst1);
    while (!ft_checkdecile(*lst, 0.182)) // envoie les < 0.332 dans B
        res = res + ft_pushalla0_182(lst, lst1);
    while (!ft_checkdecile(*lst, 0.273)) // envoie les < 0.498 dans B
        res = res + ft_pushalla0_273(lst, lst1);
    while (!ft_checkdecile(*lst, 0.364)) // envoie les < 0.664 dans B
        res = res + ft_pushalla0_364(lst, lst1);
    while (!ft_checkdecile(*lst, 0.455)) // envoie les < 0.664 dans B
        res = res + ft_pushalla0_455(lst, lst1);
    while (!ft_checkdecile(*lst, 0.546)) // envoie les < 0.830dans B
        res = res + ft_pushalla0_546(lst, lst1);
    while (!ft_checkdecile(*lst, 0.637)) // envoie les < 0.830dans B
        res = res + ft_pushalla0_637(lst, lst1);
    while (!ft_checkdecile(*lst, 0.728)) // envoie les < 0.830dans B
        res = res + ft_pushalla0_728(lst, lst1);
    while (!ft_checkdecile(*lst, 0.819)) // envoie les < 0.830dans B
        res = res + ft_pushalla0_819(lst, lst1);
    while (!ft_checkdecile(*lst, 0.910)) // envoie les < 0.830dans B
        res = res + ft_pushalla0_910(lst, lst1);
    while (*lst) // puis les 0.830+
        res = res + ft_pushalla1_22(lst, lst1);
    return (res);
}