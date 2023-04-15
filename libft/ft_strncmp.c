/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christianschmiedt <christianschmiedt@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:44:48 by cschmied          #+#    #+#             */
/*   Updated: 2023/01/13 15:02:21 by christiansc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The ft_strncmp() function returns an integer greater than, equal to, or 
// less than 0,  according as the first 'n' characters of string s1 are 
// greater than, equal to, or less than the string s2.

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	i = 0;
	while (i < n && (a[i] || b[i]))
	{
		if (a[i] != b[i])
		{
			if (a[i] > b[i])
				return (1);
			return (-1);
		}
		i ++;
	}
	return (0);
}
