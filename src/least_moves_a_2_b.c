/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   least_moves_a_2_b.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 08:55:39 by vscott            #+#    #+#             */
/*   Updated: 2019/08/10 11:17:40 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int		find_place_b(int *stack, int size, int elem, char **rot)
{
	int i;
	int place;

	i = 0;
	place = 0;
	if (size == 2 && elem > stack[0] && elem < stack[size - 1])
		place = 0;
	else if (size == 2 && elem < stack[0] && elem > stack[size - 1])
		place = 1;
	else if (elem > stack[find_max(stack, size)] ||
			elem < stack[find_min(stack, size)])
		place = find_max(stack, size);
	else
		while (i < size)
		{
			if (elem < stack[i] && ((i + 1 < size && elem > stack[i + 1]) ||
					(i + 1 == size && elem > stack[0])))
			{
				place = i + 1;
				break ;
			}
			i++;
		}
	return (find_b_rot(size, place, rot));
}

static int		find_common(t_moves *moves)
{
	int	com;

	com = 0;
	if ((ft_strequ(moves->a_rot, "rra") && (ft_strequ(moves->b_rot, "rrb"))) ||
			(ft_strequ(moves->a_rot, "ra") && (ft_strequ(moves->b_rot, "rb"))))
	{
		com =
		(moves->a_moves > moves->b_moves ? moves->b_moves : moves->a_moves);
		if (com)
		{
			moves->c_rot = ft_strcpy(moves->c_rot, moves->a_rot);
			moves->c_rot[ft_strlen(moves->c_rot) - 1] = 'r';
			moves->b_moves -= com;
			moves->a_moves -= com;
		}
	}
	return (com);
}

static t_moves	*calc_moves_a_2_b(t_stacks *stacks, int pos)
{
	t_moves	*moves;

	moves = (t_moves*)malloc(sizeof(t_moves));
	moves->a_rot = ft_strnew(3);
	moves->b_rot = ft_strnew(3);
	moves->c_rot = ft_strnew(3);
	moves->elem = stacks->stack_a[pos];
	moves->a_moves = find_a_rot(stacks->a_size, pos, &(moves->a_rot));
	moves->b_moves = find_place_b(stacks->stack_b, stacks->b_size,
			stacks->stack_a[pos], &(moves->b_rot));
	moves->c_moves = find_common(moves);
	moves->tot = moves->a_moves + moves->b_moves + moves->c_moves + 1;
	return (moves);
}

t_moves			*least_moves_a_2_b(t_stacks *stacks)
{
	int		i;
	t_moves	*best_moves;
	t_moves	*moves;

	i = 0;
	while (i < stacks->a_size)
	{
		moves = calc_moves_a_2_b(stacks, i);
		if (i == 0)
			best_moves = moves;
		else if (best_moves->tot > moves->tot)
		{
			del_moves(&best_moves);
			best_moves = moves;
		}
		else
			del_moves(&moves);
		i++;
	}
	return (best_moves);
}
