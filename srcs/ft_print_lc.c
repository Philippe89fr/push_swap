/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prambaud <prambaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 18:29:02 by prambaud          #+#    #+#             */
/*   Updated: 2024/12/02 09:40:40 by prambaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void    ft_print_lst(t_list *lst)
{
    t_list *current;

    current = lst;
    while (current)
    {
        printf("La valeur est %lld, l index est: %d et le decile: %lf\n", current->content, current->index, current->decile);
        current = current->next;
    }
}

void    ft_print_lst_decile(t_list *lst)
{
    t_list *current;

    current = lst;
    while (current)
    {
        printf("%lld et le decile: %lf\n", current->content, current->decile);
        current = current->next;
    }
}

void    ft_print_lst_all(t_list *lst, t_list *lst1)
{
    t_list *current;
    t_list *currentB;
    
    current = lst;
    currentB = lst1,
    printf("List A, lst:\n");
    while (current)
    {
        printf("La valeur est %lld, l index est: %d et le decile: %.2f\n", current->content, current->index, current->decile);
        current = current->next;
    }
    printf("List B, lst:\n");
    while (currentB)
    {
        printf("La valeur est %lld, l index est: %d et le decile: %.2f\n", currentB->content, currentB->index, currentB->decile);
        currentB = currentB->next;
    }
}

void    ft_print_lst_all1(t_list *lst1)
{
    t_list *currentB;
    
    currentB = lst1,
    printf("List B, lst:\n");
    while (currentB)
    {
        printf("La valeur est %lld, l index est: %d et le decile: %.2f\n", currentB->content, currentB->index, currentB->decile);
        currentB = currentB->next;
    }
}