/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkailany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 11:33:51 by lkailany          #+#    #+#             */
/*   Updated: 2022/01/13 14:31:01 by lkailany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_limits(unsigned long long nb, int signe)
{
	if (nb >= LLMAX && signe == 1)
		return (-1);
	if (nb >= LLMAX + 1 && signe == -1)
		return (0);
	return (1);
}

int	ft_atoi(const char *str)
{
	int					i;
	unsigned long long	nb;
	int					signe;

	i = 0;
	nb = 0;
	signe = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	if (check_limits(nb, signe) == -1 || check_limits(nb, signe) == 0)
		return (check_limits(nb, signe));
	return (nb * signe);
}
