/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 01:30:04 by cschmied          #+#    #+#             */
/*   Updated: 2023/01/16 10:47:21 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The print_string() function takes a string 'str' and displays it on the
// standard-output.
// The print_string() function returns the amount of characters it displayed.

#include "ft_printf.h"

int	print_string(const char *str)
{
	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	ft_putstr_fd((char *)str, 1);
	return (ft_strlen(str));
}
