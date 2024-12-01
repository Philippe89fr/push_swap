/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prambaud <prambaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 14:31:40 by prambaud          #+#    #+#             */
/*   Updated: 2024/11/30 15:30:04 by prambaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include "../libft/libft.h"

void ft_swap_if_sorted(t_list **lst) // swaper si dans l ordre croissant pour rendre B le plus decroissant possible // NOT USED
{
    if (!lst || !(*lst)->next)
        return ;
    if ((*lst)->index < (*lst)->next->index)
        ft_swapb(lst);
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

    count = 0;
    current = *lst;
    currentB = *lst1;
    if (ft_check_ifdone(current))
        return (0);
    count = count + ft_pushallA(&current, &currentB); // on balance tous les > med vers b
    printf("Le nombre d actions apres le PUSHA est de >> %d\n", count);
    count = count + ft_pushbackall(&current, &currentB);
    // //ft_print_lst_all(current, currentB); 
    printf("Le nombre d actions est de >> %d\n", count);
    printf("C' est OK? >> %d\n\n\n", ft_check_ifdone(current));
    return (count);
} 

