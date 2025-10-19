/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adraji <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:58:55 by adraji            #+#    #+#             */
/*   Updated: 2025/10/18 15:23:35 by adraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **tab)
{
	size_t	i;

	i = 0;
	while(tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

static size_t	ft_strcount(const char *s, char c)
{
	size_t	y;

	y = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
			y++;
		while (*s != c && *s)
			s++;
	}
	return (y);
}

static char	*ft_strfill(char **tab, const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	x;

	i = 0;
	j = 0;
	x = 0;
	while (*s == c)
		s++;
	while (s[x] != c)
		x++;
	tab[0] = ft_calloc(sizeof(char), (x + 1));
	if (!tab[0])
	{
		ft_free(tab);
		return(NULL);
	}
	while (i < x)
	{
		tab[0][i] = s[j];
		i++;
		j++;
	}
	tab[0][i] = '\0';
	return ((char *)&s[x + 1]);
}

char	**ft_split(const char *s, char c)
{
	size_t	j;
	size_t	y;
	char	**tab;

	if (!s)
		return (NULL);
	j = 0;
	y = ft_strcount(s, c);
	if (!y)
		return (NULL);
	tab = ft_calloc(sizeof(char *), (y + 1));
	if (!tab)
		return (NULL);
	while (j < y)
	{
		s = ft_strfill(&tab[j], s ,c);
		if (!s)
			return(NULL);
		j++;
	}
	return (tab);
}
