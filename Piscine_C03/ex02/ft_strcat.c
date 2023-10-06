/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 18:46:19 by hescoval          #+#    #+#             */
/*   Updated: 2023/07/30 18:46:20 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	length(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	return (size);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_size;

	dest_size = (length(dest));
	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	main(void)
{
	char	test_string1[] = "bababa";
	char	test_string2[] = "acacac";

	printf("%s", ft_strcat(test_string2, test_string1));
	//printf("%s", strcat(test_string2, test_string1));
}
*/