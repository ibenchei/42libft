/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenchei <ibenchei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 15:14:40 by ibenchei          #+#    #+#             */
/*   Updated: 2020/06/22 15:14:43 by ibenchei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*tmp;

	i = 0;
	tmp = str;
	while (i < n)
	{
		tmp[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
