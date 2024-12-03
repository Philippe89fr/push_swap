/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushall_a18c.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prambaud <prambaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 15:23:16 by prambaud          #+#    #+#             */
/*   Updated: 2024/12/03 17:31:31 by prambaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "pushswap.h"

int	ft_pushalla0_667(t_list **lst, t_list **lst1)
{
	int	res;

	res = 0;
	if ((*lst)->decile <= 0.612)
	{
		ft_pusha(lst, lst1);
		if ((*lst)->decile > 0.667)
			ft_rotatea_b(lst, lst1);
		else
			ft_rotateb(lst1);
		res = res + 2;
	}
	else if ((*lst)->decile <= 0.667)
		res = res + ft_pusha(lst, lst1);
	else
		res = res + ft_rotatea(lst);
	return (res);
}

int	ft_pushalla0_778(t_list **lst, t_list **lst1)
{
	int	res;

	res = 0;
	if ((*lst)->decile <= 0.723)
	{
		ft_pusha(lst, lst1);
		if ((*lst)->decile > 0.778)
			ft_rotatea_b(lst, lst1);
		else
			ft_rotateb(lst1);
		res = res + 2;
	}
	else if ((*lst)->decile <= 0.778)
		res = res + ft_pusha(lst, lst1);
	else
		res = res + ft_rotatea(lst);
	return (res);
}

int	ft_pushalla0_890(t_list **lst, t_list **lst1)
{
	int	res;

	res = 0;
	if ((*lst)->decile <= 0.834)
	{
		ft_pusha(lst, lst1);
		if ((*lst)->decile > 0.890)
			ft_rotatea_b(lst, lst1);
		else
			ft_rotateb(lst1);
		res = res + 2;
	}
	else if ((*lst)->decile <= 0.890)
		res = res + ft_pusha(lst, lst1);
	else
		res = res + ft_rotatea(lst);
	return (res);
}

int	ft_pushalla1_18(t_list **lst, t_list **lst1)
{
	int	res;

	res = 0;
	if ((*lst)->decile <= 0.954)
	{
		ft_pusha(lst, lst1);
		ft_rotateb(lst1);
		res = res + 2;
	}
	else
		res = res + ft_pusha(lst, lst1);
	return (res);
}

int	ft_pushalla18(t_list **lst, t_list **lst1)
{
	int	res;

	res = 0;
	while (!ft_checkdecile(*lst, 0.111))
		res = res + ft_pushalla0_111(lst, lst1);
	while (!ft_checkdecile(*lst, 0.222))
		res = res + ft_pushalla0_222(lst, lst1);
	while (!ft_checkdecile(*lst, 0.334))
		res = res + ft_pushalla0_334(lst, lst1);
	while (!ft_checkdecile(*lst, 0.445))
		res = res + ft_pushalla0_445(lst, lst1);
	while (!ft_checkdecile(*lst, 0.556))
		res = res + ft_pushalla0_556(lst, lst1);
	while (!ft_checkdecile(*lst, 0.667))
		res = res + ft_pushalla0_667(lst, lst1);
	while (!ft_checkdecile(*lst, 0.778))
		res = res + ft_pushalla0_778(lst, lst1);
	while (!ft_checkdecile(*lst, 0.890))
		res = res + ft_pushalla0_890(lst, lst1);
	while (*lst)
		res = res + ft_pushalla1_18(lst, lst1);
	return (res);
}
