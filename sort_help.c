/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_help.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 14:50:39 by vscott            #+#    #+#             */
/*   Updated: 2019/07/17 15:08:07 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	find_max(int *stack, int size)
{
	int	i;
	int	max;
	int	m;

	if (size == 0)
		return (-1);
	i = 0;
	m = 0;
	max = stack[i];
	while (i < size)
	{
		if(max < stack[i])
		{
			max = stack[i];
			m = i;
		}
		i++;
	}
	return (m);
}

int	find_min(int *stack, int size)
{
	int	i;
	int	min;
	int	m;

	if (size == 0)
		return (-1);
	i = 0;
	m = 0;
	min = stack[i];
	while (i < size)
	{
		if(min > stack[i])
		{
			min = stack[i];
			m = i;
		}
		i++;
	}
	return (m);
}
