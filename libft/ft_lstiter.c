/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstawski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 17:06:42 by mstawski          #+#    #+#             */
/*   Updated: 2025/01/09 15:10:07 by mstawski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}

/*t_list	node_creation(int value)
{
	t_list node;

	node.content = value;
	node.next = NULL;
	return (node);
}

t_list	*list_creation(int length)
{
	t_list	*list;
	t_list	new;
	int	i;

	i = 0;
	new = node_creation(i)
	while (i < length)
	{
		list = &new;
		new->next = node_creation(++i);
	}
	return (list);
}

int	main(void)
{
	t_list	*list;

	list = list_creation(5);
	//sam se napisz
}*/
