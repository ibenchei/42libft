/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenchei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 02:53:46 by ibenchei          #+#    #+#             */
/*   Updated: 2020/02/13 03:24:08 by ibenchei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	char		*tmp;

	i = 0;
	tmp = (char*)s;
	while (tmp[i])
		i++;
	while (i >= 0)
	{
		if (tmp[i] == (char)c)
			return (&tmp[i]);
		i--;
	}
	return (0);
}
