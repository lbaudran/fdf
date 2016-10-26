/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 11:24:10 by aderragu          #+#    #+#             */
/*   Updated: 2015/11/27 11:24:12 by aderragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		cur;
	char	*str;

	cur = -1;
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str || f == NULL)
		return (NULL);
	while (s[++cur] && str)
		str[cur] = f(s[cur]);
	str[ft_strlen(s)] = '\0';
	return (str);
}
