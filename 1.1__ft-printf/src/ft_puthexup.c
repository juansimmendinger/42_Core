/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimmend <jsimmend@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 11:02:49 by jsimmend          #+#    #+#             */
/*   Updated: 2023/01/05 11:03:47 by jsimmend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexup(unsigned int n, int count)
{
	char	*hex;

	hex = "0123456789ABCDEF";
	if (n >= 16)
	{
		count = ft_puthexup(n / 16, count);
		count = ft_puthexup(n % 16, count);
	}
	else
	{
		write(1, &hex[n], 1);
		count++;
	}
	return (count);
}
