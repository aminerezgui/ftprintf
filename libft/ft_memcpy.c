/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arezgui <arezgui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 21:12:48 by arezgui           #+#    #+#             */
/*   Updated: 2022/01/24 19:55:11 by arezgui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dest_casted;
	const char	*src_casted;
	size_t		i;

	if ((dest == src) || n == 0)
		return (dest);
	if (!dest && !src)
		return (dest);
	dest_casted = dest;
	src_casted = src;
	i = 0;
	while (i < n)
	{
		dest_casted[i] = src_casted[i];
		i = i + 1;
	}
	return (dest);
}
