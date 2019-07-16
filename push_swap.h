/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 16:30:21 by vscott            #+#    #+#             */
/*   Updated: 2019/07/16 09:16:32 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# define MAX_INT 2147483647
# define MIN_INT -2147483648

typedef struct	s_stacks
{
	int			*stk_a;
	int			*stk_b;
	int			*a_sz;
	int			*b_sz;
}				t_stacks;

typedef struct	s_moves
{
	int			a_mvs;
	int			b_mvs;
	int			c_mvs;
	char		*a_rt;
	char		*b_rt;
	char		*c_rt;
	int			tot;
}				t_moves;

void		make_stacks(/*t_stacks *stacks, */char *str);

#endif
