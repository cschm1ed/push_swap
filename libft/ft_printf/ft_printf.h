/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 01:06:17 by cschmied          #+#    #+#             */
/*   Updated: 2023/01/16 13:27:25 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "../libft.h"

int	ft_printf(char const *format_string, ...);
int	print_char(char c);
int	print_decimal(int n);
int	print_hexpointer(unsigned long long n);
int	print_itohex_lower(unsigned int n);
int	print_itohex_upper(unsigned int n);
int	print_string(const char *str);
int	print_unsignedi(unsigned int n);
#endif