/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabourao <eabourao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:42:40 by eabourao          #+#    #+#             */
/*   Updated: 2024/11/01 14:29:07 by eabourao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_num_len(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		i += 1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*dest;
	int		s;
	long	num;

	num = n;
	if (n == 0)
		return (ft_strdup("0"));
	s = ft_num_len(n) + 1;
	dest = (char *)malloc(sizeof(char) * s);
	if (!dest)
		return (NULL);
	s--;
	if (n < 0)
		num *= -1;
	dest[s--] = '\0';
	while (s > 0)
	{
		dest[s--] = (num % 10) + 48;
		num /= 10;
	}
	if (n < 0)
		dest[s] = '-';
	else
		dest[s] = (num % 10) + 48;
	return (dest);
}
