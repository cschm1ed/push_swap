/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christianschmiedt <christianschmiedt@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:59:03 by cschmied          #+#    #+#             */
/*   Updated: 2023/01/13 15:01:32 by christiansc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The ft_striteri() function applies the function 'f' to every character of 
// string 's'

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i ++;
	}
	return ;
}
