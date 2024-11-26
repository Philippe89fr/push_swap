/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 12:54:11 by vincent           #+#    #+#             */
/*   Updated: 2024/11/25 17:24:31 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void ft_indexing(t_list **lst)
{
    t_list *current;
    t_list *current2;
    int tot;

    current = *lst;
    current2 = *lst;
    tot = 1;
    while (current)
    {
        while (current2)
        {
        if (current2->content < current->content)
            tot++;
        current2 = current2->next;
        }
        current->index = tot;
        tot = 1;
        current2 = *lst;
        current = current->next;
    }
}

int ft_posinlist(t_list *lst, int val)
{
    t_list *current;
    int tot;

    current = lst;
    tot = 0;
    while (current)
    {
        if (current->content < val)
            tot++;
        current = current->next;
    }
    return (tot); // nombre d élements plus petit que val
}

int ft_mediane(t_list *lst)
{
    int i;
    t_list  *current;

    current = lst;
    i = ft_lstsize(current);
    while (current)
    {
        if ((i % 2 != 0) && ft_posinlist(lst, current->content) == (i / 2))
            return (current->content); // lui et les plus petits representent 50%+ des elements au moins
        if ((i % 2 == 0) && ft_posinlist(lst, current->content) == (i / 2) - 1)
            return (current->content); // lui et les plus petits representent 50%+ des elements au moins
        current = current->next;
    }
    return (0);
}

int ft_check_ifdone(t_list *lst)
{
    t_list *current;

    current = lst;
    while (current->next && (current->content < current->next->content))
        current = current->next;
    if (!current->next)
        return (1);
    return (0);
}

int ft_check_ifdoneB(t_list *lst)
{
    t_list *current;

    current = lst;
    while (current->next && (current->content > current->next->content))
        current = current->next;
    if (!current->next)
        return (1);
    return (0);
}

int ft_check_if_med(t_list *lst, int med) // check si tous les chiffres sont < med
{
    t_list *current;

    if (!lst)
        return (0);
    current = lst;
    while (current)
    {
        if (current->content > med)
         return (0);
        current = current->next;
    }
    if (!current)
        return (1);
    return (0);
}

void ft_algo(t_list **lst, t_list **lst1)
{
    int med;
    t_list *current;
    t_list *currentB;


    med = ft_mediane(*lst);
    current = *lst;
    currentB = *lst1;
    if (ft_check_ifdone(current))
        return; 
    ft_print_lst(current);
    printf("DEBUT\n");
    while (!ft_check_if_med(current, med) && current) // on balance tous les > med vers b
    {
        if (current->content > med) // si sup a med on balance dans b
        {
            ft_push(&current, &currentB); 
            printf("PA\n");
            ft_print_lst(current);
            printf("lstB\n");
            ft_print_lst(currentB);
        } 
        else // sinon on balance en haut et on continue
        {
            ft_rotate(&current);
            printf("RA\n");
            ft_print_lst(current);
        } 
    } 
    printf("POST ALGO, lst:\n");
    ft_print_lst(current);
    printf("POST ALGO, lst1:\n");
    ft_print_lst(currentB);
    while (!ft_check_ifdone(current) && !ft_check_ifdoneB(currentB)) // DOUBLE ATTACK!!
    {
        if ((current->content > current->next->content) && (currentB->content < currentB->next->content)) // Double tri. 
        {
            ft_swap(&current);
            ft_swap(&currentB);
            printf("SS\n");
            ft_print_lst(current);
        } 
        else
        {
            ft_reverse(&current);
            ft_rotate(&currentB);
            printf("RR\n");
            ft_print_lst(current);
            ft_print_lst(currentB);
        } 
    }
    printf("POST ALGO, lst:\n");
    ft_print_lst(current);
    printf("POST ALGO, lst1:\n");
    ft_print_lst(currentB);
    
    while (!ft_check_ifdone(current))
    {
        if ((current->content > current->next->content)) // Single tri. 
        {
            ft_swap(&current);
            printf("SA\n");
            ft_print_lst(current);
        } 
        else
        {
            ft_reverse(&current);
            printf("RA\n");
            ft_print_lst(current);
        } 
    }
    printf("POST ALGO, lst:\n");
    ft_print_lst(current);
    printf("POST ALGO, lst1:\n");
    ft_print_lst(currentB); 
} 