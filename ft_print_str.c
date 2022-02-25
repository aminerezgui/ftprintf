/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arezgui <arezgui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 19:40:36 by arezgui           #+#    #+#             */
/*   Updated: 2022/02/25 20:02:36 by arezgui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *str)
{
	int	len_written;

	len_written = 0;
	if (str == NULL)
	{
		ft_putstr_fd("(null)", 1);
		len_written = 6;
		return (len_written);
	}
	ft_putstr_fd(str, 1);
	len_written = ft_strlen(str);
	return (len_written);
}
