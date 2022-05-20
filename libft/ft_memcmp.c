/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkailany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 17:31:59 by lkailany          #+#    #+#             */
/*   Updated: 2022/01/05 16:35:00 by lkailany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned long		i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	i = 0;
	str1 = s1;
	str2 = s2;
	if (n == 0)
		return (0);
	while (i < n -1 && str1[i] == str2[i])
	{
		i++;
	}
	if (str1[i] == str2[i])
		return (0);
	else
		return (str1[i] - str2[i]);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char *test1 = "Bonjour";
	char *test2 = "Bonjor";
	printf("My fct :\t%d\n", ft_memcmp(test1, test2, 0));
	printf("Real fct :\t%d\n", memcmp(test1, test2, 0));
	printf("My fct :\t%d\n", ft_memcmp(test1, test2, 5));
	printf("Real fct :\t%d\n", memcmp(test1, test2, 5));
	printf("My fct :\t%d\n", ft_memcmp(test1, test2, 6));
	printf("Real fct :\t%d\n", memcmp(test1, test2, 6));
	return (0);
}*/
