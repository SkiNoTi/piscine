/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 18:17:46 by engoncal          #+#    #+#             */
/*   Updated: 2023/08/30 09:52:35 by engoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_swap(int *a, int *b)
{
        int     stock;

        stock = *a;
        *a = *b;
        *b = stock;
}

/*int		main(void)
{
	int a = 3;
	int b = 18;
	ft_swap(&a, &b);
	if (b == 3 && a == 18)
	{
		write(1, "OK\n", 3);
	}
	else
	{
		write(1, "FAIL\n", 5);
	}
}*/
