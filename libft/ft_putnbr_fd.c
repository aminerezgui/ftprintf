/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arezgui <arezgui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 21:35:47 by arezgui           #+#    #+#             */
/*   Updated: 2022/01/13 21:40:26 by arezgui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static int	ft_isnumeral(int nbr)
{
	if (nbr >= 0 && nbr <= 9)
		return (1);
	else
		return (0);
}

static void	ft_putnumeral(int nbr, int fd)
{
	if (ft_isnumeral(nbr))
	{
		ft_putchar_fd(nbr + '0', fd);
	}
	else
		return ;
}

void	ft_putnbr_fd(int nbr, int fd)
{
	if (nbr == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-nbr, fd);
	}
	else if (ft_isnumeral(nbr))
	{
		ft_putnumeral(nbr, fd);
	}
	else
	{
		ft_putnbr_fd(nbr / 10, fd);
		ft_putnbr_fd(nbr % 10, fd);
	}
}
