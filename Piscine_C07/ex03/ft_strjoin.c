/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 14:19:39 by hescoval          #+#    #+#             */
/*   Updated: 2023/08/09 18:53:46 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	catsep(char *str, int j, char *sep)
{
	int	x;

	x = 0;
	while (sep[x])
	{
		str[j] = sep[x];
		j++;
		x++;
	}
	return (j);
}

int	check_size(char **str, int size)
{
	unsigned int	i;
	int				j;
	unsigned int	x;

	j = 0;
	x = 0;
	while (j < size)
	{
		i = 0;
		while (str[j][i])
		{
			i++;
			x++;
		}
		j++;
	}
	return (x);
}

char	*make_string(char **strs, char *str, int size, char *sep)
{
	int		i;
	int		j;
	int		x;

	j = 0;
	i = 0;
	while (i < size)
	{
		x = 0;
		while (strs[i][x])
		{
			str[j] = strs[i][x];
			j++;
			x++;
		}
		if (i < size - 1)
		{
			j = catsep(str, j, sep);
		}
		i++;
	}
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		length;
	int		final_size;

	final_size = (check_size(strs, size));
	if (size == 0)
	{
		str = (char *) malloc (1);
		str[0] = '\0';
		return (str);
	}
	str = (char *) malloc (final_size + len(sep) * size + 1);
	str = make_string(strs, str, size, sep);
	length = len(str);
	str[length] = '\0';
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*strs[3];
	char 	*sep = "ABacdacdsavdbabdabaveavaevavawevawvawvawEV";
	int	size = 3;
	char *final;
	strs[0] = "1";
	strs[1] = "2";
	strs[2] = "3";


	final = ft_strjoin(size, strs, sep);

	printf("%s", final);
}
*/