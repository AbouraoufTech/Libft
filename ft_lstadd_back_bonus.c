/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabourao <eabourao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:21:25 by eabourao          #+#    #+#             */
/*   Updated: 2024/10/31 19:26:26 by eabourao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*curr;

	curr = (*lst);
	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	while (curr && curr->next != NULL)
		curr = curr->next;
	curr->next = new;
}
