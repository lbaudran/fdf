/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 17:45:23 by aderragu          #+#    #+#             */
/*   Updated: 2015/12/15 17:45:34 by aderragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_max(int *array, int size)
{
	int max;
	int	cur;

	cur = 0;
	max = array[0];
	while (cur < size)
	{
		if (array[cur] > max)
			max = array[cur];
		cur++;
	}
	return (max);
}
