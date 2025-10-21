/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adraji <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 20:34:54 by adraji            #+#    #+#             */
/*   Updated: 2025/10/16 20:34:57 by adraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_sizenb(int n)
{
	size_t			size;
	unsigned int	nb;

	size = 0;
	nb = n;
	if (nb < 0)
	{
		nb = -nb;
		size++;
	}
	while (nb > 0)
	{
		nb /= 10;
		size++;
	}
	return (size);
}

static char	*ft_revers(char *s)
{
	int		i;
	int		j;
	char	t;

	i = 0;
	j = ft_strlen(s) - 1;
	while (i < j)
	{
		t = s[i];
		s[i++] = s[j];
		s[j--] = t;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char			*nb;
	int				i;
	unsigned int	nbr;

	if (n == 0)
		return ("0");
	nb = malloc(sizeof(char) * (ft_sizenb(n) + 1));
	i = 0;
	nbr = n;
	if (n < 0)
		nbr = -n;
	while (nbr > 0)
	{
		nb[i++] = (nbr % 10) + 48;
		nbr /= 10;
	}
	if (n < 0)
		nb[i++] = '-';
	nb[i] = '\0';
	return (ft_revers(nb));
}
