/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 04:35:46 by hescoval          #+#    #+#             */
/*   Updated: 2023/08/06 05:19:27 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printargs(char **argv, int argc)
{
	int	index;
	int	j;

	index = 1;
	while (index < argc)
	{
		j = 0;
		while (argv[index][j])
		{
			write(1, &argv[index][j], 1);
			j++;
		}
		write(1, "\n", 1);
		index++;
	}
}

void	ft_swap(char **a, char **b)
{
	char	*temporary;

	temporary = *a;
	*a = *b;
	*b = temporary;
}

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

int	main(int argc, char **argv)
{
	int	index;
	int	j;

	index = 1;
	if (argc > 1)
	{
		while (index < argc - 1)
		{
			j = index + 1;
			while (j < argc)
			{
				if (ft_strcmp(argv[index], argv[j]) > 0)
				{
					ft_swap(&argv[index], &argv[j]);
				}
				j++;
			}
			index++;
		}
	}
	printargs(argv, argc);
}
