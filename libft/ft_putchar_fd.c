/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christianschmiedt <christianschmiedt@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:03:50 by cschmied          #+#    #+#             */
/*   Updated: 2023/01/13 15:00:56 by christiansc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The ft_putchar_fd() function outputs char 'c' to the given filedescriptor 
// 'fd'.

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
