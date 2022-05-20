/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkailany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 11:15:07 by lkailany          #+#    #+#             */
/*   Updated: 2022/01/20 11:33:42 by lkailany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putnbrcount(int nb, int *nbchars)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		*nbchars += 11;
		return ;
	}
	else if (nb < 0)
	{
		nb = -nb;
		*nbchars += write(1, "-", 1);
		ft_putnbrcount(nb, nbchars);
	}
	else if (nb >= 10)
	{
		ft_putnbrcount(nb / 10, nbchars);
		*nbchars += ft_putcharcount(nb % 10 + '0');
	}
	else
		*nbchars += ft_putcharcount(nb + '0');
}
