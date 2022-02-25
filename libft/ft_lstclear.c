/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arezgui <arezgui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 19:14:48 by arezgui           #+#    #+#             */
/*   Updated: 2022/02/11 19:16:16 by arezgui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current_node;
	t_list	*current_node_to_free;

	if (!lst)
		return ;
	current_node = *lst;
	if (!current_node)
		return ;
	while (current_node->next)
	{
		current_node_to_free = current_node;
		current_node = current_node->next;
		ft_lstdelone(current_node_to_free, del);
	}
	ft_lstdelone(current_node, del);
	*lst = NULL;
}
