/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabourao <eabourao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:41:40 by eabourao          #+#    #+#             */
/*   Updated: 2024/11/01 14:42:41 by eabourao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*ss1;

	ss1 = malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (ss1 == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		ss1[i] = s1[i];
		i++;
	}
	ss1[i] = '\0';
	return (ss1);
}
