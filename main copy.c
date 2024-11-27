/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main copy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 10:44:02 by vincent           #+#    #+#             */
/*   Updated: 2024/11/26 18:38:03 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int main(int ac, char **av)
{
    t_list *lst;
    t_list *lst1;
    t_list *current;

    lst = ft_lst_setup_a(ac, av);
    ft_indexing(&lst);
    ft_print_lst_index(lst);
    lst1 = NULL;
    current = lst; /*
    printf("Combien plus petit? %d\n", ft_posinlist(lst, 5));
    printf("La size est: %d\n", ft_lstsize(lst));
    printf("La mediane est: %d\n", ft_mediane(lst));
    printf("Mediane check: %d\n", ft_check_if_med(lst, 6));
    printf("C'est trié? %d\n", ft_check_ifdone(lst)); */
    /*
    printf("START\n");
    ft_print_lst(lst);
    ft_push(&lst, &lst1);
    printf("Push, lst =\n");
    ft_print_lst(lst);
    printf("Push, lst1 =\n");
    ft_print_lst(lst1);
    ft_rotate(&lst);
    printf("Rotate, lst =\n");
    ft_print_lst(lst);
    ft_push(&lst, &lst1);
    printf("Push, lst =\n");
    ft_print_lst(lst);
    printf("Push, lst1 =\n");
    ft_print_lst(lst1);

    printf("POST ALGO, lst:\n");
    ft_print_lst(lst);
    printf("POST ALGO, lst1:\n");
    ft_print_lst(lst1);
    */
     ft_algo(&lst, &lst1);
    return (0);
} 