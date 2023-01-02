/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimmend <jsimmend@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 12:29:14 by jsimmend          #+#    #+#             */
/*   Updated: 2023/01/02 13:44:37 by jsimmend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_lstiteri(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	if (lst -> next != NULL)
		ft_lstiteri(lst -> next, (*del));
	ft_lstdelone(lst, (*del));
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	ft_lstiteri(*lst, (*del));
	*lst = NULL;
}
