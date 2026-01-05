/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstawski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 11:33:52 by mstawski          #+#    #+#             */
/*   Updated: 2025/01/03 18:50:07 by mstawski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*array1;
	unsigned char	*array2;
	size_t			i;

	if (!n)
		return (0);
	array1 = (unsigned char *) s1;
	array2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (array1[i] != array2[i])
			return (array1[i] - array2[i]);
		i++;
	}
	i--;
	return (array1[i] - array2[i]);
}

/*int	main(void)
{
	const void	*s1;
	const void	*s2;
	size_t	i;

	s1 = "YOOOO";
	s2 = "YOOOK";
	i = 4;
	printf("%i\n%i\n", ft_memcmp(s1, s2, i), memcmp(s1, s2, i));
}*/
