/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 23:11:17 by cschmied          #+#    #+#             */
/*   Updated: 2023/04/15 17:57:42 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/**
 * main - entry point of the program
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Initialize two stacks, stack_a and stack_b, sort stack_a with the help of stack_b,
 * and then clear both stacks before terminating the program.
 * Return: 0 if successful
 */

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_b = NULL;
	stack_a = NULL;
	if (argc <= 2)
		return (0);
	if (!check_input(argc, argv))
		return (ft_printf("ERROR\n"), 0);
	stack_a = read_input(argc, argv);
	if (!stack_a)
		return (ft_printf("ERROR: memory allocation failed"), 0);
	sort(&stack_a, &stack_b);
	ft_lstclear(&stack_a);
	ft_lstclear(&stack_b);
	return (0);
}

/**
 * read_input - reads input from command line arguments and creates a sorted stack
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Read integers from command line arguments, sort them, and create a stack containing
 * values from 0 - len_input from the sorted array of integers.
 * Return: a pointer to the sorted stack, or NULL on error
 */

t_list	*read_input(int argc, char **argv)
{
	t_list	*stack;
	t_list	*node;
	int		*array;
	int		i;

	i = 1;
	stack = NULL;
	array = malloc(sizeof(int) * (argc - 1));
	if (!array)
		return (NULL);
	while (i++ < argc)
		array[i - 2] = ft_atoi(argv[i - 1]);
	sort_array(array, argc - 1);
	i = 1;
	while (i < argc)
	{
		node = ft_lstnew(pos_in_array(array, argc - 1, ft_atoi(argv[i])));
		if (!node)
			return (free(array), ft_lstclear(&stack), NULL);
		ft_lstadd_back(&stack, node);
		i ++;
	}
	return (free(array), stack);
}

/**
 * pos_in_array - finds the position of a number in an array
 * @array: pointer to an integer array
 * @len: length of the array
 * @num: number to find the position of
 *
 * Search for a number in an array and return its position.
 * Return: position of the number in the array, or -1 if not found
 */

int	pos_in_array(int *array, int len, int num)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (array[i] == num)
			return (i);
		i ++;
	}
	return (-1);
}

/**
 * check_input - checks the validity of command line arguments
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Check if the command line arguments are integers and unique.
 * Return: 1 if valid, 0 otherwise
 */

int	check_input(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		if (!ft_isint(argv[i]))
			return (0);
		j = 1;
		while (j < argc)
		{
			if (j != i && ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (0);
			j ++;
		}
		i ++;
	}
	return (1);
}
