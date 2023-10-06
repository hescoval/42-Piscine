/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 18:19:40 by hescoval          #+#    #+#             */
/*   Updated: 2023/08/01 00:46:55 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	diff;

	i = 0;
	diff = 0;
	while ((s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			diff = (s1[i] - s2[i]);
			break ;
		}
		i++;
	}
	return (diff);
}
/*
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	result;
	int	result2;

	if(argc == 3)
	{
		result = ft_strcmp(argv[1], argv[2]);
		result2 = strcmp(argv[1], argv[2]);
		printf("%i \n", result);
		printf("%i", result2);
	}
	else
		write(1, "\n", 1);
}
*/
