/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arcornil <arcornil@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:39:17 by arcornil          #+#    #+#             */
/*   Updated: 2025/02/12 10:28:55 by arcornil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstrnl(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str ++;
	}
	ft_putchar('\n');
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1 ++;
		s2 ++;
	}
	return (*s1 - *s2);
}

void	ft_strswap(char **s1, char **s2)
{
	char	*tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

void	ft_sort_2darr(int len, char **arr)
{
	int	i;
	int	j;

	i = 0;
	while (i < len - 1)
	{
		j = i + 1;
		while (j < len)
		{
			if (ft_strcmp(arr[i], arr[j]) > 0)
				ft_strswap(&arr[i], &arr[j]);
			j ++;
		}
		i ++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	argv ++;
	ft_sort_2darr(argc - 1, argv);
	i = 0;
	while (i < argc - 1)
	{
		ft_putstrnl(argv[i]);
		i ++;
	}
	return (0);
}
