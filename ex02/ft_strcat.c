/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayurekli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:45:00 by ayurekli          #+#    #+#             */
/*   Updated: 2025/05/05 18:01:57 by ahmet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char str1[100] = "Merhaba ";
	char str2[] = "Dünya!";

	printf("Önce: %s\n", str1);
	ft_strcat(str1, str2);
	printf("Sonra: %s\n", str1);
	return (0);
}

