/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <hescoval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 12:34:48 by hescoval          #+#    #+#             */
/*   Updated: 2023/07/30 15:30:58 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*pointer;

	pointer = str;
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'z'))
		{
			*str -= 32;
		}
		str++;
	}
	return (pointer);
}
/*
#include <stdio.h>

int	main(void)
{
	char	testString[];
	char	testString2[];
	char	testString3[];

	testString[] = "!@#!%$xdxdxd";
	testString2[] = "WOOOOOOW";
	testString3[] = "watafak";
	printf("%s \n", ft_strupcase(testString));
	
	printf("%s \n", ft_strupcase(testString2));
	printf("%s \n", ft_strupcase(testString3));
}
*/