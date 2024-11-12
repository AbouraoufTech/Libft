/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabourao <eabourao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 20:02:56 by eabourao          #+#    #+#             */
/*   Updated: 2024/11/03 16:39:14 by eabourao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (dstsize == 0 && !dst)
		return (src_len);
	dest_len = ft_strlen(dst);
	if (dstsize <= dest_len)
		return (dstsize + src_len);
	i = 0;
	while (i < dstsize - dest_len - 1 && src[i])
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	dst[dest_len + i] = '\0';
	return (dest_len + src_len);
}
