/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:13:39 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/06/21 13:59:14 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		stop(char *reason)
{
	ft_putendl(reason);
	return (1);
}

int	main(int argc, char **argv)
{
	t_map	*map;
	t_mlx	*mlx;
	int		fd;

	if (argc < 2)
		return (stop("error: not enough arguments"));
	fd = open(argv[1], O_RDONLY);
	if (fd < 0 || !read_file(fd, &map))
		return (stop("error: invalid file"));
	mlx = init(ft_strjoin("FdF - ", argv[1]))
	if ((mlx == NULL)
		return (stop("error: mlx couldn't init"));
	mlx->map = map;
	render(mlx);
	mlx_key_hook(mlx->window, hook_keydown, mlx);
	mlx_hook(mlx->window, 4, 0, hook_mousedown, mlx);
	mlx_hook(mlx->window, 5, 0, hook_mouseup, mlx);
	mlx_hook(mlx->window, 6, 0, hook_mousemove, mlx);
	mlx_loop(mlx->mlx);
	return (0);
}
