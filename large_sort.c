/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   large_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 12:08:21 by vscott            #+#    #+#             */
/*   Updated: 2019/07/18 12:14:39 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	large_sort(t_stacks *stacks)
{
	t_moves *best_moves;
	int		optimiser;

	optimiser = (stacks->a_size > 200)? 50 :2;
	while (stacks->b_size != 2)
		apply_pb(stack);
	while (stacks->a_size > optimiser)
	{
		best_moves = least_moves_a_2_b(stacks);
	}
}
