/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 20:38:23 by cschmied          #+#    #+#             */
/*   Updated: 2023/04/01 23:32:46 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	r(t_list **stack, char c)
{
	t_list	*tmp;

	if (!*stack)
		return ;
	if (ft_lstsize(*stack) == 1)
	{
		ft_printf("r%c\n", c);
		return ;
	}
	tmp = (*stack)->next;
	ft_lstadd_back(stack, ft_lstnew((*stack)->content));
	ft_lstdelone(*stack);
	*stack = tmp;
	ft_printf("r%c\n", c);
}
