/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-sa <yaait-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 17:26:33 by username          #+#    #+#             */
/*   Updated: 2026/10/27 16:28:52 by yaait-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_putnb(char *str, long nb, int len)
{
	if (nb < 0)
	{
		nb = nb * -1;
		str[0] = '-';
	}
	str[len--] = '\0';
	while (nb > 9)
	{
		str[len] = nb % 10 + '0';
		nb = nb / 10;
		len--;
	}
	str[len] = nb + '0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	int		len;

	nb = n;
	len = 0;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	if (nb <= 0)
		len++;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str = ft_putnb(str, nb, len);
	return (str);
}
