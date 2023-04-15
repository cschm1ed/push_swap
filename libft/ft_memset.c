/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christianschmiedt <christianschmiedt@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:12:03 by cschmied          #+#    #+#             */
/*   Updated: 2023/01/13 15:00:47 by christiansc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The memset() function writes len bytes of value c (converted to an 
// unsigned char) to the string b.

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = (unsigned char)c;
		i ++;
	}
	return (b);
}
