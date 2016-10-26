/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 17:57:02 by aderragu          #+#    #+#             */
/*   Updated: 2015/12/15 17:57:04 by aderragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_min(int *array, int size)
{
	int min;
	int	cur;

	cur = 0;
	min = array[0];
	while (cur < size)
	{
		if (array[cur] < min)
			min = array[cur];
		cur++;
	}
	return (min);
}
