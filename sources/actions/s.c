/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 20:44:45 by cschmied          #+#    #+#             */
/*   Updated: 2023/04/01 23:33:03 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	s(t_list **stack, char c)
{
	int	tmp;

	if (!*stack)
		return ;
	if (ft_lstsize(*stack) == 1)
	{
		ft_printf("s%c\n", c);
		return ;
	}
	tmp = (*stack)->content;
	(*stack)->content = (*stack)->next->content;
	(*stack)->next->content = tmp;
	ft_printf("s%c\n", c);
}
