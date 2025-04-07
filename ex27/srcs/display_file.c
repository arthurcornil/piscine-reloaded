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

int	main(int argc, char **argv)
{
	int		fd;
	size_t	chars_read;
	char	buffer[4];

	if (argc != 2)
	{
		if (argc == 1)
			ft_putstrfd(2, "File name missing.\n");
		else if (argc > 2)
			ft_putstrfd(2, "Too many arguments.\n");
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	chars_read = 1;
	while (chars_read)
	{
		ft_memset(buffer, 0, BUFFER_SIZE);
		chars_read = read(fd, buffer, BUFFER_SIZE);
		if (chars_read < 0)
		{
			ft_putstrfd(2, "Cannot read file.\n");
			close(fd);
			return (1);
		}
		else if (chars_read == 0)
		{
			close(fd);
			return (0);
		}
		ft_putstrfd(1, buffer);
	}
}
