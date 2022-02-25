/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arezgui <arezgui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 20:52:01 by arezgui           #+#    #+#             */
/*   Updated: 2022/01/13 20:52:51 by arezgui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int character)
{
	if (character >= 48 && character <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}