/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 16:23:45 by gpeyre            #+#    #+#             */
/*   Updated: 2023/07/16 11:05:01 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int	main(void)
{
	int	division;
	int	modulo;

	ft_div_mod(1, 10, &division, &modulo);

	char	str;
	str = division + 48;
	write(1, &str, 1);
	write(1, "\n", 1);
	str = modulo + 48;
	write(1, &str, 1);
	return (0);
}*/
