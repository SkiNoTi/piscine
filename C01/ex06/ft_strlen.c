/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 09:32:03 by engoncal          #+#    #+#             */
/*   Updated: 2023/08/29 13:50:17 by engoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	nbcaractere;

	nbcaractere = 0;
	while (*str != '\0')
	{
		nbcaractere++;
		str++;
	}
	return nbcaractere;
}


/*int	main(void)
{
	char s1[] = "MyStr";
	char s2[] = "MyTest\nOfSuccess";
	char s3[] = "0123456789abcdef";
	char s4[] = "My\tStr";
	char s5[] = "";
	printf(ft_strlen(s1) == 5 ? "Success\n" : "Fail\n");
	printf(ft_strlen(s2) == 16 ? "Success\n" : "Fail\n");
	printf(ft_strlen(s3) == 16 ? "Success\n" : "Fail\n");
	printf(ft_strlen(s4) == 6 ? "Success\n" : "Fail\n");
	printf(ft_strlen(s5) == 0 ? "Success\n" : "Fail\n");
}*/
