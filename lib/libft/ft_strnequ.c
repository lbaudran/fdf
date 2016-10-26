/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 19:21:52 by aderragu          #+#    #+#             */
/*   Updated: 2015/11/26 19:21:54 by aderragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int	cpt;

	cpt = 0;
	while ((s1[cpt] || s2[cpt]) && n--)
	{
		if (((char*)s1)[cpt] != ((char*)s2)[cpt])
			return (0);
		cpt++;
	}
	return (1);
}
