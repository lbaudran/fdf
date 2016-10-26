/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/12 16:34:29 by aderragu          #+#    #+#             */
/*   Updated: 2016/09/09 13:56:35 by lbaudran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

#include <mlx.h>
#include <fcntl.h>
#include <math.h>
#include <libft.h>
#include <stdio.h>

# define ZOOM 20

typedef struct		s_list
{
	int				z;
	int				x;
	int				y;
	int				base_x;
	int				base_y;
	struct s_list	*next;
	struct s_list	*prev;
	struct s_list	*up;
	struct s_list	*down;
}					t_list;

typedef struct 		s_data
{
	int				l;
	int				c;
	int				col;
	int				i;
	void			*init;
	void			*win;
	void			*img;
}					t_data;

t_list				*create_list(t_list *begin);
t_list				*create_elem(t_list *begin);
t_list				*add_point(t_list *begin);

t_list				*ft_join(t_list *begin, char **tmp, int y, t_data *data);
t_list				*recup_map(t_list *begin, char **argv, t_data *data);

#endif
