/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adraji <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:58:55 by adraji            #+#    #+#             */
/*   Updated: 2025/10/17 17:58:57 by adraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static s_t	*ft_slen(char const *s, char c, s_t *n)
{
	size_t	i;

	i = 0;
	while (i < n.nstr)
	{
		while (*s)
		{
			if (*s == c)
			{
				s++;
				break;
			}
			n.len[i]++;
			s++;
		}
		i++;
	}
	return (n);
}

static s_t	ft_snum(char const *s, char c)
{
	int	i;
	s_t	n;

	i = 0;
	n.nstr = 1;
	while (s[i])
	{
		if (s[i] == c && s[i + 1])
			n.nstr++;
		i++;
	}
	n.len = malloc(sizeof(size_t) * n.nstr);
	if (!n.len)
		return (0);
	return (n);
}

char	**ft_split(char const *s, char c)
{
	s_t	tsize;
	char	**tab;

	if (!s)
		return (NULL);
	tsize = ft_snum(s, c);
	if (!tsize)
		return (NULL);
	tab = malloc
}
