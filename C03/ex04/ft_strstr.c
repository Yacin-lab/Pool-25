/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 12:10:13 by ybaadi            #+#    #+#             */
/*   Updated: 2025/09/01 06:58:15 by ybaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (&str[0]);
	i = 0;
	while (str[i])
	{
		j = 0; // Attention j kayrja3 l 0 y3ni wakha l9a harf wla kalima shiha wli tab3 ghalt ghat3awd t9arn mn				 awal harf y3ni 3mr str == find. w find maywsalch \0 donc ghatsali while(str) trja3 0
		while (str[i + j] == to_find[j] && str[i + j] && to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
