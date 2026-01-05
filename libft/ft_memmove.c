/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstawski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:48:06 by mstawski          #+#    #+#             */
/*   Updated: 2025/01/03 21:04:48 by mstawski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dest_op;
	char	*src_op;

	if (!dest && !src)
		return (NULL);
	dest_op = (char *)dest;
	src_op = (char *)src;
	if (src_op < dest_op && dest_op < src_op + n)
	{
		dest_op += n - 1;
		src_op += n - 1;
		while (n--)
			*dest_op-- = *src_op--;
	}
	else
		while (n--)
			*dest_op++ = *src_op++;
	return (dest);
}

/*int	main(void)
{
	void	*dest[] = 
	const void *src;

	src = "nakleja";
	printf("%s\n", (char *)memmove(dest, src, 5));
}*/
