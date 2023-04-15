/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christianschmiedt <christianschmiedt@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:37:58 by cschmied          #+#    #+#             */
/*   Updated: 2023/01/13 15:03:06 by christiansc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The ft_tolower() function returns the lower-case letter corresponding 
// to character 'c'.

int	ft_tolower(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (c + ('a' - 'A'));
	return (c);
}
