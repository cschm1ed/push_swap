/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christianschmiedt <christianschmiedt@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 19:14:29 by cschmied          #+#    #+#             */
/*   Updated: 2023/01/13 13:14:23 by christiansc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The function ft_lstlast() returns the last node of the linked-list 'lst'.

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst -> next)
		lst = lst -> next;
	return (lst);
}
