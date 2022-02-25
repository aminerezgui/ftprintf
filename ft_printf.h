/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arezgui <arezgui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 19:47:11 by arezgui           #+#    #+#             */
/*   Updated: 2022/02/25 19:59:23 by arezgui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

# include "./libft/libft.h"

int		ft_printf(const char *format, ...);

int		ft_print_char(char c);
int		ft_print_str(char *str);
int		ft_print_integer(int nbr);

char	*ft_itoa_base_positive(unsigned int n, unsigned int base,
			unsigned char is_hexa_uppercase);

int		ft_print_hexa(unsigned int nbr, unsigned char is_uppercase);
int		ft_print_u(unsigned int nbr);

int		ft_print_ptr(void *ptr);

#endif
