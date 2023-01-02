/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimmend <jsimmend@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 12:29:06 by jsimmend          #+#    #+#             */
/*   Updated: 2023/01/02 12:29:07 by jsimmend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

static int	ft_getlen(int n)
{
	if (n >= 10)
		return (ft_getlen(n / 10) + 1);
	else if (n <= -10)
		return (ft_getlen(n / -10) + 2);
	else if (n < 0)
		return (2);
	else
		return (1);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;

	len = ft_getlen(n);
	res = (char *) ft_calloc(len + 1, sizeof(char));
	if (!res)
		return (NULL);
	if (n == 0)
		res[0] = '0';
	if (n < 0)
	{
		res[0] = '-';
		if (n == -2147483648)
		{
			res[--len] = '8';
			n /= 10;
		}
		n = -n;
	}
	while (len-- && n != 0)
	{
		res[len] = '0' + (n % 10);
		n /= 10;
	}
	return (res);
}
