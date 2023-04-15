/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christianschmiedt <christianschmiedt@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:48:03 by cschmied          #+#    #+#             */
/*   Updated: 2023/01/13 14:59:43 by christiansc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The ft_memchr() function locates the first occurrence of c (converted to
// an unsigned char) in string 's'.

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)(s + i));
		i ++;
	}
	return (NULL);
}
