/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <hescoval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 00:38:10 by hescoval          #+#    #+#             */
/*   Updated: 2023/07/30 15:24:07 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	printable;

	printable = 1;
	while (*str)
	{
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
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
	char testString[] = "BananasArentCool";
	char testString2[] = "";
	char testString3[] = "2139213013021321038as";

	printf("%i \n", ft_str_is_alpha(testString));
	
	printf("%i \n", ft_str_is_alpha(testString2));

	printf("%i \n", ft_str_is_alpha(testString3));

}*/
