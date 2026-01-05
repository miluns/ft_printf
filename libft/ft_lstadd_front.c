/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstawski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 20:41:28 by mstawski          #+#    #+#             */
/*   Updated: 2025/01/06 22:42:34 by mstawski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*int	main(void)
{
	t_list	*list;
	list = (t_list *)malloc(sizeof(t_list));
	t_list	*newNode;
	newNode = (t_list *)malloc(sizeof(t_list));
	if (!newNode)
		return (1);
	int	n;

	n = 42;
	newNode->content = &n;
	newNode->next = NULL;
	ft_lstadd_front(&list, newNode);
	printf("%i\n", *(int *)list->content);
}*/
