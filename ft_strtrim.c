/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabourao <eabourao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:27:54 by eabourao          #+#    #+#             */
/*   Updated: 2024/11/02 22:00:11 by eabourao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	int		s;
	int		e;
	int		t;

	if (!s1 || !set)
		return (NULL);
	s = 0;
	e = ft_strlen(s1) - 1;
	while (s1[s] && ft_strchr(set, s1[s]))
		s++;
	while (e >= 0 && ft_strchr(set, s1[e]))
		e--;
	if (s >= e)
		return (ft_strdup(""));
	e++;
	t = e - s;
	dest = (char *)malloc(sizeof(char) * t + 1);
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, s1 + s, t + 1);
	return (dest);
}
