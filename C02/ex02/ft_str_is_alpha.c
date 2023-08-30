/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 10:22:18 by engoncal          #+#    #+#             */
/*   Updated: 2023/08/28 10:25:39 by engoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_alpha(char *str)
{
int i = 0; // Variable pour parcourir les caractères de la chaîne

while (str[i] != '\0') { // Parcourt la chaîne jusqu'à atteindre le caractère nul ('\0')
if ((65 <= str[i] && str[i] <= 90) || (97 <= str[i] && str[i] <= 122))
		{
		// Vérifie si le caractère est une lettre majuscule (entre 'A' et 'Z') ou minuscule (entre 'a' et 'z')
		i++; // Passe au caractère suivant si c'est une lettre alphabétique
		}
		else
		{
		return 0; // Si un caractère non alphabétique est trouvé, retourne 0
		}
	}
	return 1; // Si tous les caractères sont alphabétiques, retourne 1
}
