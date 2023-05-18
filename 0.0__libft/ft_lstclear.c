/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimmend <jsimmend@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 12:29:14 by jsimmend          #+#    #+#             */
/*   Updated: 2023/05/10 13:24:21 by jsimmend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Deletes and frees the given node and every successor of that node, using the function ’del’ and free(3). 
Finally, the pointer to the list must be set to NULL. */

static void	ft_lstiteri(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	if (lst->next != NULL)
		ft_lstiteri(lst->next, (*del));
	ft_lstdelone(lst, (*del));
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	ft_lstiteri(*lst, (*del));
	*lst = NULL;
}
