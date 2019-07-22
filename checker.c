/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 09:57:53 by vscott            #+#    #+#             */
/*   Updated: 2019/07/22 16:15:35 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int	do_rr(t_stacks *stacks, char *in)
{
	if (in[2] == '\0')
		apply_rr(stacks);
	else if (in[2] == 'a')
		apply_rra(stacks);
	else if (in[2] == 'b')
		apply_rrb(stacks);
	else if (in[2] == 'r')
		apply_rrr(stacks);
	else
		return (-1);
	return (0);
}

static	int	do_ins(t_stacks *stacks, char *in)
{
	if (ft_strnequ(in, "rr", 2))
	{
		if (do_rr(stacks, in))
			return (-1);
	}
	else if (ft_strequ(in, "sa"))
		apply_sa(stacks);
	else if (ft_strequ(in, "sb"))
		apply_sb(stacks);
	else if (ft_strequ(in, "ss"))
		apply_ss(stacks);
	else if (ft_strequ(in, "pa"))
		apply_pa(stacks);
	else if (ft_strequ(in, "pb"))
		apply_pb(stacks);
	else if (ft_strequ(in, "ra"))
		apply_ra(stacks);
	else if (ft_strequ(in, "rb"))
		apply_rb(stacks);
	else
		return (-1);
	return (0);
}

static void	get_ins(t_stacks *stacks)
{
	char *in;

	while (get_next_line(0, &in) > 0)
	{
		if (do_ins(stacks, in))
		{
			ft_putstr_fd("Error\n", 2);
			free_stacks(stacks);
			free(in);
			exit(1);
		}
		free(in);
		in = NULL;
	}
	if (in)
		free(in);
}

int			main(int ac, char **av)
{
	t_stacks	*stacks;

	if (ac > 1)
	{
		stacks = (t_stacks*)malloc(sizeof(t_stacks));
		make_stacks(stacks, av[1]);
		if (!(is_sorted(stacks->stack_a, stacks->a_size)))
			get_ins(stacks);
		if (is_sorted(stacks->stack_a, stacks->a_size) && stacks->b_size == 0)
			ft_putstr("OK\n");
		else
			ft_putstr("KO\n");
		free_stacks(stacks);
	}
	return (0);
}
