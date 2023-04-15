/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christianschmiedt <christianschmiedt@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 15:51:30 by christiansc       #+#    #+#             */
/*   Updated: 2023/01/13 14:33:26 by christiansc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The ft_split() function eturns an array of strings obtained by splitting 
// the string ’s’ using the	character ’c’ as a delimiter.
// The returned array ends with a NULL pointer.

#include "libft.h"

static int	count_strs(char const *s, char c)
{
	int	i;
	int	counter;

	counter = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			while (s[i] == c && s[i])
				i ++;
		}
		else
		{
			while (s[i] != c && s[i])
				i ++;
			counter ++;
		}
	}
	return (counter);
}

static char	**free_strs(char ***strs, int wc)
{
	int	i;

	i = 0;
	while (i < wc)
		free((*strs)[i]);
	return (NULL);
}

char	**split(const char *s, char c, char **strs, int words)
{
	int	i;
	int	len;
	int	word_count;

	word_count = 0;
	i = 0;
	len = 0;
	while (s[i] && word_count < words)
	{
		while (s[i] == c && s[i])
			i ++;
		while (s[i] != c && s[i])
		{
			i ++;
			len ++;
		}		
		strs[word_count] = ft_substr(s, i - len, len);
		if (!(strs[word_count]))
			return (free_strs(&strs, word_count));
		len = 0;
		word_count ++;
	}
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;

	if (!s)
		return (NULL);
	ptr = malloc(sizeof(char *) * (count_strs(s, c) + 1));
	if (!ptr)
		return (NULL);
	ptr[count_strs(s, c)] = 0;
	ptr = split(s, c, ptr, count_strs(s, c));
	return (ptr);
}
