/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_PRINTF_cXd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstawski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 11:43:38 by mstawski          #+#    #+#             */
/*   Updated: 2025/02/28 11:47:07 by mstawski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

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
