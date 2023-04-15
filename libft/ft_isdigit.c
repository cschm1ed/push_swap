/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christianschmiedt <christianschmiedt@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:52:20 by cschmied          #+#    #+#             */
/*   Updated: 2023/01/13 12:51:44 by christiansc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The ft_isdigit() function tests for a decimal digit character.

int	ft_isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	return (0);
}
