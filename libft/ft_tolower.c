/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arezgui <arezgui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 22:40:32 by arezgui           #+#    #+#             */
/*   Updated: 2022/01/13 22:41:07 by arezgui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int ch)
{
	if (ch >= 65 && ch <= 90)
	{
		return (ch + 32);
	}
	else
	{
		return (ch);
	}
}
