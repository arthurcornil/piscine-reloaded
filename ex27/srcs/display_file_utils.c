/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arcornil <arcornil@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 21:53:03 by arcornil          #+#    #+#             */
/*   Updated: 2025/04/07 22:01:31 by arcornil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/display_file.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = (unsigned char )c;
		i ++;
	}
	return (b);
}

void	ft_putstrfd(int fd, char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len ++;
	write(fd, str, len);
}
