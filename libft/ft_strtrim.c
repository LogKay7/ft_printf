/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkailany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 09:57:03 by lkailany          #+#    #+#             */
/*   Updated: 2022/01/13 14:40:14 by lkailany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getfirstindex(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	found;

	i = 0;
	while (*s1)
	{
		j = 0;
		found = 0;
		while (set[j] && found == 0)
		{
			if (*s1 == set[j])
				found = 1;
			j++;
		}
		if (found == 0)
			return (i);
		i++;
		s1++;
	}
	return (i);
}

static int	ft_getlastindex(char const *s1, char const *set, int stop)
{
	int	i;
	int	j;
	int	found;

	i = ft_strlen(s1) - 1;
	while (i >= stop)
	{
		j = 0;
		found = 0;
		while (set[j] && found == 0)
		{
			if (s1[i] == set[j])
				found = 1;
			j++;
		}
		if (found == 0)
			return (i);
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*newstr;
	int		size;
	int		start;
	int		end;
	int		j;

	if (!s1 || !set)
		return (0);
	start = ft_getfirstindex(s1, set);
	end = ft_getlastindex(s1, set, start) + 1;
	size = end - start;
	j = 0;
	newstr = malloc(size + 1);
	if (newstr == NULL)
		return (newstr);
	while (start < end)
	{
		newstr[j] = s1[start];
		start++;
		j++;
	}
	newstr[j] = '\0';
	return (newstr);
}
