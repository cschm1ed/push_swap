/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christianschmiedt <christianschmiedt@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:49:27 by cschmied          #+#    #+#             */
/*   Updated: 2023/01/13 15:02:32 by christiansc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The ft_strnstr() function returns a pointer to the first occurence of the 
// null-terminated string 'needle' in the string 'haystack' where no more than
// 'len' characters are searched. 

#include "libft.h"

static int	f_strcmp(const char *haystack, const char *needle)
{
	int	i;

	i = 0;
	while (needle[i])
	{
		if (haystack[i] == 0)
			return (1);
		else if (haystack[i] != needle[i])
			return (1);
		i ++;
	}
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		len_needle;

	len_needle = ft_strlen((char *)needle);
	i = 0;
	if (!(*haystack))
		i = *haystack;
	if (!(*needle))
		return ((char *)haystack);
	while (i + len_needle <= len && haystack[i])
	{
		if (f_strcmp(haystack + i, needle) == 0)
			return ((char *)haystack + i);
		i ++;
	}
	return (NULL);
}
