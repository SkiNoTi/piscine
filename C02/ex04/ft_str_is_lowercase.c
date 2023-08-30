/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:31:49 by engoncal          #+#    #+#             */
/*   Updated: 2023/08/28 14:41:56 by engoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
int = 0 
	while (str[i]!= '\0')
	{
		if (97 <= str[i] && str[i] <= 122) // 97= 'a'
		{
			i++;
		}
		else
		{
			return 0; // la chaine contient un char autre
		}
	}
	return  1; // la chaine est totalememt fait de chiffre
}
