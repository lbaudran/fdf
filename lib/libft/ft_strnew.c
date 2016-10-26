/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 11:54:04 by aderragu          #+#    #+#             */
/*   Updated: 2015/11/26 11:54:06 by aderragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	int		cnt;

	cnt = -1;
	size++;
	str = malloc(size);
	if (!str)
		return (NULL);
	while (size--)
		str[++cnt] = '\0';
	return (str);
}
