/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 09:13:54 by ybaadi            #+#    #+#             */
/*   Updated: 2025/08/14 12:56:12 by ybaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_print(i / 10 + '0');
			ft_print(i % 10 + '0');
			ft_print(' ');
			ft_print(j / 10 + '0');
			ft_print(j % 10 + '0');
			if (i < 98)
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}
