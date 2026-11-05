/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-sa <yaait-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 17:45:25 by username          #+#    #+#             */
/*   Updated: 2026/10/28 17:08:39 by yaait-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*ss;

	i = 0;
	len = ft_strlen(s);
	ss = malloc(len + 1);
	if (!ss)
		return (NULL);
	while (i < len)
	{
		ss[i] = s[i];
		i++;
	}
	ss[i] = '\0';
	i = 0;
	while (ss[i])
	{
		ss[i] = f(i, ss[i]);
		i++;
	}
	return (ss);
}
