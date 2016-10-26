/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 11:22:47 by aderragu          #+#    #+#             */
/*   Updated: 2015/11/25 11:22:48 by aderragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	int	cur;

	cur = 0;
	while (src[cur] && n)
	{
		dst[cur] = src[cur];
		cur++;
		n--;
	}
	while (n > 0)
	{
		dst[cur] = '\0';
		n--;
		cur++;
	}
	return (dst);
}
