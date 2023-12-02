/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 08:16:58 by gpeyre            #+#    #+#             */
/*   Updated: 2023/07/20 10:23:08 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	i;

	i = 0;
	len = 0;
	while (dest[len] && len < size)
		len++;
	while (i < size - 1 && src[i] && size)
	{
		dest[len + i] = src[i];
		i++;
	}
	if (len < size)
		dest[len + i] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (len + i);
}
/*int     main(void)
{
        char dest[80] = "J'aime manger du riz";
        char src[] = " avec du pesto.";
	int	len;

	len = ft_strlcat(dest, src, 13);
        printf("%s\n", dest);
	printf("%d\n", len);
}*/
