/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arezgui <arezgui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 20:35:22 by arezgui           #+#    #+#             */
/*   Updated: 2022/01/24 19:55:11 by arezgui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t element_count, size_t element_size)
{
	unsigned char	*ptr;
	size_t			bytes_to_allocate;
	size_t			i;

	bytes_to_allocate = element_count * element_size;
	ptr = (unsigned char *) malloc(bytes_to_allocate);
	i = 0;
	if (!ptr)
		return ((void *)0);
	while (i < bytes_to_allocate)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}
