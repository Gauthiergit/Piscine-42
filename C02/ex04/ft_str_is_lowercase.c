/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 12:06:29 by gpeyre            #+#    #+#             */
/*   Updated: 2023/07/17 13:05:37 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (*str != 0)
	{
		while (str[i] != '\0')
		{
			if (!(str[i] >= 'a' && str[i] <= 'z'))
				return (0);
			i++;
		}
	}
	return (1);
}
/*int	main(void)
{
	int	valide;
	char	str[4] = "wcFw";

	valide = ft_str_is_lowercase(str);
	if (valide == 1)
		printf("Les caracteres sont valides\n");
	else
		printf("Warning !, caracteres indesirables\n");
}*/
