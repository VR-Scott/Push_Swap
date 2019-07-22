/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_frees.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 11:53:29 by vscott            #+#    #+#             */
/*   Updated: 2019/07/22 17:32:05 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		is_sorted(int *stack, int size)
{
	int i;

	if (size == 1)
		return (1);
	i = 0;
	while (i < size - 1)
	{
		if (stack[i] > stack[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	free_stacks(t_stacks *stacks)
{
	if (stacks->stack_a)
		free(stacks->stack_a);
	if (stacks->stack_b)
		free(stacks->stack_b);
	if (stacks)
	{
		free(stacks);
		stacks = NULL;
	}
}

void	free_moves(t_moves *moves)
{
	free(moves->a_rot);
	free(moves->b_rot);
	free(moves->c_rot);
	free(moves);
	moves = NULL;
}
