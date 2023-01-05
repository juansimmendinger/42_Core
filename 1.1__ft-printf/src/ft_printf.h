/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimmend <jsimmend@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 11:02:17 by jsimmend          #+#    #+#             */
/*   Updated: 2023/01/05 11:03:41 by jsimmend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
int		ft_putchar(char c);
int		ft_puthexlow(unsigned int n, int count);
int		ft_puthexup(unsigned int n, int count);
int		ft_putnbr(int n);
int		ft_printstr(char *s);
int		ft_putstr(char *s);
int		ft_putunbr(unsigned int n);
int		ft_putpointer(unsigned long long n);

#endif
