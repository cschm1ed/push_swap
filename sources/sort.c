/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 18:10:51 by cschmied          #+#    #+#             */
/*   Updated: 2023/04/15 18:02:37 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/**
 * sort - main sorting function that chooses the appropriate sorting function
 * @stack_a: pointer to stack A
 * @stack_b: pointer to stack B
 *
 * Chooses the appropriate sorting function based on the size of stack_a.
 */

void	sort(t_list **stack_a, t_list **stack_b)
{
	if (issorted(*stack_a))
		return ;
	if (ft_lstsize(*stack_a) <= 3)
		sort_3(stack_a, stack_b);
	else if (ft_lstsize(*stack_a) <= 5)
		sort_5(stack_a, stack_b);
	else
		sort_big(stack_a, stack_b);
}

/**
 * sort_3 - sorts stack A with up to 3 elements using stack B
 * @stack_a: pointer to stack A
 * @stack_b: pointer to stack B
 *
 * Sorts up to 3 elements in stack A using stack B as a temporary storage.
 */

void	sort_3(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) == 2)
		s(stack_a, 'a');
	else if (val_at_index(*stack_a, 0) > val_at_index(*stack_a, 1)
		&& val_at_index(*stack_a, 0) > val_at_index(*stack_a, 2))
	{
		r(stack_a, 'a');
		if (val_at_index(*stack_a, 0) > val_at_index(*stack_a, 1))
			s(stack_a, 'a');
	}
	else if (val_at_index(*stack_a, 0) > val_at_index(*stack_a, 1)
		|| val_at_index(*stack_a, 0) > val_at_index(*stack_a, 2))
	{
		if (val_at_index(*stack_a, 1) < val_at_index(*stack_a, 0))
			s(stack_a, 'a');
		else
			rr(stack_a, 'a');
	}
	else if (!issorted(*stack_a))
	{
		r(stack_a, 'a');
		s(stack_a, 'a');
		rr(stack_a, 'a');
	}
	(void)stack_b;
}

/**
 * sort_5 - sorts stack A with up to 5 elements using stack B
 * @stack_a: pointer to stack A
 * @stack_b: pointer to stack B
 *
 * Sorts up to 5 elements in stack A using stack B as a temporary storage.
 */

void	sort_5(t_list **stack_a, t_list **stack_b)
{
	while (!ft_lstsize(*stack_b))
	{
		while (val_at_index(*stack_a, 0) < 2)
			p(stack_a, stack_b, 'b');
		if (ft_lstlast(*stack_a)->content < 2)
			rr(stack_a, 'a');
		else
			r(stack_a, 'a');
	}
	if ((*stack_b)->content == 0)
		find_and_push_val_to_b(stack_a, stack_b, 1);
	else
		find_and_push_val_to_b(stack_a, stack_b, 0);
	if (issorted(*stack_b))
		r(stack_b, 'b');
	if (!issorted(*stack_a))
		sort_3(stack_a, stack_b);
	p(stack_b, stack_a, 'a');
	p(stack_b, stack_a, 'a');
}

/**
 * sort_big - sorts stack A using a radix algorithm
 * @stack_a: pointer to stack A
 * @stack_b: pointer to stack B
 *
 * Sorts stack A using stack B as a temporary storage with
 * a radix algorithm.
 */

void	sort_big(t_list **stack_a, t_list **stack_b)
{
	int	bits;
	int	i;
	int	j;
	int	len;

	i = 0;
	bits = bit_len(ft_lstsize(*stack_a)) - 1;
	while (i <= bits)
	{
		j = 0;
		len = ft_lstsize(*stack_a);
		while (j++ < len)
		{
			if (!((*stack_a)->content >> i & 1))
				p(stack_a, stack_b, 'b');
			else
				r(stack_a, 'a');
		}
		while (*stack_b)
			p(stack_b, stack_a, 'a');
		i ++;
	}
}

/**
 * find_and_push_val_to_b - finds a value in stack A and pushes it to stack B
 * @src: pointer to the source stack (stack A)
 * @dst: pointer to the destination stack (stack B)
 * @val: value to find and push to stack B
 *
 * Finds a specific value in stack A and pushes it to stack B efficiently.
 */

void	find_and_push_val_to_b(t_list **src, t_list **dst, int val)
{
	int		i;
	t_list	*tmp;

	tmp = *src;
	i = 0;
	while (tmp)
	{
		if (tmp->content == val)
			break ;
		tmp = tmp->next;
		i++;
	}
	if (i <= ft_lstsize(*src) / 2)
		while (i--)
			r(src, 'a');
	else
		while (i++ < ft_lstsize(*src))
			rr(src, 'a');
	p(src, dst, 'b');
}
