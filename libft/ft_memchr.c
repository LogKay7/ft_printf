/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkailany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 17:12:51 by lkailany          #+#    #+#             */
/*   Updated: 2022/01/16 11:07:58 by lkailany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned long		i;
	unsigned const char	*str;

	i = 0;
	if (!n)
		return (0);
	str = s;
	while (i < n)
	{
		if (*str == (unsigned char) c)
			return ((void *) str);
		str++;
		i++;
	}
	return (0);
}
