/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 09:56:29 by gpeyre            #+#    #+#             */
/*   Updated: 2023/07/20 10:05:50 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i]) && (s1[i] == s2[i]) && (n > 0))
	{
		i++;
		n--;
	}
	if (n == 0)
		return (0);
	return (s1[i] - s2[i]);
}
/*int	main(void)
{
	char	str1[] = "hello";
	char	str2[] = "world";
	char	str3[] = "hello";

	printf("%d\n", ft_strncmp(str1, str2, 4));
	printf("%d\n", ft_strncmp(str1, str3, 4));
	printf("%d\n", ft_strncmp(str2, str3, 4));
}*/
