/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christianschmiedt <christianschmiedt@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:05:23 by cschmied          #+#    #+#             */
/*   Updated: 2023/01/13 14:55:38 by christiansc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The ft_isalnum() function tests for any character for which ft_isalpha() 
// or ft_isdigit() is true.

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) != 0 || ft_isdigit(c) != 0)
		return (1);
	return (0);
}
