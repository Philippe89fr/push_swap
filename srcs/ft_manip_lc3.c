/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manip_lc3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prambaud <prambaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 14:31:12 by prambaud          #+#    #+#             */
/*   Updated: 2024/12/03 17:17:10 by prambaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	ft_swap_pushb(t_list **lst, t_list **lst1)
{
	ft_swapb(lst1);
	ft_pushb(lst1, lst);
	return (2);
}

int	ft_rotate_pushb(t_list **lst, t_list **lst1)
{
	ft_rotateb(lst1);
	ft_pushb(lst1, lst);
	return (2);
}

int	ft_position_vs_max(t_list *lst)
{
	int		i;
	t_list	*current;

	i = 0;
	current = lst;
	if (!lst)
		return (0);
	while (current && current->index != ft_lstsize(lst))
	{
		i++;
		current = current->next;
	}
	return (i);
}

int	ft_position_vs_sec_max(t_list *lst)
{
	int		i;
	t_list	*current;
	int		size;

	size = ft_lstsize(lst);
	i = 0;
	current = lst;
	if (!lst || size == 1)
		return (0);
	while (current && current->index != (size - 1))
	{
		i++;
		current = current->next;
	}
	return (i);
}

int	ft_checkdecile(t_list *lst, double n)
{
	while (lst)
	{
		if (lst->decile < n)
			return (0);
		lst = lst->next;
	}
	return (1);
}
