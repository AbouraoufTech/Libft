/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabourao <eabourao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:31:57 by eabourao          #+#    #+#             */
/*   Updated: 2024/11/01 14:17:45 by eabourao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	const char	*source;

	if (!dst && !src)
		return (NULL);
	dest = (char *)dst;
	source = (const char *)src;
	if (dest > source && dest < source + len)
	{
		dest += len - 1;
		source += len - 1;
		while (len-- > 0)
			*dest-- = *source--;
	}
	else
	{
		while (len > 0)
		{
			*dest++ = *source++;
			len--;
		}
	}
	return (dst);
}
