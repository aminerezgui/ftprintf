/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arezgui <arezgui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 22:14:21 by arezgui           #+#    #+#             */
/*   Updated: 2022/01/24 19:55:11 by arezgui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *destination, const char *source, size_t size)
{
	size_t	source_length;
	size_t	i;

	source_length = ft_strlen(source);
	i = 0;
	if (!destination || !source)
		return (0);
	if (!size)
		return (source_length);
	while (i < size - 1 && i < source_length)
	{
		destination[i] = source[i];
		i = i + 1;
	}
	if (size <= source_length)
		destination[size - 1] = '\0';
	else
		destination[source_length] = '\0';
	return (source_length);
}
