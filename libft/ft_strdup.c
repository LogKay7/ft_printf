/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkailany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 11:21:22 by lkailany          #+#    #+#             */
/*   Updated: 2022/01/11 15:29:23 by lkailany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*newstr;
	char	*str1;

	i = 0;
	str1 = (char *) s1;
	while (str1[i] != '\0')
		i ++;
	newstr = malloc(i + 1);
	if (newstr != NULL)
	{	
		i = 0;
		while (str1[i] != '\0')
		{
			newstr[i] = str1[i];
			i ++;
		}
		newstr[i] = '\0';
	}
	return (newstr);
}
