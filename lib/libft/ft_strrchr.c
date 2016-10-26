/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 18:28:11 by aderragu          #+#    #+#             */
/*   Updated: 2015/11/25 18:28:16 by aderragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		cur;
	char	*s2;

	s2 = (char*)s;
	cur = ft_strlen(s2);
	while (cur--)
		if (s2[cur] == (char)c)
			return (&s2[cur]);
	return ((char)c == '\0' ? &s2[ft_strlen(s2)] : NULL);
}
