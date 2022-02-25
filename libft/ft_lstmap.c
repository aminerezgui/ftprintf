/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arezgui <arezgui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 19:30:15 by arezgui           #+#    #+#             */
/*   Updated: 2022/02/11 19:40:58 by arezgui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*add_new_node(t_list **new_list, t_list *current_node,
					void *(*f)(void *), void (*del)(void *))
{
	t_list	*current_new_node;

	current_new_node = ft_lstnew(f(current_node->content));
	if (!current_new_node)
		return (NULL);
	if (current_node->content != current_new_node->content)
		del(current_node->content);
	ft_lstadd_back(new_list, current_new_node);
	return (current_new_node);
}

static void	*free_new_list(t_list **new_list, void (*del)(void *))
{
	ft_lstclear(new_list, del);
	free(new_list);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current_node;
	t_list	*current_new_node;
	t_list	**new_list;

	new_list = (t_list **) malloc(1 * sizeof(t_list *));
	if (!new_list)
		return (NULL);
	*new_list = (NULL);
	current_node = lst;
	if (!current_node)
		return (NULL);
	while (current_node->next)
	{
		current_new_node = add_new_node(new_list, current_node, f, del);
		if (!current_new_node)
			return (free_new_list(new_list, del));
		current_node = current_node->next;
	}
	current_new_node = add_new_node(new_list, current_node, f, del);
	if (!current_new_node)
		return (free_new_list(new_list, del));
	current_new_node = *new_list;
	free(new_list);
	return (current_new_node);
}
