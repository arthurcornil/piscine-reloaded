/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arcornil <arcornil@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 21:25:22 by arcornil          #+#    #+#             */
/*   Updated: 2025/04/07 22:03:20 by arcornil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/display_file.h"

bool	display_error(int argc)
{
	if (argc == 2)
		return (false);
	if (argc == 1)
		ft_putstrfd(2, "File name missing.\n");
	else
		ft_putstrfd(2, "Too many arguments.\n");
	return (true);
}

bool	display_buffer(ssize_t chars_read, int fd, char *buffer)
{
	if (chars_read < 0)
	{
		ft_putstrfd(2, "Cannot read file.\n");
		close(fd);
		return (false);
	}
	else if (!chars_read)
		return (true);
	ft_putstrfd(1, buffer);
	return (true);
}

int	main(int argc, char **argv)
{
	int		fd;
	ssize_t	chars_read;
	char	buffer[BUFFER_SIZE];

	if (display_error(argc))
		return (1);
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		ft_putstrfd(2, "Cannot read file.\n");
		return (1);
	}
	chars_read = 1;
	while (chars_read)
	{
		ft_memset(buffer, 0, BUFFER_SIZE);
		chars_read = read(fd, buffer, BUFFER_SIZE);
		if (!display_buffer(chars_read, fd, buffer))
			return (1);
	}
	close(fd);
	return (0);
}
