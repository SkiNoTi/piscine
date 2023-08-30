/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str__is_numeric.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 10:31:03 by engoncal          #+#    #+#             */
/*   Updated: 2023/08/28 18:39:03 by engoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
int i = 0;

while (str[i] != '\0') 
{
if ((65 <= str[i] && str[i] <= 90) || (97 <= str[i] && str[i] <= 122))
		{
		i++;
		}
		else
		{
		return 0;
		}
	}
	return 1; // Si tous les caractères sont alphabétiques, retourne 1
}

}
