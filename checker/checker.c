/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 07:45:06 by vscott            #+#    #+#             */
/*   Updated: 2019/07/02 16:34:54 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

static t_list	*ft_makelst(char **sa)
{
	int		e;
	t_list	*elem;

	if (*sa)
	{
		e = (ft_atoi(*sa));
		elem = ft_lstnew((void*)&e, sizeof(int));
		elem->next = ft_makelst(++sa);
		return (elem);
	}
	return (NULL);
}

static t_list	*ft_makestack(char *str)
{
	char	**split;

	split = ft_strsplit(str, ' ');
	ft_putendl_2d(split);
	return (ft_makelst(split));
}

static void		ft_putnlst(t_list *lst)
{
	while (lst)
	{
		ft_putnbr(*((int*)(lst->content)));
		ft_putchar('\n');
		lst = lst->next;
	}
}

int				main(int ac, char **av)
{
	t_list	*lst;
	t_list	**head;

	if (ac > 1)
	{
		ft_putendl(av[1]);
		lst = (ft_makestack(av[1]));
		head = &lst;
		ft_putendl("lst");
		ft_putnlst(*head);
	}
	return (0);
}
