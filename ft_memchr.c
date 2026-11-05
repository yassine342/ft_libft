/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-sa <yaait-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 17:38:26 by username          #+#    #+#             */
/*   Updated: 2026/10/25 21:13:29 by yaait-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*a;

	a = s;
	i = 0;
	while (i < n)
	{
		if (a[i] == (unsigned char) c)
		{
			return ((void *) & a[i]);
		}
		i++;
	}
	return (NULL);
}
