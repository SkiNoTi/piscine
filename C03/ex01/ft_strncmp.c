/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:53:47 by engoncal          #+#    #+#             */
/*   Updated: 2023/08/29 13:08:55 by engoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int nb;
	nb = 1;
	while(*s1++, *s2++)
	{
		if(*s1 == '\0' && *s2 == '\0' || nb == n-1)
			return 0;
		nb++;
	}
	return (*--s1 - *--s2);
}#include <stdio.h>
#include <string.h>
#include <unistd.h>


int     ft_strncmp(char *s1, char *s2, unsigned int n)
{
        int nb;
        nb = 1;
        while(*s1++ == *s2++)
        {
                if(nb == n || (*s1 == '\0' && *s2 == '\0'))
                return 0;
        }
        return (*--s1 - *--s2);

}


/*int	main(void)
{
	char s1[] = "Test1";
	char s2[] = "OK";
	char s3[] = "Same";
	char s4[] = "Size";
	char s5[] = "Shorter";
	char s6[] = "ThanMyself";
	char s7[] = "ShorterTest";

	printf("%d, %d\n", ft_strncmp(s1, s2, 4), strncmp(s1, s2, 4));
	printf("%d, %d\n", ft_strncmp(s1, s2, 2), strncmp(s1, s2, 2));
	printf("%d, %d\n", ft_strncmp(s3, s4, 4), strncmp(s3, s4, 4));
	printf("%d, %d\n", ft_strncmp(s3, s4, 1), strncmp(s3, s4, 1));
	printf("%d, %d\n", ft_strncmp(s5, s6, 3), strncmp(s5, s6, 3));
	printf("%d, %d\n", ft_strncmp(s5, s5, 10), strncmp(s5, s5, 10));
	printf("%d, %d\n", ft_strncmp(s5, s5, 5), strncmp(s5, s5, 5));
	printf("%d, %d\n", ft_strncmp(s5, s7, 7), strncmp(s5, s7, 7));
	printf("%d, %d\n", ft_strncmp(s5, s7, 8), strncmp(s5, s7, 8));
/*}
