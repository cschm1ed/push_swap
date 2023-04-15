/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christianschmiedt <christianschmiedt@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:08:18 by cschmied          #+#    #+#             */
/*   Updated: 2023/01/13 14:56:27 by christiansc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The ft_isprint() function tests for any printing character, 
// including space (‘ ’).

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
