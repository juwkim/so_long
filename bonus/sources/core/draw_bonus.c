/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 02:19:53 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/06 08:00:27 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/draw_bonus.h"

void	draw_block(t_game *game, void *block, int first, int second)
{
	const int	x = first * BLOCK_SIZE + game->offset.first;
	const int	y = second * BLOCK_SIZE + game->offset.second;

	if (x < -BLOCK_SIZE || y < -BLOCK_SIZE || \
		x > WINDOW_WIDTH || y > WINDOW_HEIGHT)
		return ;
	mlx_put_image_to_window(game->mlx, game->window, block, x, y);
}

void	draw_background(t_game *game)
{
	int	second;
	int	first;

	mlx_clear_window(game->mlx, game->window);
	second = 0;
	while (second < game->map_size.second)
	{
		first = 0;
		while (first < game->map_size.first)
		{	
			if (game->map[second][first] == CHAR_WALL)
				draw_block(game, game->image[BLOCK][WALL_IDX], first, second);
			else
				draw_block(game, game->image[BLOCK][BLOCK_IDX], first, second);
			if (game->map[second][first] == CHAR_COLLECTABLE)
				draw_block(game, get_collectable_image(game), first, second);
			else if (game->map[second][first] == CHAR_EXIT)
				draw_block(game, get_gate_image(game), first, second);
			++first;
		}
		++second;
	}
}

void	draw_status(t_game *game)
{
	mlx_put_image_to_window(game->mlx, game->window, \
		game->image[OTHER][OUTLINE], STATUS_POS_FIRST + 10, STATUS_POS_SECOND);
	draw_movement(game);
	draw_life(game);
}

void	draw_movement(t_game *game)
{
	char	*cnt_move;

	cnt_move = ft_itoa(game->count[MOVE]);
	mlx_put_image_to_window(game->mlx, game->window, \
		game->image[OTHER][PAW], STATUS_POS_FIRST + 20, STATUS_POS_SECOND + 7);
	mlx_string_put(game->mlx, game->window, \
		STATUS_POS_FIRST + 60, STATUS_POS_SECOND + 25, WHITE, cnt_move);
	free(cnt_move);
}

void	draw_life(t_game *game)
{
	int			cnt;
	int			life_pos_first;
	const int	life_pos_second = STATUS_POS_SECOND;

	cnt = 0;
	life_pos_first = STATUS_POS_FIRST + 170;
	while (cnt < game->player.life_number)
	{
		mlx_put_image_to_window(game->mlx, game->window, \
			game->image[OTHER][LIFE_ON], life_pos_first, life_pos_second);
		++cnt;
		life_pos_first += 35;
	}
	while (cnt < LIFE_NUMBER)
	{
		mlx_put_image_to_window(game->mlx, game->window, \
			game->image[OTHER][LIFE_OFF], life_pos_first, life_pos_second);
		++cnt;
		life_pos_first += 35;
	}
}
