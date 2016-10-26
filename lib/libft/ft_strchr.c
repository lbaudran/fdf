/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 16:46:33 by aderragu          #+#    #+#             */
/*   Updated: 2015/11/25 16:46:35 by aderragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	int		cur;
	char	*s2;

	s2 = (char*)s;
	cur = -1;
	while (s2[++cur])
		if (s2[cur] == (char)c)
			return (&s2[cur]);
	return ((char)c == '\0' ? &s2[cur] : NULL);
}
