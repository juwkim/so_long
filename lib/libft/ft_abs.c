/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 02:22:21 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/06 02:23:07 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_abs(int a)
{
	if (a < 0)
		return (-a);
	else
		return (a);
}
