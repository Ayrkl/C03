/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayurekli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:15:00 by ayurekli          #+#    #+#             */
/*   Updated: 2025/05/05 17:59:01 by ahmet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
#include <stdio.h>

int	main(void)
{
	printf("Test 1: %d\\n", ft_strcmp("hello", "hello"));   // 0
	printf("Test 2: %d\\n", ft_strcmp("abc", "abd"));       // negatif
	printf("Test 3: %d\\n", ft_strcmp("abd", "abc"));       // pozitif
	printf("Test 4: %d\\n", ft_strcmp("abc", "abcdef"));    // negatif
	printf("Test 5: %d\\n", ft_strcmp("abcdef", "abc"));    // pozitif
	return (0);
}

