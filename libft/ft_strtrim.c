/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christianschmiedt <christianschmiedt@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 12:28:22 by cschmied          #+#    #+#             */
/*   Updated: 2023/01/13 15:02:52 by christiansc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The ft_strtrim() function returns a copy of ’s1’ with the characters 
// specified in ’set’ removed from the beginning and the end of the string.

#include "libft.h"

static int	check_if_in_set(char c, char const *set)
{
	int	i;

	i = 0;
	if (set == NULL)
		return (0);
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i ++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	int		j;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (check_if_in_set(s1[i], set) == 1 && s1[i])
		i ++;
	if (i == ft_strlen(s1) || !(*s1))
		return (ft_strdup(""));
	while (check_if_in_set(s1[j], set) == 1 && j >= 0)
		j --;
	return (ft_substr(s1, i, j - i + 1));
}
