/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstawski <mstawski@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 11:34:55 by mstawski          #+#    #+#             */
/*   Updated: 2025/01/03 21:02:54 by mstawski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*src_memory;
	unsigned char	*dst_memory;

	if (!dest && !src)
		return (NULL);
	src_memory = (unsigned char *)src;
	dst_memory = (unsigned char *)dest;
	while (n--)
		*dst_memory++ = *src_memory++;
	return (dest);
}

/*int	main(void)
{
	void	*dst[5];
	const void	*src;
	size_t	n;

	src = "Hejka";
	n = 5;
	printf("%s\n", (char *)memcpy(dst, src, n));
}*/
