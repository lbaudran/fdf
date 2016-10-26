/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/12 16:31:04 by aderragu          #+#    #+#             */
/*   Updated: 2016/09/09 13:57:59 by lbaudran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fdf.h>

int				key_func(int key, void *param)
{
	printf("%d", key);
	if (key == 53)
	{
		mlx_destroy_window(((t_data*)param)->init, ((t_data*)param)->win);
		exit(1);
	}
	return (1);
}

int				put_pixel(char *image, int x, int y, int color)
{

	image[0 + x * 4 + y * 6400] = color >> 0;
	image[1 + x * 4 + y * 6400] = color >> 8;
	image[2 + x * 4 + y * 6400] = color >> 16;
	image[3 + x * 4 + y * 6400] = color >> 24;
	return (1);
}


void ligne(char *image, int col, int xi,int yi,int xf,int yf)
{
	int dx,dy,i,xinc,yinc,cumul,x,y ;
  x = xi ;
  y = yi ;
  dx = xf - xi ;
  dy = yf - yi ;
  xinc = ( dx > 0 ) ? 1 : -1 ;
  yinc = ( dy > 0 ) ? 1 : -1 ;
  dx = abs(dx) ;
  dy = abs(dy) ;
  if ( dx > dy ) {
    cumul = dx / 2 ;
    for ( i = 1 ; i <= dx ; i++ ) {
      x += xinc ;
      cumul += dy ;
      if ( cumul >= dx ) {
        cumul -= dx ;
        y += yinc ; }
      put_pixel(image, x, y, col) ; } }
    else {
    cumul = dy / 2 ;
    for ( i = 1 ; i <= dy ; i++ ) {
      y += yinc ;
      cumul += dx ;
      if ( cumul >= dy ) {
        cumul -= dy ;
        x += xinc ; }
      put_pixel(image, x, y, col) ; } }
}

int 			main(int argc, char **argv)
{
	t_data		data;
	t_list		*begin;
	char		*image;
	int			e = 0;
	int			x = 0;
	int			y = 0;
	t_list		*elem;
	t_list		*elem2;

	if (argc == 1)
		return (0);
	data.i = 0;
	data.l = 400;
	data.c = 0x00FFFFFF;
	data.col = 0x00FFFF00;
	begin = create_list(begin);
	begin = recup_map(begin, argv, &data);
	add_point(begin);
	elem = begin->next;
	data.init = mlx_init();
	data.win = mlx_new_window(data.init, 1600, 1600, "test");
	data.img = mlx_new_image(data.init, 1600, 1600);
	image = mlx_get_data_addr(data.img, &data.c, &data.l, &e);
	while (elem)
	{
	printf("elem->x = %d elem->y = %d\n", elem->x, elem->y);
//		put_pixel(image, elem->x, elem->y, col);
		if (elem->next && elem->base_y == elem->next->base_y) // corrige pour tous les zooms
			ligne(image, data.col, elem->x, elem->y, elem->next->x, elem->next->y);
		if (elem->down)
			ligne(image, data.col, elem->x, elem->y, elem->down->x, elem->down->y);
		elem = elem->next;
	}
	mlx_put_image_to_window(data.init, data.win, data.img, 1, 1);
	mlx_key_hook(data.win, key_func, &data);
	mlx_loop(data.init);
	return (0);
}
