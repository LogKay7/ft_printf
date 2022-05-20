/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkailany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 10:19:22 by lkailany          #+#    #+#             */
/*   Updated: 2022/01/13 14:33:18 by lkailany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getsize(int n)
{
	int	size;

	if (n > 0)
		size = 0;
	else
		size = 1;
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	int		size;
	long	nb;
	char	*str;

	nb = n;
	if (nb < 0)
		nb = -nb;
	size = ft_getsize(n);
	str = (char *) malloc(size + 1);
	if (!str)
		return (0);
	str[size] = '\0';
	size--;
	while (nb > 0)
	{
		str[size] = (nb % 10) + '0';
		nb /= 10;
		size--;
	}
	if (size == 0 && str[1] == '\0')
		str[size] = '0';
	else if (size == 0 && str[1] != '\0')
		str[size] = '-';
	return (str);
}
