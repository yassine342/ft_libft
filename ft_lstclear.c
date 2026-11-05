/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-sa <yaait-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 17:35:50 by username          #+#    #+#             */
/*   Updated: 2026/10/27 14:36:09 by yaait-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nextt;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		nextt = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = nextt;
	}
}
