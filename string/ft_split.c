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

size_t	ft_snum(char const *s, char c)
{
	size_t	snum;

	snum = 1;
	while (*s)
	{
		if (*s = c)
			snum++;
		s++;
	}
}

char	**ft_split(char const *s, char c)
{
	size_t	snum;
	size_t	len;
	size_t	tsize;
	char	**tab;

	snum = ft_snum(s, c);
}
