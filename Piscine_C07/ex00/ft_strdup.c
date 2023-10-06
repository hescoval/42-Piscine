/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 11:37:14 by hescoval          #+#    #+#             */
/*   Updated: 2023/08/09 18:53:26 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *) malloc(length(str) * sizeof(char) + 1);
	while (str[i])
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
#include<stdio.h>
int	main(void)
{
	char *test;
	test = ft_strdup("abcbada");
	printf("%s",test);
}
*/