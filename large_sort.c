/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   large_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 08:41:50 by vscott            #+#    #+#             */
/*   Updated: 2019/07/18 12:25:41 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	large_sort(t_stacks *stacks)
{
	t_move	*best_moves;
	int		optimiser;

	optimiser = (stacks->a_size > 200)? 50 : 2;
	while (stacks->b_size != 2)
		apply_pb(stack);
	while (stacks->a_size > optimiser)
	{
		best_moves = least_moves_a_2_b(stacks);
	}
}
