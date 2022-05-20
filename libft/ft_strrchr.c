/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkailany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:03:09 by lkailany          #+#    #+#             */
/*   Updated: 2022/01/13 14:39:59 by lkailany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	search;

	len = 0;
	search = c;
	while (s[len])
		len ++;
	while (len >= 0)
	{
		if (s[len] == search)
			return ((char *)(s + len));
		len--;
	}
	if (search == '\0')
		return ((char *)(s));
	return (0);
}
