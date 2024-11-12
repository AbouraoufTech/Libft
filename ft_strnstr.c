/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabourao <eabourao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:25:16 by eabourao          #+#    #+#             */
/*   Updated: 2024/10/31 13:27:52 by eabourao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	c;
	size_t	l;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	c = 0;
	while (i < len && haystack[i])
	{
		l = i;
		c = 0;
		while (haystack[l] == needle[c] && needle[c] && l < len)
		{
			c++;
			l++;
		}
		if (needle[c] == '\0')
			return ((char *)haystack + i);
		c = 0;
		i++;
	}
	return (NULL);
}
