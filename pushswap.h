/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:03:06 by vincent           #+#    #+#             */
/*   Updated: 2024/11/26 19:07:51 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>

typedef struct s_list
{
	int					content;
	int					index;
	double				decile;
	struct s_list			*next;
}					t_list;
void    ft_print_lst_decile(t_list *lst);
int ft_posinlist(t_list *lst, int val);
void    ft_print_lst_index(t_list *lst);
void ft_indexing(t_list **lst);
int	ft_lstsize(t_list *lst);
int ft_mediane(t_list *lst);
void    ft_print_lst(t_list *lst);
int ft_check_ifdone(t_list *lst);
int ft_check_ifdoneB(t_list *lst);
int ft_check_if_med(t_list *lst, int med);
void ft_algo(t_list **lst, t_list **lst1);
t_list *ft_lst_setup_a(int ac, char **av);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void    ft_swap(t_list **lst);
void    ft_rotate(t_list **lst);
void    ft_reverse(t_list **lst);
void    ft_push(t_list **lst, t_list **lst1);

#endif
