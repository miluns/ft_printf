/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstawski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 13:18:01 by mstawski          #+#    #+#             */
/*   Updated: 2025/01/03 22:36:21 by mstawski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

static int	count_dig(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*ascii_value;
	int		digits;

	if (n == 0)
		return (ft_strdup("0"));
	digits = count_dig(n);
	ascii_value = malloc(sizeof(char) * (digits + 1));
	if (!ascii_value)
		return (NULL);
	if (n < 0)
		*ascii_value = '-';
	ascii_value[digits] = '\0';
	while (n)
	{
		ascii_value[--digits] = ft_abs(n % 10) + '0';
		n /= 10;
	}
	return (ascii_value);
}

/*int	main(void)
{
	printf("%s\n", ft_itoa(-123));
}*/
