/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prambaud <prambaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 14:31:40 by prambaud          #+#    #+#             */
/*   Updated: 2024/12/03 16:42:01 by prambaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include "../libft/libft.h"

// void ft_swap_if_sorted(t_list **lst) // swaper si dans l ordre croissant pour rendre B le plus decroissant possible // NOT USED
// {
//     if (!lst || !(*lst)->next)
//         return ;
//     if ((*lst)->index < (*lst)->next->index)
//         ft_swapb(lst);
// }

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
    int count;

    count = 0;
    if (ft_check_ifdone(*lst))
        return (0);
    if (ft_lstsize(*lst) == 3)
        return (count + ft_sort_small3(lst)); // pas besoin de push dans B et inversement
    else if (ft_lstsize(*lst) == 4)
        return (count + ft_sort_small4(lst, lst1)); // pas besoin de push dans B et inversement
    else if (ft_lstsize(*lst) == 5)
        return (count + ft_sort_small5(lst, lst1));
    else if (ft_lstsize(*lst) < 150)
        count = count + ft_pushallA6(lst, lst1); // on balance tous les > med vers b
    else if (ft_lstsize(*lst) < 300)
        count = count + ft_pushallA16(lst, lst1); // on balance tous les > med vers b
    else if (ft_lstsize(*lst) < 550)
        count = count + ft_pushallA18(lst, lst1); // on balance tous les > med vers b
    else 
        count = count + ft_pushallA20(lst, lst1); // on balance tous les > med vers b
    count = count + ft_pushbackall(lst, lst1);
    return (count);
} 

