/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 12:01:10 by aderragu          #+#    #+#             */
/*   Updated: 2015/11/24 12:01:12 by aderragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			cpt;
	unsigned char	*str;

	str = (unsigned char*)src;
	cpt = 0;
	while (cpt < n)
	{
		*(unsigned char*)dst++ = *(unsigned char*)src++;
		if (str[cpt] == (unsigned char)c)
			return (dst);
		cpt++;
	}
	return (NULL);
}
