/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 11:34:13 by aderragu          #+#    #+#             */
/*   Updated: 2015/11/25 11:34:16 by aderragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int	cur;
	int	len;

	cur = -1;
	len = ft_strlen(s1);
	while (s2[++cur])
		s1[len + cur] = s2[cur];
	s1[len + cur] = '\0';
	return (s1);
}
