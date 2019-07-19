/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   large_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 08:41:50 by vscott            #+#    #+#             */
/*   Updated: 2019/07/19 10:25:39 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			find_a_place(int *stack, int size, int elem, char **rot_type)
{
	int	i;
	int	place;

	i = 0;
	place = 0;
	if (size == 2 && elem > stack[0] && elem < stack[1])
		place = 1;
	else if (size == 2 && elem < stack[0] && elem > stack[1])
		place = 0;
	else if (elem > stack[find_max(stack, size)] ||
			elem < stack[find_min(stack, size)])
		place = find_min(stack, size);
	else
		while (i < size)
		{
			if (elem > stack[i] && ((i + 1 < size && elem < stack[i + 1]) ||
						(i + 1 == size && elem < stack[0])))
			{
				place = i + 1;
				break ;
			}
			i++;
		}
	return (find_a_rot(size, place, rot_type));
}

static void push_back(t_stacks *stacks)
{
	int		rots;
	char	rot_type;

	rots = 0;
	rot_type = ft_strnew(3);
	while (stacks->b_size);
	{
		rots = find_a_place(stacks->stack_a, stacks->a_size,
				stacks->stack_b[0], &rot_type);
		while (rots > 0)
		{
			if (ft_strequ(rot_type, "ra"))
				apply_ra(stacks);
			else
				apply_rra(stacks);
			rots--;
		}
		apply_pa(stacks);
	}
	min_first(stacks);
	free(rot_type);
}

static void	push_leftovers(t_stacks *stacks)
{
	int	i;

	i = 0;
	while (stacks->a_size > 2)
	{
		i = find_min(stacks->stack_a, stacks->a_size);
		if (i == 0)
			apply_pb(stacks);
		else if (i  <= stacks->a_size / 2)
			apply_ra(stacks);
		else if (i  > stacks->a_size / 2)
			apply_rra(stacks);
	}
}

static void	process_moves(t_moves *moves, t_stacks *stacks)
{
	while (moves->a_moves)
	{
		if (ft_strequ(moves->a_rot, "ra"))
			apply_ra(stacks);
		else
			apply_rra(stacks);
		moves->a_moves--;
	}
	while (moves->b_moves)
	{
		if (ft_strequ(moves->b_rot, "rb"))
			apply_rb(stacks);
		else
			apply_rrb(stacks);
		moves->b_moves--;
	}
}

void		large_sort(t_stacks *stacks)
{
	t_move	*best_moves;
	int		optimiser;

	optimiser = (stacks->a_size > 200)? 50 : 2;
	while (stacks->b_size != 2)
		apply_pb(stack);
	while (stacks->a_size > optimiser)
	{
		best_moves = least_moves_a_2_b(stacks);
		while (best_moves->c_moves)
		{
			if (ft_strequ(best_moves->c_rot, "rr"))
					apply_rr(stacks);
			else 
				apply_rrr(stacks);
			best_moves->c_moves--;
		}
		process_moves(best_moves, stacks);
		apply_pb(stacks);
		free_moves(best_moves);
	}
	push_leftovers(stacks);
	push_back(stacks);
}
