/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexpointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:02:21 by cschmied          #+#    #+#             */
/*   Updated: 2023/01/16 10:50:44 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The print_hexpointer() function displays a pointer 'n' as it's hexadecimal
// representation with the prefix '0x'.
// The print_hexpointer() function returns the amount of characters it 
// displayed.

#include "ft_printf.h"

static void	writenbr_recursively(unsigned long long n)
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

static int	get_len(unsigned long long n)
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

int	print_hexpointer(unsigned long long n)
{
	if (n == 0)
	{
		ft_putstr_fd("0x0", 1);
		return (3);
	}
	ft_putstr_fd("0x", 1);
	writenbr_recursively(n);
	return (get_len(n) + 2);
}
