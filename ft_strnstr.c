/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenchei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 11:58:07 by ibenchei          #+#    #+#             */
/*   Updated: 2019/11/06 12:19:27 by ibenchei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *needle, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	if (needle[i] == '\0')
		return ((char*)str);
	while (str[i] != '\0' && i <= size)
	{
		j = 0;
		if (str[i] == needle[j])
			while (str[i + j] == needle[j] && i + j < size)
			{
				if (needle[j + 1] == '\0')
					return ((char*)&str[i]);
				j++;
			}
		i++;
	}
	return (NULL);
}
