/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 18:08:38 by aderragu          #+#    #+#             */
/*   Updated: 2015/11/27 18:08:39 by aderragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	long	nbl;
	int		sze;
	long	cnt;
	char	*nb;

	nbl = n;
	sze = 1;
	cnt = nbl;
	while (cnt /= 10)
		sze++;
	cnt = nbl >= 0 ? 0 : 1;
	nbl = cnt ? -nbl : nbl;
	if ((nb = malloc(sizeof(char) * (sze + 1 + cnt))) == NULL)
		return (NULL);
	nb[sze + cnt] = '\0';
	while (nbl >= 0 && sze)
	{
		nb[--sze + cnt] = (nbl % 10) + '0';
		nbl /= 10;
	}
	nb[0] = cnt ? '-' : nb[0];
	return (nb);
}
