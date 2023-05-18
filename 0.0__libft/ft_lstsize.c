/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimmend <jsimmend@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 12:29:31 by jsimmend          #+#    #+#             */
/*   Updated: 2023/05/10 10:50:52 by jsimmend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	if (!lst) //if empty return 0
		return (0);
	if (lst->next == NULL) //if last node, count 1
		return (1);
	return (1 + ft_lstsize(lst->next)); //. The 1 added at each recursive call is to account for the current node being counted.
}
