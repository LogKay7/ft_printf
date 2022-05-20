/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkailany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 11:16:33 by lkailany          #+#    #+#             */
/*   Updated: 2022/01/13 14:31:37 by lkailany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned long	i;
	size_t			memory;
	unsigned char	*ptr;

	i = 0;
	ptr = 0;
	memory = count * size;
	ptr = malloc(memory);
	if (ptr != 0)
	{
		while (i < memory)
		{
			ptr[i] = 0;
			i ++;
		}
		return ((void *) ptr);
	}
	return (ptr);
}
