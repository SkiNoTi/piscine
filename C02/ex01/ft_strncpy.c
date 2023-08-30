/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 11:36:32 by engoncal          #+#    #+#             */
/*   Updated: 2023/08/28 10:21:28 by engoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncpy(char *dest, const char *src, size_t n) 
{
	i = 0; // Variable pour parcourir les caractères de src

	// Copie les caractères de src vers dest tant que i < n et src[i] n'est pas '\0'
	while (i < n && src[i] != '\0') 
	{
	dest[i] = src[i]; // Copie le caractère de src vers dest
	i++; // Passe au prochain caractère
	}
}
