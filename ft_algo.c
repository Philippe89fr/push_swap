/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prambaud <prambaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:45:24 by prambaud          #+#    #+#             */
/*   Updated: 2024/11/27 14:33:56 by prambaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int ft_pushallB(t_list **lst, t_list **lst1) // on balance tous les > med vers b
{

    int res;

    res = 0;
    while (*lst1) 
    {
        ft_push(lst1, lst);
        res = res + 2;
    }
    while (!ft_check_ifdone(*lst)) 
    {
        ft_rotate(lst);
        res = res + 2;
    }  
    return (res);
}

int ft_pushallA(t_list **lst, t_list **lst1) // on balance tous les > med vers b
{
    int med;
    int res;

    res = 0;
    med = ft_mediane(*lst);
    if (ft_check_ifdone(*lst))
        return (0);
    while (!ft_check_if_med(*lst, med) && *lst) 
    {
        if ((*lst)->content > med) // si sup a med on balance dans b
        {
            ft_push(lst, lst1); 
            res++;
        } 
        else // sinon on balance en haut et on continue.. On peut p-e trouver plus efficace
        {
            ft_rotate(lst);
            res++;
        } 
    } 
    return (res);
}

int ft_double_tri(t_list **lst, t_list **lst1)
{
    int res;

    res = 0;
    while (!ft_check_ifdone(*lst) && !ft_check_ifdoneB(*lst1)) // DOUBLE ATTACK!!
    {
        if (((*lst)->decile >= 0.3) && ((*lst1)->decile <= 0.55)) // On pousse les plus gros vers le haut et vis versa
        {
            ft_rotate(lst);
            ft_rotate(lst1);
            res++;
            // printf("RR\n");
        } 
        if (((*lst)->content > (*lst)->next->content) && ((*lst1)->content < (*lst1)->next->content)) // Double tri. 
        {
            ft_swap(lst);
            ft_swap(lst1);
            res++;
            // printf("SS\n");
            // ft_print_lst_all(current);
        } 
        else
        {
            ft_reverse(lst);
            ft_reverse(lst1);
            res++;
           // printf("RRR\n");
           // ft_print_lst_all(current);
           // ft_print_lst_all(currentB);
        } 
    }    
    return (res);
}

int ft_sorta(t_list **lst)
{
    int res;

    res = 0;
    while (!ft_check_ifdone(*lst))
    {
        if (((*lst)->decile >= 0.4)) // On pousse les plus gros vers le haut 
        {
            ft_rotate(lst);
            printf("RA\n");
            ft_print_lst((*lst));
        } 

        else if (((*lst)->content > (*lst)->next->content)) // Single tri. 
        {
            ft_swap(lst);
            printf("SA\n");
            ft_print_lst((*lst));
        } 
        else
        {
            ft_reverse(lst);
            printf("RRA\n");
            ft_print_lst((*lst));
        } 
    }
    return (res);
}

int ft_sortb(t_list **lst)
{
    int res;

    res = 0;
    while (!ft_check_ifdoneB(*lst))
    {
        if ((*lst)->decile <= 0.70) // On pousse les plus petits vers le haut 
        {
            ft_rotate(lst);
            printf("RB\n");
            ft_print_lst((*lst));
        } 

        else if (((*lst)->content > (*lst)->next->content)) // Single tri. 
        {
            ft_swap(lst);
            printf("SB\n");
            ft_print_lst((*lst));
        } 
        else
        {
            ft_reverse(lst);
            printf("RRB\n");
            ft_print_lst((*lst));
        } 
    }
    return (res);
}

void ft_algo(t_list **lst, t_list **lst1)
{
    int med;
    t_list *current;
    t_list *currentB;
    int count;

    count = 0;
    med = ft_mediane(*lst);
    current = *lst;
    currentB = *lst1;
    if (ft_check_ifdone(current))
        return; 
    ft_print_lst_all(current, currentB);

    count = count + ft_pushallA(&current, &currentB); // on balance tous les > med vers b
    printf("POST pushallA, lst:\n");
    ft_print_lst_all(current, currentB); 
    printf("test:\n");
    /*
    ft_push(&currentB, &current);
    ft_print_lst_all(current, currentB);*/
    
    count = count + ft_double_tri(&current, &currentB); // Double tri
    printf("POST DOUBLE TRI, lst:\n");
    ft_print_lst_all(current, currentB);

    count = count + ft_sorta(&current); // Tri A
    printf("POST TRI A, lst:\n");
    ft_print_lst_all(current, currentB);

    count = count + ft_sortb(&currentB); // Tri B
    printf("POST TRI A, lst:\n");
    ft_print_lst_all(current, currentB);

    count = count + ft_pushallB(&current, &currentB); // on balance tous back dans A
    printf("POST pushback, lst:\n");
    ft_print_lst_all(current, currentB); 

    printf("Le nombre d actions est de >> %d\n", count);

} 