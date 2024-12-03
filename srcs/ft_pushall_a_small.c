/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushall_a_small.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prambaud <prambaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 15:23:16 by prambaud          #+#    #+#             */
/*   Updated: 2024/12/03 17:56:31 by prambaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "pushswap.h"

int	ft_pushalla2(t_list **lst, t_list **lst1)
{
	int	res;

	res = 0;
	while (*lst)
	{
		if ((*lst)->decile >= 0.5)
			res = res + ft_pusha(lst, lst1);
		else
		{
			res = res + ft_pusha(lst, lst1);
			res = res + ft_rotatea(lst);
		}
	}
	return (res);
}

int	ft_sort_small3(t_list **lst)
{
	int	res;

	res = 0;
	if (ft_check_ifdone(*lst))
		return (0);
	if (ft_position_vs_max(*lst) == 0)
	{
		res = res + ft_rotatea(lst);
		if (!ft_check_ifdone(*lst))
			res = res + ft_swapa(lst);
	}
	else if (ft_position_vs_max(*lst) == 1)
	{
		res = res + ft_reversea(lst);
		if (!ft_check_ifdone(*lst))
			res = res + ft_swapa(lst);
	}
	else
		res = res + ft_swapa(lst);
	return (res);
}

int	ft_position_vs_min(t_list *lst)
{
	int		i;
	t_list	*current;

	i = 0;
	current = lst;
	if (!lst)
		return (0);
	while (current && current->index != 1)
	{
		i++;
		current = current->next;
	}
	return (i);
}

int	ft_sort_small4(t_list **lst, t_list **lst1)
{
	int	res;
	int	position;

	res = 0;
	position = ft_position_vs_max(*lst);
	if (ft_check_ifdone(*lst))
		return (0);
	while (ft_position_vs_max(*lst) != 0)
	{
		if (position <= (ft_lstsize(*lst) - position))
			ft_rotatea(lst);
		else
			ft_reversea(lst);
	}
	res = res + ft_pusha(lst, lst1);
	res = res + ft_sort_small3(lst);
	res = res + ft_pushb(lst1, lst);
	res = res + ft_rotatea(lst);
	return (res);
}

int	ft_sort_small5(t_list **lst, t_list **lst1)
{
	int	res;
	int	position;

	res = 0;
	position = ft_position_vs_max(*lst);
	if (ft_check_ifdone(*lst))
		return (0);
	while (ft_position_vs_max(*lst) != 0)
	{
		if (position <= (ft_lstsize(*lst) - position))
			ft_rotatea(lst);
		else
			ft_reversea(lst);
	}
	res = res + ft_pusha(lst, lst1);
	res = res + ft_sort_small4(lst, lst1);
	res = res + ft_pushb(lst1, lst);
	res = res + ft_rotatea(lst);
	return (res);
}
