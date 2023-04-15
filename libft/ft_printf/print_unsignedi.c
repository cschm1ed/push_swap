/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsignedi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:01:53 by cschmied          #+#    #+#             */
/*   Updated: 2023/01/16 10:49:19 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The print_unsignedi() function writes the character representation of an 
// unsigned integer 'n' to the standard-output.
// The print_unsignedi() function returns the amount of characters it displayed.

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

int	print_unsignedi(unsigned int n)
{
	long	n_cpy;

	n_cpy = n;
	if (n_cpy < 0)
	{
		ft_putchar_fd('-', 1);
		n_cpy = -n_cpy;
	}
	if (n_cpy == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	writenbr_recursively(n_cpy);
	return (get_len(n_cpy));
}
