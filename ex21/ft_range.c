/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahermawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 14:03:47 by ahermawa          #+#    #+#             */
/*   Updated: 2021/10/30 14:52:46 by ahermawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	range;
	int	*arr;

	range = max - min;
	if (min >= max)
	{
		arr = NULL;
	}
	else
	{
		i = 0;
		arr = malloc(range * sizeof(int));
		while (i < range)
		{
			arr[i] = min;
			i++;
			min++;
		}
	}
	return (arr);
}
