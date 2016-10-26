/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 23:21:04 by aderragu          #+#    #+#             */
/*   Updated: 2015/11/25 23:21:06 by aderragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	cpt;

	cpt = 0;
	while ((cpt < n) && (s1[cpt] || s2[cpt]))
	{
		if (((unsigned char*)s1)[cpt] != ((unsigned char*)s2)[cpt])
			return (((unsigned char*)s1)[cpt] - ((unsigned char*)s2)[cpt]);
		cpt++;
	}
	return (0);
}
