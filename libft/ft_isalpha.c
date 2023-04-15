/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christianschmiedt <christianschmiedt@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:50:06 by cschmied          #+#    #+#             */
/*   Updated: 2023/01/13 14:55:59 by christiansc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The ft_isalpha() function tests for alphabetical characters with an ASCII 
// value of 65(A) - 90(Z) and 97(a) - 122(z)

int	ft_isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
		return (1);
	return (0);
}
