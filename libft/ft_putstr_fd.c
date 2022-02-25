/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arezgui <arezgui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 21:40:36 by arezgui           #+#    #+#             */
/*   Updated: 2022/01/13 21:41:21 by arezgui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	ft_putstr_fd(char const *string_pointer, int fd)
{
	int	index;

	index = 0;
	while (string_pointer && (string_pointer[index] != '\0'))
	{
		ft_putchar_fd(string_pointer[index], fd);
		index = index + 1;
	}
}
