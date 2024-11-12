/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabourao <eabourao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:54:58 by eabourao          #+#    #+#             */
/*   Updated: 2024/10/28 15:25:33 by eabourao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*curr;

	if (!*lst || !del)
		return ;
	curr = *lst;
	while (*lst)
	{
		curr = *lst;
		*lst = (*lst)->next;
		del(curr->content);
		free(curr);
	}
}
