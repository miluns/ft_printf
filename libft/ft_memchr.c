/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstawski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 11:33:24 by mstawski          #+#    #+#             */
/*   Updated: 2024/12/20 20:11:23 by mstawski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*memory_block;
	unsigned char	value;

	memory_block = (unsigned char *)s;
	value = (unsigned char)c;
	while (n--)
	{
		if (*memory_block == value)
			return ((void *)memory_block);
		memory_block++;
	}
	return (NULL);
}
