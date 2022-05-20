/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkailany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:44:32 by lkailany          #+#    #+#             */
/*   Updated: 2022/01/13 14:38:11 by lkailany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned long	i;
	unsigned long	j;
	size_t			dstlen;
	size_t			srclen;

	i = 0;
	j = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstsize <= dstlen)
		return (dstsize + srclen);
	if (dstsize == 0)
		return (srclen);
	else
	{
		i = dstlen;
		while (src[j] && i < dstsize - 1)
		{
			dst[i] = src [j];
			j++;
			i++;
		}
		dst[i] = '\0';
		return (srclen + dstlen);
	}
}
