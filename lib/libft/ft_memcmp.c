/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 19:16:17 by aderragu          #+#    #+#             */
/*   Updated: 2015/11/24 19:16:19 by aderragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	cpt;

	cpt = 0;
	while (cpt < n)
	{
		if (((unsigned char*)s1)[cpt] != ((unsigned char*)s2)[cpt])
			return (((unsigned char*)s1)[cpt] - ((unsigned char*)s2)[cpt]);
		cpt++;
	}
	return (0);
}
