/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arcornil <arcornil@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:59:07 by arcornil          #+#    #+#             */
/*   Updated: 2025/04/07 16:00:47 by arcornil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str != 0)
	{
		counter ++;
		str ++;
	}
	return (counter);
}

char	*ft_strcpy(char *dest, char *src)
{
	char	*start_dest;

	start_dest = dest;
	while (*src != 0)
	{
		*dest = *src;
		dest ++;
		src ++;
	}
	*dest = 0;
	return (start_dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		dest_len;

	dest_len = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * dest_len + 1);
	if (!dest)
		return (NULL);
	return (ft_strcpy(dest, src));
}
