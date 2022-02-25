/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arezgui <arezgui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 20:48:20 by arezgui           #+#    #+#             */
/*   Updated: 2022/01/13 20:50:32 by arezgui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int character)
{
	if ((character >= 65 && character <= 90)
		|| (character >= 97 && character <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
