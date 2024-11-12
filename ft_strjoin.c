/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabourao <eabourao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:49:53 by eabourao          #+#    #+#             */
/*   Updated: 2024/10/31 19:43:09 by eabourao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		l1;
	int		l2;
	char	*dest;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	dest = malloc(sizeof(char) * (l1 + l2) + 1);
	if (!dest)
		return (NULL);
	while (i < l1 + l2)
	{
		if (i < l1)
			*dest++ = *s1++;
		else
			*dest++ = *s2++;
		i++;
	}
	*dest = '\0';
	return (dest - i);
}
