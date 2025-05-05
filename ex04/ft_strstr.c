/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayurekli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:10:00 by ayurekli          #+#    #+#             */
/*   Updated: 2025/05/05 18:09:39 by ahmet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	str[] = "Merhaba 42 Istanbul!";
	char	find[] = "42";

	char	*result = ft_strstr(str, find);
	if (result)
		printf("Bulundu: %s\n", result);
	else
		printf("Bulunamadı.\n");
	return (0);
}

