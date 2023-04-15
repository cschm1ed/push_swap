/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christianschmiedt <christianschmiedt@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:07:08 by cschmied          #+#    #+#             */
/*   Updated: 2023/01/13 15:01:09 by christiansc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The ft_putstr_fd() function outputs string 's' to the given 
// filedescriptor 'fd'.

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
		ft_putchar_fd(s[i++], fd);
	return ;
}
