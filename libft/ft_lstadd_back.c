/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arezgui <arezgui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 19:21:35 by arezgui           #+#    #+#             */
/*   Updated: 2022/02/11 19:21:58 by arezgui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current_list;

	if (!lst)
		return ;
	current_list = *lst;
	if (!current_list)
		*lst = new;
	else
	{
		while (current_list->next)
			current_list = current_list->next;
		current_list->next = new;
	}
}
