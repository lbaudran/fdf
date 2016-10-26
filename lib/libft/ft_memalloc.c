/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 11:32:25 by aderragu          #+#    #+#             */
/*   Updated: 2015/11/26 11:32:27 by aderragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*freemem;

	freemem = malloc(size);
	if (freemem == NULL)
		return (NULL);
	ft_bzero(freemem, size);
	return (freemem);
}
