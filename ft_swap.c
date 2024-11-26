/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 13:26:14 by vincent           #+#    #+#             */
/*   Updated: 2024/11/22 17:24:13 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ft_swap(int **tab)
{
    int temp;

    temp = (*tab)[0];
    (*tab)[0] = (*tab)[1];

    (*tab)[1] = temp;
}

void ft_rotate(int **tab, size_t t)
{
    int j;
    int temp;

    temp = 0;
    j = 0;
    temp = (*tab)[0];
    while (j < t - 1)
    {
         (*tab)[j] = (*tab)[j + 1];
         j++;
    }
    (*tab)[j] = temp;   
}

void ft_reverse(int **tab, size_t t)
{
    int j;
    int temp;

    temp = 0;
    j = t - 1;
    temp = (*tab)[t - 1];
    while (j > 0)
    {
         (*tab)[j] = (*tab)[j - 1];
         j--;
    }
    (*tab)[j] = temp;   
}

int main(void)
{
    int *tab;
    int i;

    i = 0;
    tab = (int *)malloc(4 * sizeof(int));
    if (tab == NULL)
        return (0);
    tab[0] = 1;
    tab[1] = 4;
    tab[2] = 6;
    tab[3] = 0;
   // ft_swap(&tab);
    ft_rotate(&tab, 4);
    while (i < 4)
    {
        printf("%d\n", tab[i]);
        i++;
    }
    printf("REVERSE\n");
    ft_reverse(&tab, 4);
    i = 0;
    while (i < 4)
    {
        printf("%d\n", tab[i]);
        i++;
    }
    return (0);
}