/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arezgui <arezgui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 22:10:29 by arezgui           #+#    #+#             */
/*   Updated: 2022/01/24 19:55:11 by arezgui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dst_size)
{
	size_t		dst_len;
	size_t		src_len;
	size_t		i;
	size_t		j;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = dst_len;
	j = 0;
	if (dst_len >= dst_size)
		return (dst_size + src_len);
	if (dst_size == 0)
	{
		dst[0] = '\0';
		return (src_len);
	}
	while (i < dst_size - 1 && j < src_len)
	{
		dst[i] = src[j];
		i = i + 1;
		j = j + 1;
	}
	dst[dst_len + j] = '\0';
	return (dst_len + src_len);
}
