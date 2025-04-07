/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arcornil <arcornil@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 20:10:31 by arcornil          #+#    #+#             */
/*   Updated: 2025/02/10 20:26:30 by arcornil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb <= 1)
		return (1);
	else if (nb <= 0)
		return (0);
	result = nb * ft_recursive_factorial(nb - 1);
	return(result);
}
