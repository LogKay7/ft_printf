/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_memmove.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkailany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 11:00:55 by lkailany          #+#    #+#             */
/*   Updated: 2022/01/13 14:35:25 by lkailany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char			*dest;
	const char		*source;
	unsigned long	i;

	dest = (char *) dst;
	source = (char *) src;
	if ((source == NULL) && (dest == NULL))
		return (NULL);
	if (dest > source)
	{
		while (len > 0)
		{
			len--;
			dest[len] = source[len];
		}
	}
	else
	{
		i = -1;
		while (++i < len)
			dest[i] = source[i];
	}
	return (dst);
}
