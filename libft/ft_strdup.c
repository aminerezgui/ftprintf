/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arezgui <arezgui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 21:55:25 by arezgui           #+#    #+#             */
/*   Updated: 2022/01/24 19:55:11 by arezgui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *source)
{
	size_t	source_len;
	size_t	i;
	char	*source_copy;

	source_len = ft_strlen(source);
	i = 0;
	source_copy = malloc(source_len + 1);
	if (!source_copy)
		return ((char *)0);
	while (i < source_len)
	{
		source_copy[i] = source[i];
		i++;
	}
	source_copy[source_len] = '\0';
	return (source_copy);
}
