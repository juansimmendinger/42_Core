/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimmend <jsimmend@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 11:02:11 by jsimmend          #+#    #+#             */
/*   Updated: 2023/01/05 11:03:37 by jsimmend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check(char c, va_list args)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += (ft_putchar(va_arg(args, int)));
	else if (c == 's')
		count += (ft_printstr(va_arg(args, char *)));
	else if (c == 'd' || c == 'i')
		count += (ft_putnbr(va_arg(args, int)));
	else if (c == 'u')
		count += (ft_putunbr(va_arg(args, unsigned int)));
	else if (c == 'x')
		count += (ft_puthexlow(va_arg(args, unsigned int), 0));
	else if (c == 'X')
		count += (ft_puthexup(va_arg(args, unsigned int), 0));
	else if (c == 'p')
		count += (ft_putpointer(va_arg(args, unsigned long long)));
	else if (c == '%')
	{
		count++;
		write(1, "%", 1);
	}
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_check(str[i + 1], args);
			i++;
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}
