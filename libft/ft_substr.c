/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkailany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 11:31:15 by lkailany          #+#    #+#             */
/*   Updated: 2022/01/13 17:03:15 by lkailany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getmallocsize(char const *s, unsigned int start, size_t len)
{
	if (len >= ft_strlen(s) - start)
		return (ft_strlen(s) - start);
	else if (start >= ft_strlen(s))
		return (0);
	else
		return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*newstr;
	unsigned long	j;

	j = 0;
	if (!s)
		return (0);
	newstr = malloc(sizeof(char) * ft_getmallocsize(s, start, len) + 1);
	if (!newstr)
		return (0);
	if (start >= ft_strlen(s))
	{
		newstr[j] = '\0';
		return (newstr);
	}
	while (j < len && j < ft_strlen(s) - start)
	{
		if (s[start + j])
			newstr[j] = s[start + j];
		j++;
	}
	newstr[j] = '\0';
	return (newstr);
}
