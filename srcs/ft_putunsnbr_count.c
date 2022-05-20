/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsnbr_count.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkailany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 11:46:24 by lkailany          #+#    #+#             */
/*   Updated: 2022/01/20 11:52:33 by lkailany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putunsnbrcount(unsigned int nb, int *nbchars)
{
	if (nb >= 10)
	{
		ft_putnbrcount(nb / 10, nbchars);
		*nbchars += ft_putcharcount(nb % 10 + '0');
	}
	else
		*nbchars += ft_putcharcount(nb + '0');
}
