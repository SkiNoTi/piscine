/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 13:26:32 by engoncal          #+#    #+#             */
/*   Updated: 2023/08/29 13:27:29 by engoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>


char *ft_strcat(char *dest, char *src)
{
    int nb;
    int TailleDest = strlen(dest);
    nb = 0;
    while (src[nb] != '\0')
    {
        dest[TailleDest+ nb] = src[nb];
        nb++;
    }
    dest[TailleDest + nb] = '\0';
}


/*int	main(void)
{
	char s1a[10] = "Test1";
	char s2a[] = "OK";
	char s1b[10] = "Test1";
	char s2b[] = "OK";
	char s3a[10] = "Same";
	char s4a[] = "Size";
	char s3b[10] = "Same";
	char s4b[] = "Size";
	char s5a[20] = "Shorter";
	char s6a[] = "ThanMyself";
	char s5b[20] = "Shorter";
	char s6b[] = "ThanMyself";

	printf("%s:%s\n", ft_strcat(s1a, s2a), strcat(s1b, s2b));
	printf("%s\n", strcmp(s1a, s1b) == 0 && strcmp(s2a, s2b) == 0 ? "Success" : "Fail");
	printf("%s:%s\n", ft_strcat(s3a, s4a), strcat(s3b, s4b));
	printf("%s\n", strcmp(s3a, s3b) == 0 && strcmp(s4a, s4b) == 0 ? "Success" : "Fail");
	printf("%s:%s\n", ft_strcat(s5a, s6a), strcat(s5b, s6b));
	printf("%s\n", strcmp(s5a, s5b) == 0 && strcmp(s6a, s6b) == 0 ? "Success" : "Fail");
}
*/
