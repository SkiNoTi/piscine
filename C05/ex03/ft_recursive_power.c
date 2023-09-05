/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 17:00:24 by engoncal          #+#    #+#             */
/*   Updated: 2023/09/03 17:06:56 by engoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if(power < 0)
		return 0;
	else if (power == 0 || power == 1)
		return 1;
	else
	{
		return power * ft_recursive_power(nb-1, power)
	}
}
