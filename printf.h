/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstawski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 15:48:49 by mstawski          #+#    #+#             */
/*   Updated: 2025/02/28 11:46:35 by mstawski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int	ft_printf(const char *text, ...);
int	ft_printf_c(char c);
int	ft_printf_i(int num);
int	ft_printf_p(size_t address);
int	ft_printf_s(char *string);
int	ft_printf_ui(unsigned int num);
int	ft_printf_low_x(size_t num);
int	ft_printf_up_x(unsigned int num);

#endif
