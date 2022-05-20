/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkailany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:08:42 by lkailany          #+#    #+#             */
/*   Updated: 2022/01/13 14:37:11 by lkailany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	search;

	search = c;
	while (*s)
	{
		if (*s == search)
			return ((char *)(s));
		s++;
	}
	if (search == '\0')
		return ((char *)(s));
	return (0);
}
