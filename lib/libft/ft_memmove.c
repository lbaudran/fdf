/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 14:17:19 by aderragu          #+#    #+#             */
/*   Updated: 2015/11/24 14:17:20 by aderragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*freemem;

	if ((freemem = malloc(sizeof(char) * len)) == NULL)
		return (NULL);
	ft_memcpy(freemem, src, len);
	ft_memcpy(dst, freemem, len);
	free(freemem);
	return (dst);
}
