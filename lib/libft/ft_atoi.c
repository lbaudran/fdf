/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 23:24:55 by aderragu          #+#    #+#             */
/*   Updated: 2015/11/25 23:24:56 by aderragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_atoi(const char *str)
{
	long	res;
	int		cur;
	int		neg_fact;

	res = 0;
	cur = -1;
	neg_fact = 1;
	while (str[++cur])
		if (!ft_isdigit(str[cur]))
			return (-1);
	cur = 0;
	if (str[cur] == '-' && str[cur + 1] >= '0' && str[cur + 1] <= '9')
	{
		neg_fact = -1;
		cur++;
	}
	if (str[cur] == '+' && str[cur + 1] >= '0' && str[cur + 1] <= '9')
		cur++;
	while (str[cur] >= '0' && str[cur] <= '9')
	{
		res = res * 10 + str[cur] - '0';
		cur++;
	}
	return (res * neg_fact);
}
