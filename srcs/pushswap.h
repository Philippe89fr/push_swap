/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prambaud <prambaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:03:06 by vincent           #+#    #+#             */
/*   Updated: 2024/12/05 14:36:38 by prambaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H
# include "../libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

void	ft_print_lst_decile(t_list *lst);
int		verif_entry(int ac, char **tab);
void	ft_liberator(char **tab);
t_list	*ft_if_error(void);
int		ft_posinlist(t_list *lst, int val);
void	ft_print_lst_all(t_list *lst, t_list *lst1);
void	ft_print_lst_all1(t_list *lst1);
t_list	*ft_lst_setup_a2(char **str);
void	ft_indexing(t_list **lst);
int		ft_lstsize(t_list *lst);
int		ft_mediane(t_list *lst);
void	ft_print_lst(t_list *lst);
int		ft_check_ifdone(t_list *lst);
int		ft_check_ifdoneB(t_list *lst);
int		ft_check_if_med(t_list *lst, int med);
int		ft_pushalla0_4(t_list **lst, t_list **lst1);
int		ft_pushalla0_8(t_list **lst, t_list **lst1);
int		ft_pushalla6(t_list **lst, t_list **lst1);
int		ft_pushalla18(t_list **lst, t_list **lst1);
int		ft_sort_small3(t_list **lst);
int		ft_sort_small4(t_list **lst, t_list **lst1);
int		ft_sort_small5(t_list **lst, t_list **lst1);
int		ft_algo(t_list **lst, t_list **lst1);
t_list	*ft_lst_setup_a(int ac, char **av);
void	ft_lstadd_back(t_list **lst, t_list *new);
int		ft_swapa(t_list **lst);
int		ft_rotatea(t_list **lst);
int		ft_reversea(t_list **lst);
int		ft_pusha(t_list **lst, t_list **lst1);
int		ft_swapb(t_list **lst);
int		ft_rotateb(t_list **lst);
int		ft_reverseb(t_list **lst);
int		ft_pushb(t_list **lst, t_list **lst1);
int		ft_rotatea_b(t_list **lst, t_list **lst1);
int		ft_checkdecile(t_list *lst, double n);
int		ft_rotate_pushb(t_list **lst, t_list **lst1);
int		ft_swap_pushb(t_list **lst, t_list **lst1);
int		ft_position_vs_max(t_list *lst);
int		ft_position_vs_sec_max(t_list *lst);
int		ft_check_if_int_max_min(t_list *lst);
int		ft_check_if_double(t_list *lst);
t_list	*ft_lst_setup_a3(int ac, char **av);
int		ft_check_isnumbers(char **tab);
int		ft_check_isnumbers2(char **tab);
int		ft_pushalla0_111(t_list **lst, t_list **lst1);
int		ft_pushalla0_222(t_list **lst, t_list **lst1);
int		ft_pushalla0_334(t_list **lst, t_list **lst1);
int		ft_pushalla0_445(t_list **lst, t_list **lst1);
int		ft_pushalla0_556(t_list **lst, t_list **lst1);

#endif
