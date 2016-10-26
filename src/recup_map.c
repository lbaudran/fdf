/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recup_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaudran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 15:33:23 by lbaudran          #+#    #+#             */
/*   Updated: 2016/09/12 14:24:00 by lbaudran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fdf.h>

int			rotation(t_list *begin, int z)
{
	double	m_rot_x[3][3];
	t_list	*tmp;
	int		x;
	int		y;
	int		ret_z;

	x = tmp->x;
	y = tmp->y;
	tmp = begin->next;
	m_rot_x[0][0] = 1;
	m_rot_x[0][1] = 0;
	m_rot_x[0][2] = 0;
	m_rot_x[1][0] = 0;
	m_rot_x[1][1] = cos(90);
	m_rot_x[1][2] = -sin(90);
	m_rot_x[2][0] = 0;
	m_rot_x[2][1] = sin(90);
	m_rot_x[2][2] = cos(90);
	while (tmp)
	{
		tmp->x = m_rot_x[0][0] * tmp->x + m_rot_x[0][1] * tmp->y + m_rot_x[0][2] * z;
		tmp->y = m_rot_x[1][0] * tmp->x + m_rot_x[1][1] * tmp->y + m_rot_x[1][2] * z;
		ret_z = m_rot_x[2][0] * tmp->x + m_rot_x[2][1] * tmp->y + m_rot_x[2][2] * z;
		tmp = tmp->next;
	}
	return (ret_z);
}

t_list		*ft_join(t_list *begin, char **tmp, int y, t_data *data)
{
	int		i;
	t_list	*elem;

	i = 0;
	while (tmp[i])
	{
		elem = create_elem(begin);
		elem->base_x = i;
		elem->base_y = y;
		elem->z = ft_atoi(tmp[i]);
		i++;
	}
	if (data->i != 0 && i != data->i)
		exit(write(1, "Error map", 9));
	data->i = i;
	free(tmp);
	return (begin);
}

t_list		*calcul_coord(t_list *begin, t_data *data)
{
	t_list		*elem;
	int			zoom;
	int			z;

	z = 800;
	zoom = 800 / data->i;
	printf("%d\n\n", zoom);
	elem = begin->next;
	while (elem)
	{
		elem->x = (z * ((elem->base_x * (zoom)) - z) / (z - elem->z) + z) + 400;
		elem->y = (z * ((elem->base_y * (zoom)) - z) / (z - elem->z) + z) + 400;
		elem = elem->next;
	}
	return (begin);
}

t_list		*recup_map(t_list *begin, char **argv, t_data *data)
{
	int		fd;
	char	*line;
	char	**tmp;
	int		y;
	t_list	*elem;
	int d = 0;

	fd = 0;
	elem = begin->next;
	y = 0;
	fd = open(argv[1], O_RDONLY);
	printf("%d",fd);
	while ((d = get_next_line(fd, &line)))
	{
		if (d == -1)
			exit(0);
		tmp = ft_strsplit(line, ' ');
		begin = ft_join(begin, tmp, y, data);
		y++;
	}
	if (data->i < y)
		data->i = y;
	calcul_coord(begin, data);
	return (begin);
}
