/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_up_lc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 14:54:18 by vincent           #+#    #+#             */
/*   Updated: 2024/11/25 10:13:30 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

t_list	*ft_lstnew(int content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

	if (!lst)
		return (NULL);
	last = lst;
	while (last->next)
	{
		last = last->next;
	}
	return (last);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*sec_last;

	if (!lst)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	sec_last = ft_lstlast(*lst);
	sec_last->next = new;
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

t_list *ft_lst_setup_a(int ac, char **av)
{
	t_list *lst;
	int i;

	i = 2;
	lst = ft_lstnew(atoi(av[1]));
	while (i < ac)
	{
		ft_lstadd_back(&lst, ft_lstnew(atoi(av[i])));
		i++;
	}
	return (lst);
}

t_list *ft_lst_setup_b(int ac)
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
/*
int main(int ac, char **av)
{
    t_list *lst;
    int i;
    int j;

    i = 2;
    j = 1;
    lst = ft_lst_setup(ac, av);
    while (j < ac)
    {
        printf("%d\n", lst->content);
        j++;
        lst = lst->next;
    }
    return (0);
} */