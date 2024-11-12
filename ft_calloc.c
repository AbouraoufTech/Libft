/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabourao <eabourao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:18:46 by eabourao          #+#    #+#             */
/*   Updated: 2024/11/01 14:04:07 by eabourao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	if (size && count && (count * size) / size != count)
		return (NULL);
	p = malloc(size * count);
	if (p == NULL)
		return (NULL);
	ft_memset (p, '\0', size * count);
	return (p);
}
