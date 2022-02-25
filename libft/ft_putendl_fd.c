/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arezgui <arezgui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 21:33:35 by arezgui           #+#    #+#             */
/*   Updated: 2022/01/13 21:34:00 by arezgui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	ft_putendl_fd(char const *string_pointer, int fd)
{
	ft_putstr_fd(string_pointer, fd);
	ft_putchar_fd('\n', fd);
}
