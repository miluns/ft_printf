/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstawski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 11:39:32 by mstawski          #+#    #+#             */
/*   Updated: 2025/01/03 18:54:17 by mstawski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_occurrence;
	char	chr;

	last_occurrence = NULL;
	chr = (char)c;
	while (*s)
	{
		if (*s == chr)
			last_occurrence = (char *)s;
		s++;
	}
	if (*s == chr)
		return ((char *)s);
	return (last_occurrence);
}

/*int	main(void)
{
	const char *s;
	int	c;

	s = "HAAEJKA";
	c = 65;
	printf("%s\n", ft_strrchr(s, c));
}*/
