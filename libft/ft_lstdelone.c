/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christianschmiedt <christianschmiedt@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 19:17:09 by cschmied          #+#    #+#             */
/*   Updated: 2023/04/01 14:40:15 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The function ft_lstdelone() deletes and frees the memory of a
// linked-list`s node 'lst' and every successor of that node using the
//functions 'del' and free(3).

#include "libft.h"

void	ft_lstdelone(t_list *lst)
{
	free(lst);
	return ;
}
