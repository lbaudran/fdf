/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 17:47:29 by aderragu          #+#    #+#             */
/*   Updated: 2015/11/23 17:47:40 by aderragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*str;
	unsigned char	*str2;
	int				cur;

	cur = 0;
	str = (unsigned char*)dst;
	str2 = (unsigned char*)src;
	while (n > 0)
	{
		str[cur] = str2[cur];
		n--;
		cur++;
	}
	return (dst);
}
