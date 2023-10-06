/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 18:46:07 by hescoval          #+#    #+#             */
/*   Updated: 2023/07/30 18:46:11 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	diff;

	i = 0;
	diff = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
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

	if(argc == 4)
	{
		result = ft_strncmp(argv[1], argv[2], atoi(argv[3]));
		result2 = strncmp(argv[1], argv[2], atoi(argv[3]));
		printf("%i \n", result);
		printf("%i", result2);
	}
	else
		write(1, "\n", 1);
}
*/