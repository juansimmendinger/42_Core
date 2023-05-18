/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimmend <jsimmend@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 12:29:12 by jsimmend          #+#    #+#             */
/*   Updated: 2023/05/10 10:54:53 by jsimmend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The ft_lstadd_front function takes a double pointer to the head of the linked list because it needs to modify the pointer to the head of the list itself.

In C, function arguments are passed by value, which means that when a function is called, a copy of each argument is created and passed to the function. 
This means that if a function receives a pointer as an argument and modifies the pointer, 
the changes are only applied to the copy of the pointer and not to the original pointer. */

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	*lst = new;
	new->next = tmp;
}
