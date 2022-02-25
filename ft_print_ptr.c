/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arezgui <arezgui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 19:39:10 by arezgui           #+#    #+#             */
/*   Updated: 2022/03/04 16:03:59 by arezgui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	i_digit_to_a(unsigned long long nbr)
{
	if (nbr >= 0 && nbr <= 9)
		return (nbr + 48);
	else if (nbr >= 10 && nbr <= 15)
	{
		return (nbr + 87);
	}
	else
		return (0);
}

static size_t	char_number(unsigned long long n)
{
	size_t	char_number;

	char_number = 0;
	if (!n)
		return (1);
	while (n)
	{
		n = n / 16;
		char_number++;
	}
	return (char_number);
}

static char	*ft_itoa_hexa_positive_long(unsigned long long n)
{
	size_t		byte_number;
	char		*str;

	byte_number = char_number(n);
	str = malloc(byte_number + 1);
	if (!str)
		return ((char *)0);
	str[byte_number] = '\0';
	byte_number--;
	if (n == 0)
		str[0] = '0';
	while (n)
	{
		str[byte_number] = i_digit_to_a(n % 16);
		byte_number--;
		n = n / 16;
	}
	return (str);
}

int	ft_print_ptr(void *ptr)
{
	char	*str;
	int		len_written;
	char	*str_joined;

	str = ft_itoa_hexa_positive_long((unsigned long long)ptr);
	str_joined = ft_strjoin("0x", str);
	len_written = ft_print_str(str_joined);
	free(str);
	free(str_joined);
	return (len_written);
}
