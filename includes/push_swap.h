/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 17:58:03 by cschmied          #+#    #+#             */
/*   Updated: 2023/04/02 13:01:07 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# include "../libft/libft.h"

//sorting
void	sort(t_list **stack_a, t_list **stack_b);
void	sort_3(t_list **stack_a, t_list **stack_b);
void	sort_5(t_list **stack_a, t_list **stack_b);
void	sort_big(t_list **stack_a, t_list **stack_b);

//utils
int		ft_isint(char *str);
int		pos_in_array(int *arr, int len, int val);
int		bit_len(int n);
int		check_input(int argc, char **argv);
t_list	*read_input(int argc, char **argv);
int		val_at_index(t_list *stack, int index);
void	sort_array(int *array, int len);
int		issorted(t_list *stack);
int		*read_to_array(char **argv, int argc);
void	print_stack(t_list *stack);
void	find_and_push_val_to_b(t_list **src, t_list **dst, int val);

//actions
void	s(t_list **stack, char c);
void	r(t_list **stack, char c);
void	p(t_list **src, t_list **dst, char c);
void	rr(t_list **stack, char c);

#endif
