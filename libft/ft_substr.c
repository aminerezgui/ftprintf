/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arezgui <arezgui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 22:41:16 by arezgui           #+#    #+#             */
/*   Updated: 2022/01/24 19:55:11 by arezgui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*sub_str;
	size_t		s_len;
	size_t		i;
	size_t		k;
	size_t		max_substr_len;

	s_len = ft_strlen(s);
	i = start;
	k = 0;
	if (start > s_len - 1)
		return (ft_calloc(1, 1));
	max_substr_len = s_len - start;
	if (len > max_substr_len)
		sub_str = ft_calloc(max_substr_len + 1, 1);
	else
		sub_str = ft_calloc(len + 1, 1);
	if (!sub_str)
		return ((char *) 0);
	while (i < start + len && i < s_len)
	{
		sub_str[k] = s[i];
		i++;
		k++;
	}
	return (sub_str);
}
