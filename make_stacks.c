/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 17:11:06 by vscott            #+#    #+#             */
/*   Updated: 2019/07/17 17:11:55 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	split_count(char **split)
{
	int	count;

	count = 0;
	while (*(split++))
		count++;
	return (count);
}

static int	validate_int(char **split, char *nbr, int bgn)
{
	int i;

	i = 0;
	if (nbr[i] == '-' || nbr[i] == '+')
	{
		if (!ft_isdigit(nbr[i + 1]))
			return (0);
		i++;
	}
	while (nbr && nbr[i] != '\0')
	{
		if (!ft_isdigit(nbr[i]))
			return (0);
		i++;
	}
	if (ft_atoll(nbr) > MAX_INT || ft_atoll(nbr) < MIN_INT)
		return (0);
	while (split[bgn] && split && nbr)
	{
		if (ft_strequ(split[bgn], nbr))
			return (0);
		bgn++;
	}
	return (1);
}

void		make_stacks(t_stacks *stacks, char *str)
{
	char	**split;
	int		count;
	int		i;

	i = 0;
	split = ft_strsplit(str, ' ');
	count = split_count(split);
	ft_putnbr(count);			// Delete me!!
	ft_putchar('\n');
	stacks->stack_a = (int*)malloc(sizeof(int) * count);
	stacks->stack_b = (int*)ft_memalloc(sizeof(int) * count);
	stacks->a_size = count;
	stacks->b_size = 0;
	while (i < count)
	{
		if (validate_int(split, split[i], i + 1))
			stacks->stack_a[i] = ft_atoi(split[i]);
		else
		{
			free_stacks(stacks);
			ft_putstr_fd("Error\n", 2);
			exit(1);
		}
		i++;
	}
	//May need to return stack
}