/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkailany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 10:28:55 by lkailany          #+#    #+#             */
/*   Updated: 2022/01/21 11:50:14 by lkailany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_putcharcount(char c);
int		ft_putstrcount(char *str);
void	ft_putnbrcount(int nb, int *nbchars);
void	ft_putunsnbrcount(unsigned int nb, int *nbchars);
void	ft_putconverthexacount(unsigned int nb, int *nbchars, int maj);
void	ft_putptrcount(void *ptr, int *nbchars);
#endif
