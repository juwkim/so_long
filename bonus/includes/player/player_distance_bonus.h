/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_distance_bonus.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 06:24:33 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/06 07:58:13 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_DISTANCE_BONUS_H
# define PLAYER_DISTANCE_BONUS_H

# include "config_bonus.h"
# include "core/map_bonus.h"

# define SEARCH_STAP 10

int	get_right_dist(t_point *p, char *map[]);
int	get_left_dist(t_point *p, char *map[]);
int	get_down_dist(t_point *p, char *map[]);
int	get_up_dist(t_point *p, char *map[]);

#endif