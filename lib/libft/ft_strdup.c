/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 10:25:14 by aderragu          #+#    #+#             */
/*   Updated: 2015/11/25 10:25:17 by aderragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*sdup;

	if ((sdup = malloc(sizeof(char) * (ft_strlen(s1) + 1))) == NULL)
		return (NULL);
	return (ft_strcpy(sdup, s1));
}
