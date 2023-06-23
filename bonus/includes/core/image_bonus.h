/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 16:35:09 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/06 07:56:19 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMAGE_BONUS_H
# define IMAGE_BONUS_H

# include "config_bonus.h"

enum {
	BLOCK_NUMBER = 2,
	CAT_NUMBER = 54,
	COIN_NUMBER = 6,
	GATE_NUMBER = 4,
	MONSTER_NUMBER = 22,
	OTHER_NUMBER = 4
};

enum {
	BLOCK = 0,
	CAT = 1,
	COIN = 2,
	GATE = 3,
	MONSTER = 4,
	OTHER = 5
};

void	load_image(t_game *game, char *name, int sprite_number, int type);

#endif