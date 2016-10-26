/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 12:45:00 by aderragu          #+#    #+#             */
/*   Updated: 2015/11/25 12:45:05 by aderragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		cur;
	size_t	len;

	cur = -1;
	len = ft_strlen(s1);
	while (s2[++cur] && n--)
		s1[len + cur] = s2[cur];
	s1[len + cur] = '\0';
	return (s1);
}
