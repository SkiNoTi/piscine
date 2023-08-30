/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 10:06:08 by engoncal          #+#    #+#             */
/*   Updated: 2023/08/25 11:47:04 by engoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
char *premierdest = dest;
	while (*src != '\0') 
	{
		*dest = *src;
		dest++;
		src++;
	}
*dest = '\0'
return premierdest;
}
