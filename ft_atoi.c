/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adraji <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 20:34:43 by adraji            #+#    #+#             */
/*   Updated: 2025/10/16 20:34:46 by adraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned long	ft_number(const char *nptr, size_t i, int s)
{
	unsigned long	n;

	n = 0;
	while (nptr[i] && nptr[i] < 58 && nptr[i] > 47)
	{
		if (n > LONG_MAX)
		{
			if (s < 0)
				return (0);
			return (-1);
		}
		n *= 10;
		n += nptr[i] - 48;
		i++;
	}
	return (n);
}

int	ft_atoi(const char *nptr)
{
	size_t			i;
	unsigned long	n;
	int				s;

	i = 0;
	n = 0;
	s = 1;
	while (nptr[i] && ((nptr[i] == ' ') || (nptr[i] < 14 && nptr[i] > 8)))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			s = -1;
		i++;
	}
	n = ft_number(nptr, i, s);
	if (n > LONG_MAX)
	{
		if (s < 0)
			return (0);
		return (-1);
	}
	return (n * s);
}
