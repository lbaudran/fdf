/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 13:58:31 by aderragu          #+#    #+#             */
/*   Updated: 2015/11/27 13:58:33 by aderragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*str;
	int				cur;

	cur = -1;
	str = malloc(sizeof(char) * (len + 1));
	if (str != NULL && s != NULL)
	{
		while (len--)
		{
			str[++cur] = s[start];
			start++;
		}
		str[cur + 1] = '\0';
		return (str);
	}
	return (str);
}
