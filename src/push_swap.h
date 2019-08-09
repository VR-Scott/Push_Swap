/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 16:30:21 by vscott            #+#    #+#             */
/*   Updated: 2019/08/09 15:19:58 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/src/libft.h"
# define MAX_INT 2147483647
# define MIN_INT -2147483648

typedef struct	s_stacks
{
	int			*stack_a;
	int			*stack_b;
	int			a_size;
	int			b_size;
}				t_stacks;

typedef struct	s_moves
{
	int			a_moves;
	int			b_moves;
	int			c_moves;
	int			tot;
	int			elem;
	char		*a_rot;
	char		*b_rot;
	char		*c_rot;
}				t_moves;

/*
** push_swap.h
*/
void			ft_print_stacks(t_stacks *stacks); // Delete this function.
/*
** make_stacks.c
*/
void			make_stacks(t_stacks *stacks, char *str);
/*
** struct_mans
*/
int				is_sorted(int *stack, int size);
void			free_stacks(t_stacks *stacks);
void			free_moves(t_moves *moves);
/*
** apply_ins.c
*/
void			apply_sa(t_stacks *stacks);
void			apply_sb(t_stacks *stacks);
void			apply_ss(t_stacks *stacks);
void			apply_pa(t_stacks *stacks);
void			apply_pb(t_stacks *stacks);
/*
** apply_ins_ch.c
*/
void			apply_sa_ch(t_stacks *stacks);
void			apply_sb_ch(t_stacks *stacks);
void			apply_ss_ch(t_stacks *stacks);
void			apply_pa_ch(t_stacks *stacks);
void			apply_pb_ch(t_stacks *stacks);
/*
** sort.c
*/
void			sort(t_stacks *stacks);
/*
** sort_help.c
*/
void			min_first(t_stacks *stacks);
int				find_max(int *stack, int size);
int				find_min(int *stack, int size);
/*
** apply_rr.c
*/
void			apply_ra(t_stacks *stacks);
void			apply_rb(t_stacks *stacks);
void			apply_rr(t_stacks *stacks);
/*
** apply_rrr.c
*/
void			apply_rra(t_stacks *stacks);
void			apply_rrb(t_stacks *stacks);
void			apply_rrr(t_stacks *stacks);
/*
** apply_rr_ch.c
*/
void			apply_ra_ch(t_stacks *stacks);
void			apply_rb_ch(t_stacks *stacks);
void			apply_rr_ch(t_stacks *stacks);
/*
** apply_rrr_ch.c
*/
void			apply_rra_ch(t_stacks *stacks);
void			apply_rrb_ch(t_stacks *stacks);
void			apply_rrr_ch(t_stacks *stacks);
/*
** find_rot.c
*/
int				find_a_rot(int len, int pos, char **rot);
int				find_b_rot(int len, int pos, char **rot);
/*
** large_sort.c
*/
void			large_sort(t_stacks *stacks);
/*
** least_moves_a_2_b.c
*/
t_moves			*least_moves_a_2_b(t_stacks *stacks);

#endif
