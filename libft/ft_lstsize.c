/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arezgui <arezgui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 19:04:36 by arezgui           #+#    #+#             */
/*   Updated: 2022/02/11 19:04:46 by arezgui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*current_node;
	int		lst_len;

	current_node = lst;
	lst_len = 0;
	if (!current_node)
		return (lst_len);
	while (current_node->next)
	{
		lst_len++;
		current_node = current_node->next;
	}
	lst_len++;
	return (lst_len);
}
