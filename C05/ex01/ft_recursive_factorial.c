/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 09:39:35 by gpeyre            #+#    #+#             */
/*   Updated: 2023/07/21 09:46:45 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb >= 1)
	{
		result *= nb;
		ft_recursive_factorial(nb - 1);
	}
	return (result);
}

int	main(void)
{
	printf("%d", ft_recursive_factorial(5));
}

