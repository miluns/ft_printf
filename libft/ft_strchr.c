/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstawski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 11:35:42 by mstawski          #+#    #+#             */
/*   Updated: 2025/01/03 18:52:18 by mstawski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	chr;

	chr = (char)c;
	if (chr == '\0')
		return ((char *)s + ft_strlen(s));
	while (*s)
	{
		if (*s == chr)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

/*int	main(void)
{
	const char	*s;
	int	c;

	s = "HEJKA";
	c = 77;
	printf("%s\n", ft_strchr(s,c));
}*/
