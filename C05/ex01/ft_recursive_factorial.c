/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:07:19 by engoncal          #+#    #+#             */
/*   Updated: 2023/09/03 16:18:30 by engoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	i;

	i = 0;
	if(nb<0)
		return 0;
	else if (nb == 0 || nb == 1)
		return 1;
	else
	{
		return nb * ft_recursive_factorial(nb-1);
	}
}

/*int	main(void)
{
	printf("0:%d\n", ft_recursive_factorial(-10));
	printf("0:%d\n", ft_recursive_factorial(-1));
	printf("1:%d\n", ft_recursive_factorial(0));
	printf("1:%d\n", ft_recursive_factorial(1));
	printf("3628800:%d\n", ft_recursive_factorial(10));
	printf("6:%d\n", ft_recursive_factorial(3));
}*/
