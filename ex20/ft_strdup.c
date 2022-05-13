/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahermawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 18:54:04 by ahermawa          #+#    #+#             */
/*   Updated: 2021/10/30 13:56:07 by ahermawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		index;
	int		len;

	index = 0;
	len = ft_strlen(src);
	dup = (char *)malloc(sizeof(*dup) * (1 + 1));
	while (index < len)
	{
		 dup[index] = src[index];
		 index++;
	}
	dup[index] = '\0';
	return (dup);
}
