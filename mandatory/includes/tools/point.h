/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 02:51:19 by juwkim            #+#    #+#             */
/*   Updated: 2022/12/28 02:53:48 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

typedef struct s_point
{
	int	first;
	int	second;
}	t_point;

int	is_equal(t_point a, t_point b);

#endif
