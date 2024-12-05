/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_checker.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prambaud <prambaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 15:33:39 by prambaud          #+#    #+#             */
/*   Updated: 2024/12/05 14:36:44 by prambaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

// check si les chiffres sont des int
int	ft_check_if_int_max_min(t_list *lst)
{
	t_list	*current;

	current = lst;
	while (current)
	{
		if (current->content > 2147483647 || current->content < -2147483648)
			return (0);
		current = current->next;
	}
	return (1);
}

// check si il y a un double
int	ft_check_if_double(t_list *lst)
{
	t_list	*current;
	t_list	*current1;

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

// check s il y a que des nombres
int	ft_check_isnumbers(char **tab)
{
	int	i;
	int	j;
	int	k;

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
		if (j != i || (tab[k][0] == '-' && tab[k][1] == '\0')
			|| (tab[k][0] == '+' && tab[k][1] == '\0'))
			return (0);
		k++;
		j = 0;
		i = 0;
	}
	return (1);
}

int	ft_check_isnumbers2(char **tab)
{
	int	i;
	int	j;
	int	k;

	k = 1;
	i = 0;
	j = 0;
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
		if (j != i || (tab[k][0] == '-' && tab[k][1] == '\0')
			|| (tab[k][0] == '+' && tab[k][1] == '\0'))
			return (0);
		k++;
		j = 0;
		i = 0;
	}
	return (1);
}

int	verif_entry(int ac, char **tab)
{
	int	i;
	int	j;

	i = 1;
	if (ac == 2)
		i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			if (tab[i][j] == '-' && j == 0)
				j++;
			if (!tab[i][j] || tab[i][j] < '0' || tab[i][j] > '9')
				return (-1);
			j++;
		}
		if ((j == 11 && tab[i][0] != '-') || (j > 11) || (j == 11
				&& ft_strncmp("-2147483648", tab[i], 11) == -1))
			return (-1);
		if ((j == 10 && ft_strncmp("2147483647", tab[i], 10) == -1))
			return (-1);
		i++;
	}
	return (i);
}
