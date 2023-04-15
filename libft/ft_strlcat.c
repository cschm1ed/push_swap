/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christianschmiedt <christianschmiedt@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:29:53 by cschmied          #+#    #+#             */
/*   Updated: 2023/01/13 15:01:49 by christiansc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The ft_strlcat() appends at most 'dstsize' - strlen(dst) - 1 byte of string 
// 'src' to the end of 'dst'. ft_strlcat() returns the size of the string it 
// tried to create.

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = 0;
	if (len_dst > dstsize || dstsize == 0)
		return (len_src + dstsize);
	while (src[i] && len_dst + i < dstsize - 1)
	{
		dst[len_dst + i] = src[i];
		i ++;
	}
	dst[len_dst + i] = 0;
	return (len_dst + len_src);
}
