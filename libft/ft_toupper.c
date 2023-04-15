/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christianschmiedt <christianschmiedt@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:35:55 by cschmied          #+#    #+#             */
/*   Updated: 2023/01/13 15:03:12 by christiansc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The ft_toupper() function returns the upper-case letter corresponding 
// to character 'c'.

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c + 'A' - 'a');
	return (c);
}
