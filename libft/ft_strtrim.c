/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arezgui <arezgui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 22:37:28 by arezgui           #+#    #+#             */
/*   Updated: 2022/01/24 21:18:50 by arezgui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_included(const char *set, char c)
{
	size_t	i;
	size_t	set_len;

	i = 0;
	set_len = ft_strlen(set);
	while (i < set_len)
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

static int	not_match_first_index(char const *s1, const char *set)
{
	size_t		i;
	size_t		s1_len;

	i = 0;
	s1_len = ft_strlen(s1);
	while (i < s1_len)
	{
		if (!is_included(set, s1[i]))
			return (i);
		i = i + 1;
	}
	return (-1);
}

static int	not_match_last_index(char const *s1, const char *set)
{
	size_t	s1_len;
	int		i;

	s1_len = ft_strlen(s1);
	i = s1_len - 1;
	while (i > -1)
	{
		if (!is_included(set, s1[i]))
			return (i);
		i = i - 1;
	}
	return (-1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	first_index_not_matched;
	int	last_index_not_matched;

	first_index_not_matched = not_match_first_index(s1, set);
	last_index_not_matched = not_match_last_index(s1, set);
	if (first_index_not_matched == -1)
		return (ft_substr(s1, 0, 0));
	else
		return (ft_substr(s1, first_index_not_matched,
				last_index_not_matched - first_index_not_matched + 1));
}
