/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adraji <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:00:24 by adraji            #+#    #+#             */
/*   Updated: 2025/10/17 18:00:25 by adraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	len;
	char	*s;

	if (!s1)
		return (NULL);
	i = 0;
	len = ft_strlen(s1);
	s = malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	while (i < len)
		s[i] = s1[i++];
	s[i] = '\0';
	return s;
}

