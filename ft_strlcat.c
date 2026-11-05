/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-sa <yaait-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 17:45:10 by username          #+#    #+#             */
/*   Updated: 2026/10/29 10:37:32 by yaait-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	s_len;
	size_t	d_len;
	size_t	i;

	s_len = 0;
	d_len = 0;
	i = 0;
	s_len = ft_strlen(src);
	d_len = ft_strlen(dst);
	if (size == 0)
		return (s_len);
	if (d_len >= size)
		return (s_len + size);
	while (src[i] && (d_len + i) < (size - 1))
	{
		dst[d_len + i] = src[i];
		i++;
	}
	dst[d_len + i] = '\0';
	return (s_len + d_len);
}
#include <string.h>
int main()
{
	
	strlcat(NULL, "messi", 0);
}