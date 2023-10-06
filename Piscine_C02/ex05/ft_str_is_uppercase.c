/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <hescoval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 11:47:39 by hescoval          #+#    #+#             */
/*   Updated: 2023/07/30 15:30:01 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	printable;

	printable = 1;
	while (*str)
	{
		if ((*str >= 'A' && *str <= 'Z'))
		{
			printable = 1;
		}
		else
		{
			printable = 0;
			break ;
		}
		str++;
	}
	return (printable);
}
/*
#include <stdio.h>

int	main(void)
{
	char testString[] = "ASDASDASD";
	char testString2[] = "";
	char testString3[] = "!@#!@$^^SADSAD";

	printf("%i \n", ft_str_is_uppercase(testString));
	
	printf("%i \n", ft_str_is_uppercase(testString2));

	printf("%i \n", ft_str_is_uppercase(testString3));
}*/