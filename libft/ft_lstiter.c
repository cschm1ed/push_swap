/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christianschmiedt <christianschmiedt@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 19:37:59 by cschmied          #+#    #+#             */
/*   Updated: 2023/04/01 14:42:41 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The function ft_lstite() applies the function 'f' to the content of a
// linked-list`s node 'lst' and every succesor of that node.

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(int))
{
	while (lst)
	{
		f(lst -> content);
		lst = lst -> next;
	}
	return ;
}
