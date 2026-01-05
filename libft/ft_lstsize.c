/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstawski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 22:45:35 by mstawski          #+#    #+#             */
/*   Updated: 2025/01/09 20:47:09 by mstawski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

/*t_list	*Linkedlist(int length)
{
	t_list	*Linkedlist;
	int	n;
	int	i;

	Linkedlist = (t_list *)malloc(sizeof(t_list) * length);
	if (!Linkedlist)
		return (NULL);
	n = 0;
	i = 0;
	while(i++ < length)
	{
		Linkedlist->content = &n + i++;
		Linkedlist->next = Linkedlist + i;
		Linkedlist = Linkedlist->next;
	}
	return (Linkedlist);
}

int main(void)
{
        t_list  *list;
        int     i;

        list = Linkedlist(5);
        i = 0;
        while (i++ < 5 && !list)
        {
                printf("%i\n", *(int *)list->content);
                list = list->next;
        }
}*/
