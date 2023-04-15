/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christianschmiedt <christianschmiedt@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:06:45 by cschmied          #+#    #+#             */
/*   Updated: 2023/01/13 15:04:35 by christiansc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The ft_isascii() function tests for an ASCII character, which is any 
// character between 0 and octal 0177 inclusive.

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 0177)
		return (1);
	return (0);
}
