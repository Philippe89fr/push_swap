/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prambaud <prambaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 18:29:02 by prambaud          #+#    #+#             */
/*   Updated: 2024/12/03 17:27:37 by prambaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_print_lst(t_list *lst)
{
	t_list	*current;

	current = lst;
	while (current)
	{
		ft_printf("La valeur est %lld, l index est: %d et le decile: %lf\n",
			current->content, current->index, current->decile);
		current = current->next;
	}
}

void	ft_print_lst_decile(t_list *lst)
{
	t_list	*current;

	current = lst;
	while (current)
	{
		ft_printf("%lld et le decile: %lf\n", current->content,
			current->decile);
		current = current->next;
	}
}

void	ft_print_lst_all(t_list *lst, t_list *lst1)
{
	t_list	*current;
	t_list	*currentb;

	current = lst;
	currentb = lst1;
	ft_printf("List A, lst:\n");
	while (current)
	{
		ft_printf("La valeur est %lld, l index est: %d et le decile: %.2f\n",
			current->content, current->index, current->decile);
		current = current->next;
	}
	ft_printf("List B, lst:\n");
	while (currentb)
	{
		ft_printf("La valeur est %lld, l index est: %d et le decile: %.2f\n",
			currentb->content, currentb->index, currentb->decile);
		currentb = currentb->next;
	}
}

void	ft_print_lst_all1(t_list *lst1)
{
	t_list	*currentb;

	currentb = lst1;
	ft_printf("List B, lst:\n");
	while (currentb)
	{
		ft_printf("La valeur est %lld, l index est: %d et le decile: %.2f\n",
			currentb->content, currentb->index, currentb->decile);
		currentb = currentb->next;
	}
}
