/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prambaud <prambaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 10:44:02 by vincent           #+#    #+#             */
/*   Updated: 2024/12/05 14:20:23 by prambaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

t_list	*ft_if_error(void)
{
	write(2, "Error\n", 6);
	return (NULL);
}

void	ft_liberator(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

int	main(int ac, char **av)
{
	t_list	*lst11;
	t_list	*lstb11;
	int		res;

	res = 0;
	if (ac == 1)
		return (0);
	lst11 = ft_lst_setup_a3(ac, av);
	lstb11 = NULL;
	ft_indexing(&lst11);
	ft_algo(&lst11, &lstb11);
	ft_lstclear(&lst11);
	ft_lstclear(&lstb11);
	return (0);
}
