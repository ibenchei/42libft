/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenchei <ibenchei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 14:46:42 by ibenchei          #+#    #+#             */
/*   Updated: 2020/06/22 14:47:14 by ibenchei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	no_splits(char *str, char c)
{
	int i;
	int n;

	i = 0;
	n = 0;
	if (!str)
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
			n++;
		i++;
	}
	return (n + 1);
}

static int	s_len(char *str, int i, char c)
{
	int f;

	f = 0;
	if (!str)
		return (0);
	while (str[i + f] != '\0' && str[i + f] != c)
		f++;
	return (f + 1);
}

char		**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**tab;

	i = 0;
	j = 0;
	if (!s || !(tab = (char**)malloc(sizeof(char*) * no_splits((char *)s, c))))
		return (NULL);
	while ((char)s[i] != '\0')
	{
		if ((char)s[i] == c && (char)s[i] != '\0')
			i++;
		else
		{
			k = 0;
			if (!(tab[j] = (char*)malloc(sizeof(char) * s_len((char*)s, i, c))))
				return (NULL);
			while ((char)s[i] != c && (char)s[i] != '\0')
				tab[j][k++] = s[i++];
			tab[j++][k] = '\0';
		}
	}
	tab[j] = 0;
	return (tab);
}
