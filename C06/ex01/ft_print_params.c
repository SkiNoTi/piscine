/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:49:32 by engoncal          #+#    #+#             */
/*   Updated: 2023/09/05 14:33:46 by engoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return i;
}

int	main(int argc, char **argv)
{
	int i;

	i = 1;
	while(i != argc)
	{
		write(1, argv[i],ft_strlen(argv[i]));
		i++;
	}
}
