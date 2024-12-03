/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manip_lc2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prambaud <prambaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 14:31:12 by prambaud          #+#    #+#             */
/*   Updated: 2024/12/03 16:59:34 by prambaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

// check si on a reussi
int	ft_check_ifdone(t_list *lst)
{
	t_list	*current;

	current = lst;
	if (!lst)
		return (1);
	while (current->next && (current->content < current->next->content))
		current = current->next;
	if (!current->next)
		return (1);
	return (0);
}

int	ft_reversea(t_list **lst)
{
	t_list	*second_last;
	t_list	*last;

	if (!lst || !*lst || !(*lst)->next)
		return (0);
	last = *lst;
	while (last->next)
	{
		second_last = last;
		last = last->next;
	}
	second_last->next = NULL;
	last->next = *lst;
	*lst = last;
	ft_printf("rra\n");
	return (1);
}

int	ft_reverseb(t_list **lst)
{
	t_list	*second_last;
	t_list	*last;

	if (!lst || !*lst || !(*lst)->next)
		return (0);
	last = *lst;
	while (last->next)
	{
		second_last = last;
		last = last->next;
	}
	second_last->next = NULL;
	last->next = *lst;
	*lst = last;
	ft_printf("rrb\n");
	return (1);
}

int	ft_pushb(t_list **lst, t_list **lst1)
{
	t_list	*first;

	if (!lst || !*lst)
		return (0);
	first = *lst;
	*lst = (*lst)->next;
	first->next = NULL;
	if (!*lst1)
	{
		*lst1 = first;
	}
	else
	{
		first->next = *lst1;
		*lst1 = first;
	}
	ft_printf("pa\n");
	return (1);
}

int	ft_pusha(t_list **lst, t_list **lst1)
{
	t_list	*first;

	if (!lst || !*lst)
		return (0);
	first = *lst;
	*lst = (*lst)->next;
	first->next = NULL;
	if (!*lst1)
	{
		*lst1 = first;
	}
	else
	{
		first->next = *lst1;
		*lst1 = first;
	}
	ft_printf("pb\n");
	return (1);
}
