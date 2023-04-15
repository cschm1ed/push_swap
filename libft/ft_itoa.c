/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christianschmiedt <christianschmiedt@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:33:31 by cschmied          #+#    #+#             */
/*   Updated: 2023/01/13 12:56:52 by christiansc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allocates (with malloc(3)) and returns a string representing the 
// integer received as an argument.

#include "libft.h"

static int	n_size(int n)
{
	int	size;

	size = 0;
	if (n < 0)
		n = -n;
	while (n != 0)
	{
		n /= 10;
		size ++;
	}
	return (size);
}

static void	assign_values(long n_copy, int size, int sign, char *ptr)
{
	while (--size, size >= 0)
	{
		ptr[size + sign] = n_copy % 10 + '0';
		n_copy /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		size;
	int		sign;
	long	n_copy;

	n_copy = n;
	size = n_size(n);
	sign = 0;
	if (n < 0)
	{
		sign = 1;
		n_copy = -n_copy;
	}
	if (n_copy == 0)
		return (ft_strdup("0"));
	ptr = malloc(sizeof(char) * size + sign + 1);
	if (!ptr)
		return (NULL);
	if (sign == 1)
		ptr[0] = '-';
	ptr[size + sign] = 0;
	assign_values(n_copy, size, sign, ptr);
	return (ptr);
}
