/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 22:17:12 by aderragu          #+#    #+#             */
/*   Updated: 2015/12/01 13:15:40 by aderragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t cur1;

	cur1 = -1;
	if (!*s2)
		return ((char*)s1);
	while (*(s1 + (++cur1)))
	{
		if (ft_strncmp(&s1[cur1], s2, ft_strlen(s2)) == 0)
			return ((char*)&s1[cur1]);
	}
	return (NULL);
}
