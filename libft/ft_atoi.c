/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstawski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 11:31:55 by mstawski          #+#    #+#             */
/*   Updated: 2024/12/20 15:16:38 by mstawski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	numb;
	int	sign;

	numb = 0;
	sign = 0;
	while ((*nptr > 6 && *nptr < 14) || *nptr == 32)
		nptr++;
	if (*nptr == 43 || *nptr == 45)
		sign += *(nptr++);
	while (*nptr > 47 && *nptr < 58)
		numb = numb * 10 + (*(nptr++) - 48);
	if (sign == 45)
		return (numb * (-1));
	return (numb);
}

/*int	main(void)
{
	const char	*s;

	s = "                                          1212312312873128932247";
	printf("Mine atoi: %i\nSystem's atoi: %i\n", ft_atoi(s), atoi(s));
}*/
