/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 10:38:40 by engoncal          #+#    #+#             */
/*   Updated: 2023/09/05 14:37:16 by engoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
int ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return i;
}

int main(int argc, char **argv)
{
	write(1,argv[0],ft_strlen(argv[0]));
}
