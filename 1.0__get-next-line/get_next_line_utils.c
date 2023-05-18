/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimmend <jsimmend@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:53:43 by jsimmend          #+#    #+#             */
/*   Updated: 2023/05/18 08:14:39 by jsimmend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (str == 0)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int i)
{
	while (*s)
	{
		if (*s == i)
			return ((char *)s);
		s++;
	}
	if (i == '\0')
		return ((char *)s);
	return (0);
}

char	*ft_strdup(const char *s)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = ft_strlen(s);
	str = (char *)malloc(sizeof(*str) * (j + 1));
	if (str == NULL)
		return (NULL);
	while (i < j)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}

/* int main(void)
{
	// Test ft_substr
	char const *str = "Hello, World!";
	char *substr = ft_substr(str, 7, 5);
	printf("Substring: %s\n", substr);  // Expected output: "World"
	free(substr);

	// Test ft_strlen
	int len = ft_strlen("Hello");
	printf("Length: %d\n", len);  // Expected output: 5

	// Test ft_strchr
	char const *str2 = "Hello, World!";
	char *chr = ft_strchr(str2, 'W');
	printf("Character: %s\n", chr);  // Expected output: "World!"
	
	// Test ft_strdup
	char const *str3 = "Hello, World!";
	char *dup = ft_strdup(str3);
	printf("Duplicate: %s\n", dup);  // Expected output: "Hello, World!"
	free(dup);

	// Test ft_strjoin
	char const *s1 = "Hello, ";
	char const *s2 = "World!";
	char *joined = ft_strjoin(s1, s2);
	printf("Joined: %s\n", joined);  // Expected output: "Hello, World!"
	free(joined);

	return 0;
} */