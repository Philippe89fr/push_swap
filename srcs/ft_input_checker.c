/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_checker.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prambaud <prambaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 15:33:39 by prambaud          #+#    #+#             */
/*   Updated: 2024/12/02 13:43:49 by prambaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

// check si les chiffres sont des int
int ft_check_if_int_max_min(t_list *lst)
{
    t_list *current;

    current = lst;
    while (current)
    {
        if (current->content > 2147483647 || current->content < -2147483648 )
            return (0);
        current = current->next;
    }
    return (1);
}

// check si il y a un double 
int ft_check_if_double(t_list *lst)
{
    t_list *current;
    t_list *current1;

    current = lst;
    current1 = lst;
    while (current)
    {
        current1 = current->next;
        while (current1)
        {
            if (current->content == current1->content)
                return (0);
            current1 = current1->next;
        }
        current = current->next;
    }
    return (1);
}

//check s il y a que des nombres
int ft_check_isnumbers(char **tab)
{
    int	i;
	int	j;
    int k;

    k = ((i = ((j = 0))));
    while (tab[k])
    {
        while (tab[k][j])
            j++;
        while (tab[k][i] == ' ' || (tab[k][i] <= 13 && tab[k][i] >= 9))
            i++;
        if (tab[k][i] == '+' || tab[k][i] == '-')
            i++;
        while (tab[k][i] <= '9' && tab[k][i] >= '0')
            i++;
        if (j != i)
            return (0);
        k++;
        j = 0;
        i = 0;
    }
    return (1);
}

//check s il y a que des nombres, dans le cas ou on utilise av (il faut enlever av[0])
int ft_check_isnumbers2(char **tab)
{
    int	i;
	int	j;
    int k;

    k = 1;
    i = ((j = 0));
    while (tab[k])
    {
        while (tab[k][j])
            j++;
        while (tab[k][i] == ' ' || (tab[k][i] <= 13 && tab[k][i] >= 9))
            i++;
        if (tab[k][i] == '+' || tab[k][i] == '-')
            i++;
        while (tab[k][i] <= '9' && tab[k][i] >= '0')
            i++;
        if (j != i)
            return (0);
        k++;
        j = 0;
        i = 0;
    }
    return (1);
}
