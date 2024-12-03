/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manip_lc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prambaud <prambaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 18:02:54 by prambaud          #+#    #+#             */
/*   Updated: 2024/12/03 18:03:03 by prambaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	ft_swapa(t_list **lst)
{
	long long	temp;
	double		temp1;
	int			temp2;

	if (!lst || !*lst || !(*lst)->next)
		return (0);
	temp = (*lst)->content;
	(*lst)->content = (*lst)->next->content;
	(*lst)->next->content = temp;
	temp1 = (*lst)->decile;
	(*lst)->decile = (*lst)->next->decile;
	(*lst)->next->decile = temp1;
	temp2 = (*lst)->index;
	(*lst)->index = (*lst)->next->index;
	(*lst)->next->index = temp2;
	ft_printf("sa\n");
	return (1);
}

int	ft_swapb(t_list **lst)
{
	long long	temp;
	double		temp1;
	int			temp2;

	if (!lst || !*lst || !(*lst)->next)
		return (0);
	temp = (*lst)->content;
	(*lst)->content = (*lst)->next->content;
	(*lst)->next->content = temp;
	temp1 = (*lst)->decile;
	(*lst)->decile = (*lst)->next->decile;
	(*lst)->next->decile = temp1;
	temp2 = (*lst)->index;
	(*lst)->index = (*lst)->next->index;
	(*lst)->next->index = temp2;
	ft_printf("sb\n");
	return (1);
}

int	ft_rotatea(t_list **lst)
{
	t_list	*first;
	t_list	*current;

	if (!lst || !*lst || !(*lst)->next)
		return (0);
	first = *lst;
	*lst = (*lst)->next;
	first->next = NULL;
	current = ft_lstlast(*lst);
	current->next = first;
	ft_printf("ra\n");
	return (1);
}

int	ft_rotateb(t_list **lst)
{
	t_list	*first;
	t_list	*current;

	if (!lst || !*lst || !(*lst)->next)
		return (0);
	first = *lst;
	*lst = (*lst)->next;
	first->next = NULL;
	current = ft_lstlast(*lst);
	current->next = first;
	ft_printf("rb\n");
	return (1);
}

int	ft_rotatea_b(t_list **lst, t_list **lst1)
{
	t_list	*first;
	t_list	*current;
	t_list	*first1;
	t_list	*current1;

	if (!lst || !*lst || !(*lst)->next)
		return (0);
	if (!lst1 || !*lst1 || !(*lst1)->next)
		return (0);
	first = *lst;
	*lst = (*lst)->next;
	first->next = NULL;
	current = ft_lstlast(*lst);
	current->next = first;
	first1 = *lst1;
	*lst1 = (*lst1)->next;
	first1->next = NULL;
	current1 = ft_lstlast(*lst1);
	current1->next = first1;
	ft_printf("rr\n");
	return (2);
}
