/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabourao <eabourao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:07:26 by eabourao          #+#    #+#             */
/*   Updated: 2024/11/02 11:40:23 by eabourao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*par;
	size_t			i;

	i = 0;
	par = (unsigned char *)b;
	while (i < len)
	{
		par[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
