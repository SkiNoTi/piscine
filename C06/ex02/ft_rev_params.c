/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:39:38 by engoncal          #+#    #+#             */
/*   Updated: 2023/09/05 15:09:06 by engoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int 	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	int i;
	int stop;
	
	i = argc-1;
	while(i > 0)
	{
		write(1, argv[i], ft_strlen(argv[i]));
		i--;
	}

}
