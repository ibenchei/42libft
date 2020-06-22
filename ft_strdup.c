/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenchei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 03:39:05 by ibenchei          #+#    #+#             */
/*   Updated: 2020/06/22 14:49:52 by ibenchei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	char	*tab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	if (!(tab = malloc(i * sizeof(char) + 1)))
		return (NULL);
	while (j < i)
	{
		tab[j] = src[j];
		j++;
	}
	tab[j] = '\0';
	return (tab);
}
