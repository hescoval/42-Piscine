/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 00:55:13 by hescoval          #+#    #+#             */
/*   Updated: 2023/07/27 08:01:14 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	printable;

	printable = 1;
	while (*str)
	{
		if ((*str >= '0' && *str <= '9'))
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
	char testString[] = "asdasdadasd";
	char testString2[] = "";
	char testString3[] = "asASDASDDas";

	printf("%i \n", ft_str_is_numeric(testString));
	
	printf("%i \n", ft_str_is_numeric(testString2));

	printf("%i \n", ft_str_is_numeric(testString3));
}*/
