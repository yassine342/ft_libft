/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-sa <yaait-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 17:42:50 by username          #+#    #+#             */
/*   Updated: 2026/10/27 14:03:01 by yaait-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_free(char **spl, size_t i)
{
	while (i--)
		free(spl[i]);
	free(spl);
	return (NULL);
}

static size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	w;

	i = 0;
	w = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && ++w)
		{
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (w);
}

static char	*ft_word_dup(char const *s, size_t start, size_t end)
{
	char	*word;
	size_t	i;

	word = malloc(end - start + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

static char	**ft_fill_split(char **spl, char const *s, char c)
{
	size_t	start;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	start = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			spl[j] = ft_word_dup(s, start, i);
			if (!spl[j])
				return (ft_free(spl, j));
			j++;
		}
	}
	spl[j] = NULL;
	return (spl);
}

char	**ft_split(char const *s, char c)
{
	char	**spl;
	size_t	size;

	if (!s)
		return (NULL);
	size = ft_count_words(s, c);
	spl = malloc((size + 1) * sizeof(char *));
	if (!spl)
		return (NULL);
	return (ft_fill_split(spl, s, c));
}
