/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arezgui <arezgui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 15:04:38 by arezgui           #+#    #+#             */
/*   Updated: 2022/01/24 19:55:11 by arezgui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digit_to_int(char c)
{
	if (c >= 48 && c <= 57)
		return (c - 48);
	else
	{
		return (0);
	}
}

static int	ft_is_blank(char c)
{
	if (c == '\t' || c == '\v' || c == '\f'
		|| c == '\r' || c == '\n' || c == ' ')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	size_t	i;
	int		result;
	int		coeff;

	i = 0;
	result = 0;
	coeff = 1;
	while (str[i] != '\0')
	{
		if (!(ft_isdigit(str[i]) || str[i] == '-'
				|| ft_is_blank(str[i]) || str[i] == '+'))
			return (result);
		if (ft_isdigit(str[i]) || str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				coeff = -1;
			if (str[i] == '-' || str[i] == '+')
				i++;
			while (ft_isdigit(str[i]))
				result = result * 10 + ft_digit_to_int(str[i++]);
			return (coeff * result);
		}
		i = i + 1;
	}
	return (result);
}
