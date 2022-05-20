/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkailany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 10:34:09 by lkailany          #+#    #+#             */
/*   Updated: 2022/01/13 14:39:14 by lkailany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*newstr;
	unsigned int	i;

	if (!s || !f)
		return (0);
	newstr = ft_strdup(s);
	if (!newstr)
		return (0);
	i = 0;
	while (s[i])
	{
		newstr[i] = f(i, newstr[i]);
		i++;
	}
	return (newstr);
}
