/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_positive.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arezgui <arezgui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 19:33:07 by arezgui           #+#    #+#             */
/*   Updated: 2022/02/25 20:02:11 by arezgui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	i_digit_to_a(unsigned int nbr, unsigned char is_hexa_uppercase)
{
	if (nbr >= 0 && nbr <= 9)
		return (nbr + 48);
	else if (nbr >= 10 && nbr <= 15)
	{
		if (is_hexa_uppercase)
		{
			return (nbr + 55);
		}
		else
		{
			return (nbr + 87);
		}
	}
	else
		return (0);
}

static size_t	char_number(unsigned int n, unsigned int base)
{
	size_t	char_number;

	char_number = 0;
	if (!n)
		return (1);
	while (n)
	{
		n = n / base;
		char_number++;
	}
	return (char_number);
}

char	*ft_itoa_base_positive(unsigned int n, unsigned int base,
			unsigned char is_hexa_uppercase)
{
	size_t		byte_number;
	char		*str;

	byte_number = char_number(n, base);
	str = malloc(byte_number + 1);
	if (!str)
		return ((char *)0);
	str[byte_number] = '\0';
	byte_number--;
	if (n == 0)
		str[0] = '0';
	while (n)
	{
		str[byte_number] = i_digit_to_a(n % base, is_hexa_uppercase);
		byte_number--;
		n = n / base;
	}
	return (str);
}
