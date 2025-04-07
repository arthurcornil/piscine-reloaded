/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arcornil <arcornil@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 11:14:29 by arcornil          #+#    #+#             */
/*   Updated: 2025/02/19 16:44:40 by arcornil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	non_null_returns;	

	non_null_returns = 0;
	while (*tab)
	{
		if (f(*tab))
			non_null_returns ++;
		tab ++;
	}
	return (non_null_returns);
}
