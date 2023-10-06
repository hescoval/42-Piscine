/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 20:47:25 by hescoval          #+#    #+#             */
/*   Updated: 2023/08/01 00:44:42 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	compare(const char *str, const char *needle, int index)
{
	int	j;

	j = 0;
	while (str[index] && needle[j])
	{
		if (str[index] != needle[j])
		{
			return (0);
		}
		index++;
		j++;
	}
	if (str[index] == '\0' && needle[j] != '\0')
		return (0);
	else
		return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			if (compare(str, to_find, i))
			{
				return (str + i);
			}
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	main(void)
{
	char	string[42] = "awhuasdhagulhqweneugagulhadwqbe";
	char	find[42] = "";
	

	
	printf("%s\n", ft_strstr(string, find));
	printf("%s", strstr(string, find));
	return(0);
}
*/