/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 01:08:28 by cschmied          #+#    #+#             */
/*   Updated: 2023/01/16 10:49:54 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This simple version of the printf() function reproduces printf`s behaviour 
// with identifiers 'dicxusp%'. Like the real printf() ft_printf() returns
// the amount of characters it displayed.

#include "ft_printf.h"

static int	assign_case(char identifier, va_list *args)
{
	if (identifier == 'd' || identifier == 'i')
		return (print_decimal(va_arg(*args, int)));
	else if (identifier == 'c')
		return (print_char(va_arg(*args, int)));
	else if (identifier == 'x')
		return (print_itohex_lower(va_arg(*args, unsigned int)));
	else if (identifier == 'X')
		return (print_itohex_upper(va_arg(*args, unsigned int)));
	else if (identifier == 'u')
		return (print_unsignedi(va_arg(*args, unsigned int)));
	else if (identifier == 's')
		return (print_string(va_arg(*args, char *)));
	else if (identifier == 'p')
		return (print_hexpointer(va_arg(*args, unsigned long long)));
	ft_putchar_fd('%', 1);
	return (1);
}

int	ft_printf(char const *format_string, ...)
{
	va_list	args;
	int		return_value;

	return_value = 0;
	va_start(args, format_string);
	while (*format_string)
	{
		if (*format_string != '%')
		{
			ft_putchar_fd(*format_string, 1);
			return_value ++;
		}
		else
		{
			format_string ++;
			return_value += assign_case(*format_string, &args);
		}
		format_string ++;
	}
	va_end(args);
	return (return_value);
}
