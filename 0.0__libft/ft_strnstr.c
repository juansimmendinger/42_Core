/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimmend <jsimmend@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 12:30:32 by jsimmend          #+#    #+#             */
/*   Updated: 2023/01/02 12:30:33 by jsimmend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*little || big == little)
		return ((char *)&big[0]);
	while (len-- && big[i])
	{
		if (big[i] == little[j])
		{
			while (big[i + j] == little[j] && little[j] && (len - j + 1))
			{
				j++;
			}
			if (!little[j])
				return ((char *)&big[i]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
