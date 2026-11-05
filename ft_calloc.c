/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-sa <yaait-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 17:22:52 by username          #+#    #+#             */
/*   Updated: 2026/10/28 22:33:34 by yaait-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	void			*cale;
	unsigned char	*bzero;

	i = 0;
	if (nmemb == 0 || size == 0)
	{
		cale = malloc(0);
		return (cale);
	}
	if (nmemb > (size_t)-1 / size)
		return (NULL);
	cale = malloc(nmemb * size);
	if (!cale)
		return (NULL);
	bzero = (unsigned char *) cale;
	while (i < nmemb * size)
	{
		bzero[i] = 0;
		i++;
	}
	return (cale);
}
