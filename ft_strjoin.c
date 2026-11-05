/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-sa <yaait-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 17:16:31 by username          #+#    #+#             */
/*   Updated: 2026/10/25 21:14:11 by yaait-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	j;
	size_t	i;
	char	*stj;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1) + ft_strlen(s2);
	j = 0;
	stj = malloc(i + 1);
	if (!stj)
		return (NULL);
	while (s1[j])
	{
		stj[j] = s1[j];
		j++;
	}
	i = 0;
	while (s2[i])
	{
		stj[j + i] = s2[i];
		i++;
	}
	stj[j + i] = '\0';
	return (stj);
}
