/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_up_lc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prambaud <prambaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 14:54:18 by vincent           #+#    #+#             */
/*   Updated: 2024/12/02 13:43:38 by prambaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_indexing(t_list **lst)
{
	t_list	*current;
	t_list	*current2;
	double	tot;
	double	size;

	current = *lst;
	current2 = *lst;
	tot = 1;
	size = ft_lstsize(*lst);
	while (current)
	{
		while (current2)
		{
			if (current2->content < current->content)
				tot++;
			current2 = current2->next;
		}
		current->index = tot;
		current->decile = tot / size;
		tot = 1;
		current2 = *lst;
		current = current->next;
	}
}
// set up a partir de ac / av
t_list	*ft_lst_setup_a(int ac, char **av)
{
	t_list	*lst;
	int		i;

	i = 2;
	lst = ft_lstnew(ft_atoi(av[1]));
	while (i < ac)
	{
		ft_lstadd_back(&lst, ft_lstnew(ft_atoi(av[i])));
		i++;
	}
	return (lst);
}

// set up combo $>ARG="4 67 3 87 23"; et $>ARG= 4 67 3 87 23; sans les ""
t_list	*ft_lst_setup_a3(int ac, char **av)
{
	t_list	*lst;
	char	**tab;
	int		i;

	i = 0;
	if (ac == 2)
	{
		tab = ft_split(av[1], ' ');
		if (!ft_check_isnumbers(tab))
		{
			ft_printf("Error\n");
			return (NULL);
		}
		lst = ft_lst_setup_a2(tab);
	}
	else 
	{
		if (!ft_check_isnumbers2(av))
		{
			ft_printf("Error\n");
			return (NULL);
		}
		lst = ft_lst_setup_a(ac, av);
	}
	if (!ft_check_if_double(lst) || !ft_check_if_int_max_min(lst))
	{
		ft_printf("Error\n");
		return (NULL);
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

t_list	*ft_lst_setup_b(int ac)
{
	t_list *lst;
	int i;

	i = 2;
	lst = ft_lstnew('\0');
	while (i < ac)
	{
		ft_lstadd_back(&lst, ft_lstnew('\0'));
		i++;
	}
	return (lst);
}