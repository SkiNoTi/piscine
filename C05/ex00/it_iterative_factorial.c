/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   it_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 11:33:41 by engoncal          #+#    #+#             */
/*   Updated: 2023/08/31 12:22:05 by engoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_iterative_factorial(int nb)
{
    int i;
    int res;
    
    i = 1;
    res = 1;
    
    if (nb<0)
    {
        return 0;
    }
    else
    {
        while(i != nb+1)
        {
            res = res * i;
            i++;
        }
        return res;
    }
}

/*int	main(void)
{
	printf("0:%d\n", ft_iterative_factorial(-10));
	printf("0:%d\n", ft_iterative_factorial(-1));
	printf("1:%d\n", ft_iterative_factorial(0));
	printf("1:%d\n", ft_iterative_factorial(1));
	printf("3628800:%d\n", ft_iterative_factorial(10));
	printf("6:%d\n", ft_iterative_factorial(3));

}*/
