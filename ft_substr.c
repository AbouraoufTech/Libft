/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabourao <eabourao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:57:04 by eabourao          #+#    #+#             */
/*   Updated: 2024/10/29 21:17:57 by eabourao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t				i;
	size_t				lenght;
	char				*sub;

	if (!s)
		return (NULL);
	lenght = ft_strlen(s);
	if (start >= lenght)
		return (ft_strdup(""));
	if (lenght - start < len)
		i = lenght - start;
	else
		i = len;
	sub = (char *)malloc (sizeof(char) * i + 1);
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, i + 1);
	return (sub);
}
