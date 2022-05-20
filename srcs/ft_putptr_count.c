/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkailany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:05:24 by lkailany          #+#    #+#             */
/*   Updated: 2022/01/21 10:56:49 by lkailany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putconvertullhexacount(size_t ptr, int *nbchars, char *base)
{
	if (ptr >= 16)
	{
		ft_putconvertullhexacount(ptr / 16, nbchars, base);
		*nbchars += ft_putcharcount(base[ptr % 16]);
	}
	else
		*nbchars += ft_putcharcount(base[ptr % 16]);
}

void	ft_putptrcount(void *ptr, int *nbchars)
{
	char	*base;

	base = "0123456789abcdef";
	*nbchars += write(1, "0x", 2);
	ft_putconvertullhexacount((size_t) ptr, nbchars, base);
}
