/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_PRINTF_putnbr_fd.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstawski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 12:12:46 by mstawski          #+#    #+#             */
/*   Updated: 2025/02/28 15:05:58 by mstawski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	count_digits(int n)
{
	int	i;

	if (n == 0)
		return (1);
	i = 0;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static int	ft_abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

static int	power(int n, int power)
{
	int	temp;

	if (power <= 0)
		return (1);
	temp = n;
	while (--power)
		n *= temp;
	return (n);
}

int	ft_printf_putnbr_fd(int n, int fd)
{
	char	ascii_value;
	int		digits;
	int		sign;
	int		print;

	if (n < 0)
		write(fd, "-", 1);
	digits = count_digits(n);
	sign = (n < 0);
	print = digits;
	while (digits)
	{
		ascii_value = n / power(10, --digits);
		n -= power(10, digits) * ascii_value;
		ascii_value = ft_abs(ascii_value) + '0';
		write(fd, &ascii_value, 1);
	}
	return (print + sign);
}

/*int	main(void)
{
	printf("%i\n%i\n", power(10, 3), count_digits(1234));	
	ft_putnbr_fd(1000, 1);
}*/
