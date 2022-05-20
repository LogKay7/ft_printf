/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkailany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 11:47:15 by lkailany          #+#    #+#             */
/*   Updated: 2022/01/21 11:37:15 by lkailany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	detectformat(const char *str, int pos, va_list args)
{
	int	nbchars;

	nbchars = 0;
	if (str[pos] == 'c')
		nbchars = ft_putcharcount(va_arg(args, int));
	else if (str[pos] == 's')
		nbchars = ft_putstrcount(va_arg(args, char *));
	else if (str[pos] == 'd' || str[pos] == 'i')
		ft_putnbrcount(va_arg(args, int), &nbchars);
	else if (str[pos] == 'u')
		ft_putunsnbrcount(va_arg(args, unsigned int), &nbchars);
	else if (str[pos] == 'x')
		ft_putconverthexacount(va_arg(args, unsigned int), &nbchars, 0);
	else if (str[pos] == 'X')
		ft_putconverthexacount(va_arg(args, unsigned int), &nbchars, 1);
	else if (str[pos] == 'p')
		ft_putptrcount(va_arg(args, void *), &nbchars);
	else if (str[pos] == '%')
		nbchars = write(1, "%", 1);
	return (nbchars);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		nbchars;
	va_list	paramsinfos;

	va_start(paramsinfos, format);
	i = 0;
	nbchars = 0;
	while (format[i])
	{
		if (format[i] != '%')
			nbchars += write(1, &format[i], 1);
		else
		{
			nbchars += detectformat(format, i + 1, paramsinfos);
			i++;
		}
		i++;
	}
	va_end(paramsinfos);
	return (nbchars);
}
