/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 18:08:16 by aderragu          #+#    #+#             */
/*   Updated: 2015/11/30 15:25:32 by aderragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**strarr;
	int		cur;
	int		curs[3];

	cur = -1;
	curs[2] = (s[0] == c || s[0] == '\0' ? 0 : 1);
	while (s[++cur])
		if (s[cur] == c && s[cur + 1] != '\0' && s[cur + 1] != c)
			curs[2]++;
	if ((strarr = malloc(sizeof(char*) * (curs[2] + 1))) == NULL)
		return (NULL);
	strarr[curs[2]] = NULL;
	if (cur - 1 > 0)
		cur = (cur == 0) ? 0 : cur - 1;
	while (cur && curs[2])
	{
		while (s[cur] == c && cur)
			cur--;
		curs[1] = cur;
		while (s[cur] != c && cur)
			cur--;
		curs[0] = (s[cur] == c ? cur : -1);
		strarr[--curs[2]] = ft_strsub(s, curs[0] + 1, curs[1] - curs[0]);
	}
	return (strarr);
}
