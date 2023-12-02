/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 11:31:34 by gpeyre            #+#    #+#             */
/*   Updated: 2023/07/17 12:04:54 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (*str != 0)
	{
		while (str[i] != '\0')
		{
			if (!(str[i] >= '0' && str[i] <= '9'))
				return (0);
			i++;
		}
	}
	return (1);
}
/*int	main(void)
{
	int	valide;
	char	str[0];

	valide = ft_str_is_numeric(str);

	if (valide == 1)
		printf("Caracteres valides :)\n");
	else
		printf("T'es mauvais Jack\n");
}*/
