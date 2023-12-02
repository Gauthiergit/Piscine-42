/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:01:30 by gpeyre            #+#    #+#             */
/*   Updated: 2023/07/27 11:29:59 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	diff;
	int	i;
	int	*res;

	if (min >= max)
		return (NULL);
	i = 0;
	diff = max - min;
	res = malloc(diff * sizeof(int));
	if (res == NULL)
		return (NULL);
	while (i < diff)
	{
		res[i] = min + i;
		i++;
	}
	return (res);
}
/*int	main(void)
{
	int	*res;
	int	i;

	i = 0;
	res = ft_range(4, 9);
	while (res[i] != 4)
	{
		printf("%d ", res[i]);
		i++;
	}
	free(res);
	return (0);
}*/
