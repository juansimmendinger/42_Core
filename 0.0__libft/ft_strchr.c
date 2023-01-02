/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimmend <jsimmend@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 12:30:05 by jsimmend          #+#    #+#             */
/*   Updated: 2023/01/02 13:45:34 by jsimmend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*ptr;
	unsigned char	chr;

	ptr = (unsigned char *) s;
	chr = (unsigned char) c;
	while (*ptr)
	{
		if (*ptr == chr)
			return ((char *) ptr);
		ptr++;
	}
	if (!chr)
		return ((char *) ptr);
	return (NULL);
}
