/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <hescoval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 01:21:12 by hescoval          #+#    #+#             */
/*   Updated: 2023/07/30 15:29:05 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	printable;

	printable = 1;
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'z'))
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
	char	testString[] = "1312313213";
	char	testString2[] = "";
	char	testString3[] = "!@#!@$^^SADSAD";

	printf("%i \n", ft_str_is_lowercase(testString));
	printf("%i \n", ft_str_is_lowercase(testString2));
	printf("%i \n", ft_str_is_lowercase(testString3));
}
*/