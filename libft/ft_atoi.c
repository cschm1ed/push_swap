/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christianschmiedt <christianschmiedt@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:55:55 by cschmied          #+#    #+#             */
/*   Updated: 2023/01/13 15:04:18 by christiansc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The ft_atoi() function converts the initial portion of the string pointed 
// to by str to int representation

#include "libft.h"

static int	check_whitespace(char c)
{
	if (c == '\t' || c == '\n' || c == '\r'
		|| c == '\f' || c == '\v' || c == ' ')
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	sum;
	int	multiplier;

	sum = 0;
	i = 0;
	multiplier = 1;
	sign = 1;
	while (check_whitespace(str[i]) == 1)
		i ++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (ft_isdigit(str[i]) != 0)
		i ++;
	while (--i, i >= 0 && ft_isdigit(str[i]) != 0)
	{
		sum += multiplier * (str[i] - '0');
		multiplier *= 10;
	}
	return (sum * sign);
}
