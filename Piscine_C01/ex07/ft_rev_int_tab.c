/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 07:13:47 by hescoval          #+#    #+#             */
/*   Updated: 2023/07/23 20:43:45 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		index;
	int		current_int;

	index = 0;
	while (index < (size / 2))
	{
		current_int = tab[size - 1 - index];
		tab[size - 1 - index] = tab[index];
		tab[index] = current_int;
		index++;
	}
}
/*
int     main(void)
{
    int testArray[] = {3, 61, 2, 94, 102, 10, 27, 81, 189, 210};
    int size = 10;
    ft_rev_int_tab(testArray, size);
    for(int i = 0; i < size; i++)
    {
        printf("%i ", testArray[i]);
    }
}
*/
