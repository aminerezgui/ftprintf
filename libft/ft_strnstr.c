/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arezgui <arezgui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 22:28:15 by arezgui           #+#    #+#             */
/*   Updated: 2022/01/24 19:55:11 by arezgui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;
	size_t	big_len;
	size_t	k;

	i = 0;
	little_len = ft_strlen(little);
	big_len = ft_strlen(big);
	if (little_len == 0)
		return ((char *)big);
	if (len == 0)
		return ((char *) 0);
	while (i < big_len && i < len)
	{
		k = 0;
		if (big[i] == little[k])
		{
			while (k < little_len && big[i + k] == little[k])
				k = k + 1;
			if (k == little_len && i + k - 1 < len)
				return ((char *)big + i);
		}
		i = i + 1;
	}
	return ((char *) 0);
}
