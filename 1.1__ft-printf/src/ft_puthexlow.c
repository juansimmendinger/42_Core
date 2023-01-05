/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexlow.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimmend <jsimmend@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 11:02:43 by jsimmend          #+#    #+#             */
/*   Updated: 2023/01/05 11:03:45 by jsimmend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexlow(unsigned int n, int count)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (n >= 16)
	{
		count += ft_puthexlow(n / 16, count);
		count += ft_puthexlow(n % 16, count);
	}
	else
	{
		write(1, &hex[n], 1);
		count++;
	}
	return (count);
}
