/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arcornil <arcornil@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 19:55:34 by arcornil          #+#    #+#             */
/*   Updated: 2025/02/10 20:27:09 by arcornil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	if (nb <= 0)
		return (0);
	factorial = nb;
	nb --;
	while(nb > 0)
	{
		factorial *= nb;
		nb --;
	}
	return (factorial);
}
