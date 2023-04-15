/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 18:06:46 by cschmied          #+#    #+#             */
/*   Updated: 2023/04/15 18:06:04 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/**
 * ft_isint - checks if the given string represents a valid integer
 * @str: input string to check
 *
 * Returns 1 if the string represents a valid integer, 0 otherwise.
 */

int	ft_isint(char *str)
{
	int	i;

	i = 0;
	if (ft_strlen(str) > 10 && *str != '-')
		return (0);
	if (ft_strlen(str) == 10 && *str != '-' && str[9] > '7')
		return (0);
	if (ft_strlen(str) > 11)
		return (0);
	if (*str == '-')
		i ++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

/**
 * sort_array - sorts an array of integers using bubble sort
 * @arr: pointer to the array of integers
 * @len: length of the array
 *
 * Sorts the given array of integers in ascending order.
 */

void	sort_array(int *arr, int len)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i++ < len)
	{
		j = 0;
		while (j < len - 1)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			j ++;
		}
	}
}

/**
 * val_at_index - gets the value at a specific index in a linked list
 * @stack: pointer to the head of the linked list
 * @index: index to retrieve the value from
 *
 * Returns the value at the specified index in the linked list.
 */

int	val_at_index(t_list *stack, int index)
{
	int	i;

	i = 0;
	while (i < index && stack)
	{
		stack = stack->next;
		i++;
	}
	return (stack->content);
}

/**
 * bit_len - calculates the number of bits used to store an integer
 * @n: input integer
 *
 * Returns the number of bits used to store the given integer.
 */

int	bit_len(int n)
{
	int	i;

	i = 0;
	while (n)
	{
		n /= 2;
		i++;
	}
	return (i);
}

/**
 * issorted - checks if the linked list is sorted in ascending order
 * @stack: pointer to the head of the linked list
 *
 * Returns 1 if the linked list is sorted in ascending order, 0 otherwise.
 */

int	issorted(t_list *stack)
{
	while (stack->next)
	{
		if (stack->content + 1 != stack->next->content)
			return (0);
		stack = stack->next;
	}
	return (1);
}
