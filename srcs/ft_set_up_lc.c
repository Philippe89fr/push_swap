/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_up_lc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prambaud <prambaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 14:54:18 by vincent           #+#    #+#             */
/*   Updated: 2024/12/05 14:38:02 by prambaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

t_list	*ft_lst_setup_a(int ac, char **av)
{
	t_list	*lst;
	t_list	*new_node;
	int		i;

	i = 1;
	lst = NULL;
	while (i < ac)
	{
		new_node = ft_lstnew(ft_atoi(av[i]));
		if (!new_node)
		{
			ft_lstclear(&lst);
			return (NULL);
		}
		ft_lstadd_back(&lst, new_node);
		i++;
	}
	return (lst);
}

// set up a partir d un tableau de tableau
t_list	*ft_lst_setup_a2(char **str)
{
	t_list	*lst;
	int		j;
	int		i;

	j = 0;
	if (str == NULL)
		return (NULL);
	while (str[j])
		j++;
	i = 1;
	lst = ft_lstnew(ft_atoi(str[0]));
	while (i < j)
	{
		ft_lstadd_back(&lst, ft_lstnew(ft_atoi(str[i])));
		i++;
	}
	return (lst);
}

int	ft_blank_check(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (strcmp(av[i], "") == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_blank_check2(char **av)
{
	int	i;
	int	j;
	int	t;

	i = 0;
	j = 0;
	t = 0;
	i = strlen(av[1]);
	while (av[1][j])
	{
		if (av[1][j] == ' ')
			t++;
		j++;
	}
	if (i == t)
		return (0);
	return (1);
}

t_list	*ft_lst_setup_a3(int ac, char **av)
{
	t_list	*lst;
	char	**tab;

	if (ac == 1 || strcmp(av[1], "") == 0)
		return (NULL);
	else if (ac == 2)
	{
		tab = ft_split(av[1], ' ');
		if (!ft_check_isnumbers(tab) || !ft_blank_check2(av) || verif_entry(ac,
				tab) == -1)
			return (ft_liberator(tab), ft_if_error());
		lst = ft_lst_setup_a2(tab);
		ft_liberator(tab);
	}
	else
	{
		if (!ft_check_isnumbers2(av) || !ft_blank_check(ac, av)
			|| verif_entry(ac, av) == -1)
			return (ft_if_error());
		lst = ft_lst_setup_a(ac, av);
	}
	if (!ft_check_if_double(lst) || !ft_check_if_int_max_min(lst))
		return (ft_if_error());
	return (lst);
}
