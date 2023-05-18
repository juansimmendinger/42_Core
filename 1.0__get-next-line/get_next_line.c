/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimmend <jsimmend@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:53:58 by jsimmend          #+#    #+#             */
/*   Updated: 2023/05/18 15:49:38 by jsimmend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"	

static char	*read_file_into_buffer(int fd, char *buf, char *backup)
{
	int		read_line;
	char	*char_temp;

	read_line = 1;
	while (read_line != '\0')
	{
		read_line = read(fd, buf, BUFFER_SIZE);
		if (read_line == -1)
		{
			free(backup); 
			backup = NULL;
			return (0);
		}
		else if (read_line == 0)
			break ;
		buf[read_line] = '\0';
		if (!backup)
			backup = ft_strdup("");
		char_temp = backup;
		backup = ft_strjoin(char_temp, buf);
		free(char_temp);
		char_temp = NULL;
		if (ft_strchr (buf, '\n'))
			break ;
	}
	return (backup);
}

static char	*extract_line_from_buffer(char *line)
{
	size_t	count;
	char	*backup;

	count = 0;
	while (line[count] != '\n' && line[count] != '\0')
		count++;
	if (line[count] == '\0' || line[1] == '\0')
		return (0);
	backup = ft_substr(line, count + 1, ft_strlen(line) - count);
	if (*backup == '\0')
	{
		free(backup);
		backup = NULL;
	}
	line[count + 1] = '\0';
	return (backup);
}

char	*get_next_line(int fd)
{
	char		*line;
	char		*buf;
	static char	*backup;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	line = read_file_into_buffer(fd, buf, backup);
	free(buf);
	buf = NULL;
	if (!line)
		return (NULL);
	backup = extract_line_from_buffer(line);
	return (line);
}

/* int main(void)
{
	int fd = open("test.txt", O_RDONLY);
	if (fd == -1) {
		printf("Error opening the file.\n");
		return 1;
	}

	char *line;
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s\n", line);
		 fflush(stdout);  // Flush the output buffer
		 usleep(LINE_DELAY_SECONDS * 1000000); 
		free(line);
	}

	close(fd);
	return 0;
} */