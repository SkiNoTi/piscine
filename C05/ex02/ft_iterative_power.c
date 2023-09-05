/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:19:45 by engoncal          #+#    #+#             */
/*   Updated: 2023/09/03 16:58:36 by engoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */#include <stdio.h>

int     ft_iterative_power(int nb, int power)
{
        int res;
        
        res = 1;
        if (power < 0)
        {
                return 0;
        }
        while (power > 0)
        {   
                res *= nb;
                power--;
        }
       
    return res;
}

/*int	main(void)
{
	printf("0:%d\n", ft_iterative_power(1, -10));
	printf("0:%d\n", ft_iterative_power(1, -1));
	printf("1:%d\n", ft_iterative_power(10, 0));
	printf("10:%d\n", ft_iterative_power(10, 1));
	printf("100:%d\n", ft_iterative_power(10, 2));
	printf("216:%d\n", ft_iterative_power(6, 3));
}*/
