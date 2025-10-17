/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adraji <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:02:47 by adraji            #+#    #+#             */
/*   Updated: 2025/10/17 18:02:50 by adraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] && i < n)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	slen;
	char			*sub;

	slen = (unsigned int)ft_strlen(s);
	if (slen <= start)
		return(NULL);
	sub = malloc(sizeof(char) * (start + len + 1));
	return (ft_strncpy(sub, &s[start], len));
}

int	main()
{
	char *ss = "asdfghjkladam";
	char *s = ft_substr(ss, 14, 4);
	int a = 1;
	printf("%s,%d", s,a);
	free(s);
}
