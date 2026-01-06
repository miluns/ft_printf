/* ************************************************************************** */
/*                                                        :::      ::::::::   */
/*   ft_printf_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstawski <marvin@42.fr>                    +#+  +:+       +#+        */
/*   Created: 2025/02/20 15:36:11 by mstawski          #+#    #+#             */
/*   Updated: 2025/02/27 16:03:51 by mstawski         ###   ########.fr       */
/*                                                                            */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"

int	ft_printf_c(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_printf_i(int num)
{
	return (ft_printf_putnbr_fd(num, 1));
}

int	ft_printf_p(size_t address)
{
	int	count;

	if (!address)
		return (ft_printf_s("(nil)"));
	count = ft_printf_s("0x");
	count += ft_printf_low_x(address);
	return (count);
}

int	ft_printf_s(char *string)
{
	if (!string)
		return (ft_printf_s("(null)"));
	ft_putstr_fd(string, 1);
	return (ft_strlen(string));
}

int	ft_printf_ui(unsigned int num)
{
	return (ft_printf_putunbr_fd(num, 1));
}

int	ft_printf_low_x(size_t num)
{
	char	*hex_num;
	int		temp;
	int		digits;
	int		print;

	digits = ft_printf_cxd(num);
	print = digits;
	hex_num = (char *)malloc(sizeof(char) * (digits + 1));
	if (!hex_num)
		return (ft_printf_s("(nil)"));
	hex_num[digits] = '\0';
	while (digits > 0)
	{
		temp = num % 16;
		if (temp < 10)
			hex_num[--digits] = temp + '0';
		else
			hex_num[--digits] = temp + 87;
		num /= 16;
	}
	ft_putstr_fd(hex_num, 1);
	free(hex_num);
	return (print);
}

int	ft_printf_up_x(unsigned int num)
{
	char	*hex_num;
	int		temp;
	int		digits;
	int		print;

	digits = ft_printf_cxd(num);
	print = digits;
	hex_num = (char *)malloc(sizeof(char) * (digits + 1));
	if (!hex_num)
		return (ft_printf_s("(nil)"));
	hex_num[digits] = '\0';
	while (digits)
	{
		temp = num % 16;
		if (temp < 10)
			hex_num[--digits] = temp + '0';
		else
			hex_num[--digits] = temp + 55;
		num /= 16;
	}
	ft_putstr_fd(hex_num, 1);
	free(hex_num);
	return (print);
}

int	ft_printf_cxd(size_t num)
{
	int	counter;

	counter = 0;
	if (!num)
		counter++;
	else
	{
		while (num)
		{
			num /= 16;
			counter++;
		}
	}
	return (counter);
}

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

int	ft_printf_putunbr_fd(unsigned int n, int fd)
{
	char	ascii_value;
	int		digits;
	int		print;

	digits = count_digits(n);
	print = digits;
	while (digits)
	{
		ascii_value = n / power(10, --digits);
		n -= power(10, digits) * ascii_value;
		ascii_value += '0';
		write(fd, &ascii_value, 1);
	}
	return (print);
}
