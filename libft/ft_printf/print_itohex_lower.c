/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_itohex_lower.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 01:41:31 by cschmied          #+#    #+#             */
/*   Updated: 2023/01/16 10:50:56 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The print_itohex_lower() function takes an unsigned int 'n' and displays
// its hexadecimal representation in lower-case.
// The print_itohex_lower() function returns the amount of characters
// it displayed.

#include "ft_printf.h"

static void	writenbr_recursively(unsigned int n)
{
	int	digit;

	if (n == 0)
		return ;
	else
		writenbr_recursively(n / 16);
	digit = n % 16;
	if (digit > 9)
		ft_putchar_fd('a' + digit - 10, 1);
	else
		ft_putchar_fd(digit + '0', 1);
	return ;
}

static int	get_len(unsigned int n)
{
	int	i;

	i = 0;
	while (n)
	{
		n /= 16;
		i ++;
	}
	return (i);
}

int	print_itohex_lower(unsigned int n)
{
	if (n == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	writenbr_recursively(n);
	return (get_len(n));
}
