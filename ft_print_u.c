/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arezgui <arezgui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 19:41:25 by arezgui           #+#    #+#             */
/*   Updated: 2022/02/25 19:41:49 by arezgui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_u(unsigned int nbr)
{
	char	*str;
	int		len_written;

	str = ft_itoa_base_positive(nbr, 10, 0);
	len_written = ft_print_str(str);
	free(str);
	return (len_written);
}
