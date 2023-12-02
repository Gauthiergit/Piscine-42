/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 09:07:23 by gpeyre            #+#    #+#             */
/*   Updated: 2023/07/16 11:15:42 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = 0;
	while (j < size - 1)
	{
		while (i < size - 1)
		{
			if (tab[j] > tab[i + 1])
			{
				temp = tab[j];
				tab[j] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		j++;
		i = j;
	}
}
/*int	main(void)
{
	int	table[4] = {2, 4, 1, 3};
	int	i;

	i = 0;
	ft_sort_int_tab(table, 4);
	while (i < 4)
	{
		printf("%d", table[i++]);
	}
}*/
