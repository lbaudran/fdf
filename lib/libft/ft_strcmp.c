/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 23:09:23 by aderragu          #+#    #+#             */
/*   Updated: 2015/11/25 23:09:25 by aderragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	int	cpt;

	cpt = 0;
	while (s1[cpt] || s2[cpt])
	{
		if (((char*)s1)[cpt] != ((char*)s2)[cpt])
			return (((unsigned char*)s1)[cpt] - ((unsigned char*)s2)[cpt]);
		cpt++;
	}
	return (0);
}
