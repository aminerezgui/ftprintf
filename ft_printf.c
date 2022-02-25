/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arezgui <arezgui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 19:42:09 by arezgui           #+#    #+#             */
/*   Updated: 2022/02/25 19:43:42 by arezgui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_tag_handler(const char *format, size_t i, va_list ap)
{
	int	len_written;

	len_written = 0;
	if (format[i + 1] == 'c')
		len_written = ft_print_char(va_arg(ap, int));
	if (format[i + 1] == 's')
		len_written = ft_print_str(va_arg(ap, char *));
	if (format[i + 1] == '%')
		len_written = ft_print_char('%');
	if (format[i + 1] == 'i' || format[i + 1] == 'd')
		len_written = ft_print_integer(va_arg(ap, int));
	if (format[i + 1] == 'x')
		len_written = ft_print_hexa(va_arg(ap, unsigned int), 0);
	if (format[i + 1] == 'X')
		len_written = ft_print_hexa(va_arg(ap, unsigned int), 1);
	if (format[i + 1] == 'u')
		len_written = ft_print_u(va_arg(ap, unsigned int));
	if (format[i + 1] == 'p')
		len_written = ft_print_ptr(va_arg(ap, void *));
	return (len_written);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	size_t	i;
	size_t	len_written;

	va_start(ap, format);
	i = 0;
	len_written = 0;
	while (format && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			len_written = len_written + print_tag_handler(format, i, ap);
			i = i + 2;
		}
		else
		{
			len_written = len_written + ft_print_char(format[i]);
			i++;
		}
	}
	va_end(ap);
	return (len_written);
}
