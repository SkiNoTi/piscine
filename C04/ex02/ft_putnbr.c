/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:26:48 by engoncal          #+#    #+#             */
/*   Updated: 2023/08/29 14:27:09 by engoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>  
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);

void ft_putnbr(int nb)
{
    if (nb < 0)
    {
        ft_putchar('-');  
        nb = -nb;         

    if (nb >= 10)
    {
        ft_putnbr(nb / 10);  // Appel recursif aui affiche les chiffres restants
    }

    ft_putchar(nb % 10 + '0');
}

/*int		main(void)
{
	ft_putnbr(42);
	printf("\n");
	ft_putnbr(-42);
	printf("\n");
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(2147483647);
	printf("\n");
}*/
