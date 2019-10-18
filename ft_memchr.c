/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:11:28 by pmaldagu          #+#    #+#             */
/*   Updated: 2019/10/16 16:22:42 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;

	i = 0;
	if (s == NULL)
		return (0);
	while (i < n)
	{
		if (((char*)s)[i] == c)
			return (&((char *)s)[i]);
		i++;
	}
	return (0);
}
