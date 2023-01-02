/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimmend <jsimmend@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 12:30:01 by jsimmend          #+#    #+#             */
/*   Updated: 2023/01/02 13:45:31 by jsimmend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_split_str(char **arr, char const *s, char c)
{
	char		**arr_ptr;
	char const	*tmp;

	tmp = s;
	arr_ptr = arr;
	while (*tmp)
	{
		while (*s == c)
			++s;
		tmp = s;
		while (*tmp && *tmp != c)
			++tmp;
		if (*tmp == c || tmp > s)
		{
			*arr_ptr = ft_substr(s, 0, tmp - s);
			s = tmp;
			++arr_ptr;
		}
	}
	*arr_ptr = NULL;
}

static int	ft_count_words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			++s;
		if (*s)
			++count;
		while (*s && *s != c)
			++s;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	size;

	if (!s)
		return (NULL);
	size = ft_count_words(s, c);
	arr = (char **) malloc(sizeof(char *) * (size + 1));
	if (!arr)
		return (NULL);
	ft_split_str(arr, s, c);
	return (arr);
}
