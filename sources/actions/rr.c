/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 20:52:38 by cschmied          #+#    #+#             */
/*   Updated: 2023/04/01 23:32:15 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rr(t_list **stack, char c)
{
	t_list	*tmp;
	t_list	*node;

	if (!*stack)
		return ;
	if (ft_lstsize(*stack) == 1)
	{
		ft_printf("rr%c\n", c);
		return ;
	}
	tmp = ft_lstlast(*stack);
	node = *stack;
	while (node->next->next)
		node = node->next;
	node->next = NULL;
	ft_lstadd_front(stack, tmp);
	ft_printf("rr%c\n", c);
}
