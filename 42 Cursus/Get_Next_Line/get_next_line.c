/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mturksoy <mturksoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:54:16 by mturksoy          #+#    #+#             */
/*   Updated: 2023/02/26 18:01:24 by mturksoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_get_str(int fd, char *str)
{
	int		read_byte;
	char	*temp_str;

	temp_str = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!temp_str)
		return (0);
	read_byte = 1;
	while (!ft_strchr(str, '\n') && read_byte != 0)
	{
		read_byte = read(fd, temp_str, BUFFER_SIZE);
		if (read_byte == -1)
		{
			free (temp_str);
			return (0);
		}
		temp_str[read_byte] = '\0';
		str = ft_strjoin(str, temp_str);
	}
	free(temp_str);
	return (str);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*str;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	str = ft_get_str(fd, str);
	if (!str)
		return (0);
	line = ft_get_line(str);
	str = ft_get_new_str(str);
	return (line);
}
