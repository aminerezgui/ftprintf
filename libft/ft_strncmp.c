/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arezgui <arezgui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 22:59:21 by arezgui           #+#    #+#             */
/*   Updated: 2022/01/24 19:55:11 by arezgui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp( const char *first, const char *second, size_t length)
{
	size_t	i;
	size_t	first_len;
	size_t	second_len;

	i = 0;
	first_len = ft_strlen(first);
	second_len = ft_strlen(second);
	while (i < length && i < first_len && i < second_len)
	{
		if (first[i] != second[i])
			return ((unsigned char)first[i] - (unsigned char)second[i]);
		i = i + 1;
	}
	if (i < length)
		return ((unsigned char)first[i] - (unsigned char)second[i]);
	return (0);
}
