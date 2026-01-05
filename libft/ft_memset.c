/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstawski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 11:35:17 by mstawski          #+#    #+#             */
/*   Updated: 2025/01/03 18:50:37 by mstawski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*memory_area;
	unsigned char	conv_value;

	memory_area = (unsigned char *)s;
	conv_value = (unsigned char) c;
	while (n--)
		*memory_area++ = conv_value;
	return (s);
}

/*int	main(void)
{
	void	*s[10];
	int	c;
	size_t	n;

	c = 67;
	n = 3;
	printf("%s\n", (char *)ft_memset(s, c, n));
}*/
