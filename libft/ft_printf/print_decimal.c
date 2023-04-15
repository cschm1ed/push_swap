/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_decimal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 01:41:31 by cschmied          #+#    #+#             */
/*   Updated: 2023/01/16 10:47:43 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The print_decimal() function displays an integer value on the standard-output
// and returns the amount of characters it displayed.
// print_decimal() also handles negative numbers.

#include "ft_printf.h"

static void	writenbr_recursively(long n)
{
	if (n == 0)
		return ;
	else
		writenbr_recursively(n / 10);
	ft_putchar_fd(n % 10 + '0', 1);
}

static int	get_len(long n)
{
	int	i;

	i = 0;
	while (n)
	{
		n /= 10;
		i ++;
	}
	return (i);
}

int	print_decimal(int n)
{
	long	n_cpy;
	int		sign;

	sign = 0;
	n_cpy = n;
	if (n_cpy < 0)
	{
		ft_putchar_fd('-', 1);
		sign = 1;
		n_cpy = -n_cpy;
	}
	if (n_cpy == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	writenbr_recursively(n_cpy);
	return (get_len(n_cpy) + sign);
}
