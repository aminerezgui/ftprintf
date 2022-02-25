/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arezgui <arezgui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 19:35:24 by arezgui           #+#    #+#             */
/*   Updated: 2022/02/25 19:37:11 by arezgui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexa(unsigned int nbr, unsigned char is_uppercase)
{
	char	*str;
	int		len_written;

	str = ft_itoa_base_positive(nbr, 16, is_uppercase);
	len_written = ft_print_str(str);
	free(str);
	return (len_written);
}
