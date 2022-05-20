/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putconverthexa_count.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkailany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:17:07 by lkailany          #+#    #+#             */
/*   Updated: 2022/01/21 10:56:13 by lkailany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_converthexa(unsigned int nb, int *nbchars, int maj, char *base)
{
	if (nb >= 16)
	{
		ft_converthexa(nb / 16, nbchars, maj, base);
		*nbchars += ft_putcharcount(base[nb % 16]);
	}
	else
		*nbchars += ft_putcharcount(base[nb % 16]);
}

void	ft_putconverthexacount(unsigned int nb, int *nbchars, int maj)
{
	char	*base;

	if (maj == 0)
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	ft_converthexa(nb, nbchars, maj, base);
}
