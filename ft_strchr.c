/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenchei <ibenchei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 14:47:43 by ibenchei          #+#    #+#             */
/*   Updated: 2020/06/22 14:47:49 by ibenchei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = (char*)s;
	while (tmp[i] || (tmp[i] == '\0' && (char)c == '\0'))
	{
		if (tmp[i] == (char)c)
			return ((char*)&tmp[i]);
		i++;
	}
	return (0);
}
