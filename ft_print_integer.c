/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arezgui <arezgui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 19:37:20 by arezgui           #+#    #+#             */
/*   Updated: 2022/02/25 19:37:53 by arezgui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_integer(int nbr)
{
	char	*str;
	int		len_written;

	str = ft_itoa(nbr);
	len_written = ft_print_str(str);
	free(str);
	return (len_written);
}
