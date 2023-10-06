/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <hescoval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 11:51:36 by hescoval          #+#    #+#             */
/*   Updated: 2023/07/30 15:30:23 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	printable;

	printable = 1;
	while (*str)
	{
		if ((*str >= 32 && *str <= 127))
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
	char testString[] = "!@#!@$#@%  !";
	char testString2[] = "";
	char testString3[] = "'\n'";

	printf("%i \n", ft_str_is_printable(testString));
	
	printf("%i \n", ft_str_is_printable(testString2));

	printf("%i \n", ft_str_is_printable(testString3));
}*/