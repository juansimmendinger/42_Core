/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimmend <jsimmend@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 12:29:20 by jsimmend          #+#    #+#             */
/*   Updated: 2023/05/10 12:48:05 by jsimmend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Iterates the list ’lst’ and applies the function ’f’ on the content of each node.

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	if (lst -> next != NULL)
		ft_lstiter(lst->next, (*f));
	(*f)(lst->content);
}
