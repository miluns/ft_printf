/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstawski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 17:03:09 by mstawski          #+#    #+#             */
/*   Updated: 2025/02/28 17:44:52 by mstawski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	format_specifier(char format, va_list args)
{
	int	ch_c;

	ch_c = 0;
	if (format == 'c')
		ch_c += ft_printf_c(va_arg(args, int));
	else if (format == 's')
		ch_c += ft_printf_s(va_arg(args, char *));
	else if (format == 'p')
		ch_c += ft_printf_p((size_t)va_arg(args, void *));
	else if (format == 'd')
		ch_c += ft_printf_i(va_arg(args, int));
	else if (format == 'i')
		ch_c += ft_printf_i(va_arg(args, int));
	else if (format == 'u')
		ch_c += ft_printf_ui(va_arg(args, unsigned int));
	else if (format == 'x')
		ch_c += ft_printf_low_x(va_arg(args, unsigned int));
	else if (format == 'X')
		ch_c += ft_printf_up_x(va_arg(args, unsigned int));
	else if (format == '%')
		ch_c += ft_printf_c('%');
	return (ch_c);
}

int	ft_printf(const char *text, ...)
{
	va_list	args;
	int		ch_c;

	ch_c = 0;
	va_start(args, text);
	while (*text != '\0')
	{
		if (*text == '%')
		{
			text++;
			if (ft_strchr ("cspdiuxX%", *text))
				ch_c += format_specifier(*text, args);
		}
		else
			ch_c += ft_printf_c(*text);
		text++;
	}
	va_end(args);
	return (ch_c);
}
