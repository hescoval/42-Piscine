/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 11:37:02 by hescoval          #+#    #+#             */
/*   Updated: 2023/08/09 18:53:41 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;

	i = min;
	j = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *) malloc ((max - min) * sizeof(int));
	if (*range == NULL)
		return (-1);
	while (i < max)
	{
		range[0][j] = i;
		j++;
		i++;
	}
	return (max - min);
}
/*
int	main(int ac, char **av)
{
	if (ac == 3)
	{
		int i = 0;
		int random = atoi(av[1]);
		int random2 = atoi(av[2]);
		int *bigrange;

		int x = ft_ultimate_range(&bigrange, random, random2);
		printf("%i\n", x);

		while(random < random2)
		{
			printf("[%i]", bigrange[i]);
			random++;
			i++;
		}
	}
	return(0);
}
*/