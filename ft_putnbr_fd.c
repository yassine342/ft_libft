/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-sa <yaait-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 17:42:18 by username          #+#    #+#             */
/*   Updated: 2026/10/25 21:13:53 by yaait-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int			i;
	long int	nb;
	char		str[12];

	nb = n;
	i = 0;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = nb * -1;
	}
	while (nb > 9)
	{
		str[i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
	str[i] = nb + '0';
	while (i >= 0)
		write(fd, &str[i--], 1);
}
