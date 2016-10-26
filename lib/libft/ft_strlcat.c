/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 12:59:20 by aderragu          #+#    #+#             */
/*   Updated: 2015/11/25 12:59:23 by aderragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		cur;
	size_t	len;

	cur = 0;
	len = ft_strlen(dst);
	if (size > len)
	{
		while (len + cur < size - 1)
		{
			dst[len + cur] = src[cur];
			cur++;
		}
		dst[len + cur] = '\0';
	}
	return (size < len ? size + ft_strlen(src) : len + ft_strlen(src));
}
