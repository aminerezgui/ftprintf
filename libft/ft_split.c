/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arezgui <arezgui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 21:45:21 by arezgui           #+#    #+#             */
/*   Updated: 2022/01/24 19:55:11 by arezgui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	number_of_words(char const *s, char c)
{
	size_t	count;
	size_t	i;
	size_t	s_len;

	i = 0;
	count = 0;
	s_len = ft_strlen(s);
	while (i < s_len)
	{
		if (s && s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			count++;
		}
		i++;
	}
	return (count);
}

static size_t	len_of_word(char const *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (s && s[i] != c && s[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}

static void	*free_array_of_str(char **array_of_str)
{
	size_t	i;

	i = 0;
	while (array_of_str[i])
	{
		free(array_of_str[i]);
		i++;
	}
	free(array_of_str);
	return (NULL);
}

static int	is_a_word(const char *s, char c, size_t i)
{
	if ((s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
		|| (i == 0 && s[i] != c))
		return (1);
	else
		return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**array_of_str;
	size_t	j;

	i = 0;
	array_of_str = ft_calloc(number_of_words(s, c) + 1, sizeof (char *));
	j = 0;
	if (!array_of_str)
		return ((char **)0);
	while (s && s[i] != '\0')
	{
		if (is_a_word(s, c, i))
		{
			if ((s[i] == c && s[i + 1] != c && s[i + 1] != '\0'))
				i++;
			array_of_str[j] = ft_substr(s, i, len_of_word(s + i, c));
			if (!array_of_str[j])
				return (free_array_of_str(array_of_str));
			j++;
		}
		i++;
	}
	array_of_str[j] = (char *)0;
	return (array_of_str);
}
