/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:54:36 by aderragu          #+#    #+#             */
/*   Updated: 2015/11/24 17:54:45 by aderragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			cpt;
	unsigned char	*str;

	str = (unsigned char*)s;
	cpt = 0;
	while (cpt < n)
	{
		if ((str[cpt]) == (unsigned char)c)
			return (&(str[cpt]));
		cpt++;
	}
	return (NULL);
}
