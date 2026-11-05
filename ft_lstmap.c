/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-sa <yaait-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 17:17:30 by username          #+#    #+#             */
/*   Updated: 2026/10/28 18:03:06 by yaait-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	result = NULL;
	while (lst)
	{
		content = f(lst->content);
		node = ft_lstnew(content);
		if (!node)
		{
			del(content);
			ft_lstclear(&result, del);
			return (NULL);
		}
		ft_lstadd_back(&result, node);
		lst = lst->next;
	}
	return (result);
}
void del(void *b)
{
	free(b);
}
void *f(void *a)
{
	int i = 0;
char  *str = malloc(ft_strlen(a) + 1);
ft_strlcpy(str,a,ft_strlen(a));
while(str[i])
{
	if(str[i]>='a' && str[i]<='z')
		str[i] =str[i]- 32;
	i++;
}
return str;
}
int main()
{
t_list *node = ft_lstnew("mmm");
t_list *node1 = ft_lstnew("aaa");
t_list *node2 = ft_lstnew("bbb");
node -> next = node1;
node1 -> next= node2;
t_list *a = ft_lstmap(node,f,del);
printf("%s", (char *)a->next->content);	
}