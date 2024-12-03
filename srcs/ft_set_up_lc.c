/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_up_lc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prambaud <prambaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 14:54:18 by vincent           #+#    #+#             */
/*   Updated: 2024/12/03 17:55:25 by prambaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_liberator(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

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

t_list	*ft_if_error(void)
{
	write(2, "Error\n", 6);
	return (NULL);
}

t_list	*ft_lst_setup_a3(int ac, char **av)
{
	t_list	*lst;
	char	**tab;
	int		i;

	i = 0;
	if (ac == 1)
		return (NULL);
	else if (ac == 2)
	{
		tab = ft_split(av[1], ' ');
		if (!ft_check_isnumbers(tab))
			return (ft_if_error());
		lst = ft_lst_setup_a2(tab);
		ft_liberator(tab);
	}
	else
	{
		if (!ft_check_isnumbers2(av))
			return (ft_if_error());
		lst = ft_lst_setup_a(ac, av);
	}
	if (!ft_check_if_double(lst) || !ft_check_if_int_max_min(lst))
		return (ft_if_error());
	return (lst);
}
