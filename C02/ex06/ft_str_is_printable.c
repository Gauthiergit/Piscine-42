/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 13:13:04 by gpeyre            #+#    #+#             */
/*   Updated: 2023/07/17 13:31:23 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (*str != 0)
	{
		while (str[i] != '\0')
		{
			if (!(str[i] >= ' ' && str[i] <= '~'))
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

	valide = ft_str_is_printable(str);
	if (valide == 1)
		printf("Les caracteres sont valides\n");
	else
		printf("Warning !, caracteres indesirables\n");
}*/
