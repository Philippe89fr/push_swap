/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushall_a18b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prambaud <prambaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 15:23:16 by prambaud          #+#    #+#             */
/*   Updated: 2024/12/03 17:32:35 by prambaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "pushswap.h"

int	ft_pushalla0_111(t_list **lst, t_list **lst1)
{
	int	res;

	res = 0;
	if ((*lst)->decile <= 0.056)
	{
		ft_pusha(lst, lst1);
		if ((*lst)->decile > 0.111)
			ft_rotatea_b(lst, lst1);
		else
			ft_rotateb(lst1);
		res = res + 2;
	}
	else if ((*lst)->decile <= 0.111)
		res = res + ft_pusha(lst, lst1);
	else
		res = res + ft_rotatea(lst);
	return (res);
}

int	ft_pushalla0_222(t_list **lst, t_list **lst1)
{
	int	res;

	res = 0;
	if ((*lst)->decile <= 0.167)
	{
		ft_pusha(lst, lst1);
		if ((*lst)->decile > 0.222)
			ft_rotatea_b(lst, lst1);
		else
			ft_rotateb(lst1);
		res = res + 2;
	}
	else if ((*lst)->decile <= 0.222)
		res = res + ft_pusha(lst, lst1);
	else
		res = res + ft_rotatea(lst);
	return (res);
}

int	ft_pushalla0_334(t_list **lst, t_list **lst1)
{
	int	res;

	res = 0;
	if ((*lst)->decile <= 0.278)
	{
		ft_pusha(lst, lst1);
		if ((*lst)->decile > 0.334)
			ft_rotatea_b(lst, lst1);
		else
			ft_rotateb(lst1);
		res = res + 2;
	}
	else if ((*lst)->decile <= 0.334)
		res = res + ft_pusha(lst, lst1);
	else
		res = res + ft_rotatea(lst);
	return (res);
}

int	ft_pushalla0_445(t_list **lst, t_list **lst1)
{
	int	res;

	res = 0;
	if ((*lst)->decile <= 0.389)
	{
		ft_pusha(lst, lst1);
		if ((*lst)->decile > 0.445)
			ft_rotatea_b(lst, lst1);
		else
			ft_rotateb(lst1);
		res = res + 2;
	}
	else if ((*lst)->decile <= 0.445)
		res = res + ft_pusha(lst, lst1);
	else
		res = res + ft_rotatea(lst);
	return (res);
}

int	ft_pushalla0_556(t_list **lst, t_list **lst1)
{
	int	res;

	res = 0;
	if ((*lst)->decile <= 0.500)
	{
		ft_pusha(lst, lst1);
		if ((*lst)->decile > 0.556)
			ft_rotatea_b(lst, lst1);
		else
			ft_rotateb(lst1);
		res = res + 2;
	}
	else if ((*lst)->decile <= 0.556)
		res = res + ft_pusha(lst, lst1);
	else
		res = res + ft_rotatea(lst);
	return (res);
}
