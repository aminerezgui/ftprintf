/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arezgui <arezgui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 20:55:03 by arezgui           #+#    #+#             */
/*   Updated: 2022/01/24 19:55:11 by arezgui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	int_to_digit(int nbr)
{
	if (nbr >= 0 && nbr <= 9)
		return (nbr + 48);
	else
		return (0);
}

static size_t	char_number(int n)
{
	size_t	char_number;

	char_number = 0;
	if (!n)
		return (1);
	if (n < 0)
		char_number++;
	while (n)
	{
		n = n / 10;
		char_number++;
	}
	return (char_number);
}

char	*ft_itoa(int n)
{
	int		byte_number;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	byte_number = char_number(n);
	str = malloc(byte_number + 1);
	if (!str)
		return ((char *)0);
	str[byte_number] = '\0';
	byte_number--;
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n)
	{
		str[byte_number] = int_to_digit(n % 10);
		byte_number--;
		n = n / 10;
	}
	return (str);
}
