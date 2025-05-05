/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayurekli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:30:00 by ayurekli          #+#    #+#             */
/*   Updated: 2025/04/25 12:31:00 by ayurekli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
#include <stdio.h>

int	main(void)
{
	printf("Test 1: %d\\n", ft_strncmp("hello", "hello", 5));   // 0
	printf("Test 2: %d\\n", ft_strncmp("abc", "abd", 2));       // 0
	printf("Test 3: %d\\n", ft_strncmp("abc", "abd", 3));       // negatif
	printf("Test 4: %d\\n", ft_strncmp("abc", "abcde", 10));    // negatif
	printf("Test 5: %d\\n", ft_strncmp("abcdef", "abc", 5));    // pozitif
	return (0);
}

