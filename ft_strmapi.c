/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:33:36 by pmaldagu          #+#    #+#             */
/*   Updated: 2019/10/15 18:52:13 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_protect(void)
{
	char	*ptct;

	if ((ptct = malloc(sizeof(char) * 1)) != 0)
	{
		ptct[0] = '\0';
		return (ptct);
	}
	return (0);
}

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	j;
	char			*mapi;

	i = 0;
	j = 0;
	if (s == 0)
		return (ft_protect());
	while (s[i] != '\0')
		i++;
	if ((mapi = malloc(sizeof(char) * (i + 1))) != NULL)
	{
		while (j < i)
		{
			mapi[j] = f(j, s[j]);
			j++;
		}
		mapi[i] = '\0';
		return (mapi);
	}
	return (NULL);
}
