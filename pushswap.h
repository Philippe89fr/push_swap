/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prambaud <prambaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:03:06 by vincent           #+#    #+#             */
/*   Updated: 2024/11/29 17:20:57 by prambaud         ###   ########.fr       */
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
void    ft_print_lst_all(t_list *lst, t_list *lst1);
void    ft_print_lst_all1(t_list *lst1);
t_list *ft_lst_setup_a2(char **str);
void ft_indexing(t_list **lst);
int	ft_lstsize(t_list *lst);
int ft_mediane(t_list *lst);
void    ft_print_lst(t_list *lst);
int ft_check_ifdone(t_list *lst);
int ft_check_ifdoneB(t_list *lst);
int ft_check_if_med(t_list *lst, int med);
int ft_algo(t_list **lst, t_list **lst1);
t_list *ft_lst_setup_a(int ac, char **av);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
int    ft_swapa(t_list **lst);
int    ft_rotatea(t_list **lst);
int    ft_reversea(t_list **lst);
int    ft_pusha(t_list **lst, t_list **lst1);
int    ft_swapb(t_list **lst);
int    ft_rotateb(t_list **lst);
int    ft_reverseb(t_list **lst);
int    ft_pushb(t_list **lst, t_list **lst1);
int ft_rotatea_b(t_list **lst, t_list **lst1);

#endif
