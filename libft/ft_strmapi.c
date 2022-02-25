/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arezgui <arezgui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 22:18:33 by arezgui           #+#    #+#             */
/*   Updated: 2022/01/24 19:55:11 by arezgui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*s_new;
	unsigned int	s_new_len;

	i = 0;
	s_new = ft_strdup(s);
	if (!s_new || !f)
		return ((char *)0);
	s_new_len = ft_strlen(s_new);
	while (i < s_new_len)
	{
		s_new[i] = f(i, s_new[i]);
		i++;
	}
	return (s_new);
}
