/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:42:03 by hescoval          #+#    #+#             */
/*   Updated: 2023/08/03 12:42:04 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_whitespace(char *str, int i)
{
	while ((str[i] >= 11 && str[i] <= 15) || str[i] == ' ')
	{
		i ++;
	}
	return (i);
}

int	check_index(char *str, int i)
{
	while (str[i] == '-' || str[i] == '+')
	{
		i ++;
	}
	return (i);
}

int	check_negative(char *str, int i)
{
	int	sign;

	sign = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	return (sign);
}

int	ft_atoi(char *str)
{
	int		i;
	int		sign;
	int		result;

	i = 0;
	result = 0;
	i = check_whitespace(str, i);
	sign = check_negative(str, i);
	i = check_index(str, i);
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	result *= sign;
	return (result);
}
/*
#include<stdio.h>
int	main(int argc, char **argv)
{
	int result = 0;

	if(argc == 2)
		result = ft_atoi(argv[1]);

	printf("%i", result);
}
*/