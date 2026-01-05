/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstawski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 11:33:06 by mstawski          #+#    #+#             */
/*   Updated: 2025/01/03 23:05:10 by mstawski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*alloc_mem;
	size_t			array_size;
	size_t			i;

	if (!nmemb || !size)
		return (ft_strdup(""));
	if (nmemb >= 2147483647 / size)
		return (NULL);
	array_size = nmemb * size;
	i = 0;
	alloc_mem = malloc(array_size);
	if (!alloc_mem)
		return (NULL);
	while (i < array_size)
		alloc_mem[i++] = 0;
	return ((void *)alloc_mem);
}
