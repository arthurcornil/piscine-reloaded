/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arcornil <arcornil@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:00:14 by arcornil          #+#    #+#             */
/*   Updated: 2025/02/17 16:33:21 by arcornil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	*arr;
	int	i;

	if (min >= max)
		return (NULL);
	len = max - min;
	arr = (int *)malloc(sizeof(int) * len);
	if (!arr)
		return (NULL);
	i = 0;
	while (min < max)
	{
		*(arr + i) = min;
		min ++;
		i ++;
	}
	return (arr);
}
