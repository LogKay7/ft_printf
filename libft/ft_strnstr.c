/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkailany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 18:28:19 by lkailany          #+#    #+#             */
/*   Updated: 2022/01/13 14:39:44 by lkailany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned long	i;
	unsigned long	j;
	size_t			lencpy;
	char			*position;

	i = 0;
	if (ft_strlen(needle) == 0)
		return ((char *) haystack);
	if (!len)
		return (0);
	while (haystack[i] && len > 0)
	{
		j = 0;
		lencpy = len + 1;
		while (haystack[i + j] == needle[j] && --lencpy)
		{
			position = (char *) haystack + i;
			if (needle[j + 1] == '\0')
				return (position);
			j++;
		}
		i++;
		len--;
	}
	return (0);
}
