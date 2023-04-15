/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christianschmiedt <christianschmiedt@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:19:27 by cschmied          #+#    #+#             */
/*   Updated: 2023/01/13 14:30:48 by christiansc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The ft_putendl_fd() outputs a newline-character to filedescriptor 'fd'.

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
	return ;
}
