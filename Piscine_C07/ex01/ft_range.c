/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 11:37:09 by hescoval          #+#    #+#             */
/*   Updated: 2023/08/09 18:53:33 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;
	int	j;

	i = min;
	j = 0;
	if (min >= max)
	{
		return (NULL);
	}
	array = (int *) malloc((max - min) * sizeof(int));
	while (min < max)
	{
		array[j] = min;
		j++;
		min++;
	}
	return (array);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	if (ac == 3)
	{
		int i = 0;
		int random = atoi(av[1]);
		int random2 = atoi(av[2]);

		int *ptr = ft_range(atoi(av[1]), atoi(av[2]));

		while(random < random2)
		{
			printf("[%i]", ptr[i]);
			random++;
			i++;
		}
	}
	return(0);
}
*/