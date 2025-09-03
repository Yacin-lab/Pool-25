/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:59:06 by ybaadi            #+#    #+#             */
/*   Updated: 2025/08/31 17:44:55 by ybaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	factor;

	factor = 0;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	factor = nb * ft_recursive_factorial(nb - 1);
	return (factor);
}
