/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christianschmiedt <christianschmiedt@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:21:20 by cschmied          #+#    #+#             */
/*   Updated: 2023/01/13 15:00:39 by christiansc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The ft_memmove() function copies len bytes from string src to string dst.
// The two strings may overlap; the copy is always done in a non-destructive 
// manner.

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	if (dst == src)
		return (dst);
	if ((size_t)src > (size_t)dst)
		ft_memcpy(dst, src, len);
	else
	{
		i = len - 1;
		while (i >= 0)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	return (dst);
}
