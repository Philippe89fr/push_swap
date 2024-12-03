/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prambaud <prambaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 14:31:40 by prambaud          #+#    #+#             */
/*   Updated: 2024/12/03 17:58:20 by prambaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
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

int	ft_push_back_max(t_list **lst, t_list **lst1)
{
	int	position;

	int (i) = 0;
	position = ft_position_vs_max(*lst1);
	if (position == 0)
		i = i + ft_pushb(lst1, lst);
	else if (position == 1)
		i = i + ft_swap_pushb(lst, lst1);
	else if (position <= (ft_lstsize(*lst1) - position))
	{
		while (i < position - 1)
			i = i + ft_rotateb(lst1);
		if (ft_position_vs_sec_max(*lst1) > (ft_lstsize(*lst1)
				- ft_position_vs_sec_max(*lst1)))
			i = i + ft_swap_pushb(lst, lst1);
		else
			i = i + ft_rotate_pushb(lst, lst1);
	}
	else
	{
		while (i < ft_lstsize(*lst1) - position)
			i = i + ft_reverseb(lst1);
		i = i + ft_pushb(lst1, lst);
	}
	return (i);
}

int	ft_pushbackall(t_list **lst, t_list **lst1)
{
	int	res;

	res = 0;
	while (*lst1)
		res = res + ft_push_back_max(lst, lst1);
	return (res);
}

int	ft_algo(t_list **lst, t_list **lst1)
{
	int	count;

	count = 0;
	if (ft_check_ifdone(*lst))
		return (0);
	if (ft_lstsize(*lst) == 3)
		return (count + ft_sort_small3(lst));
	else if (ft_lstsize(*lst) == 4)
		return (count + ft_sort_small4(lst, lst1));
	else if (ft_lstsize(*lst) == 5)
		return (count + ft_sort_small5(lst, lst1));
	else if (ft_lstsize(*lst) < 150)
		count = count + ft_pushalla6(lst, lst1);
	else
		count = count + ft_pushalla18(lst, lst1);
	count = count + ft_pushbackall(lst, lst1);
	return (count);
}
