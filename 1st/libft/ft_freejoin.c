/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freejoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 08:47:14 by vscott            #+#    #+#             */
/*   Updated: 2019/07/01 09:09:31 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_freejoin(char *tofr, char *tokp)
{
	char *fr;

	if (!tokp && !tofr)
		return (NULL);
	if (!tokp)
		return (tofr);
	if (!tofr)
		return (tofr = ft_strdup(tokp));
	fr = tofr;
	tofr = ft_strjoin(tofr, tokp);
	free(fr);
	return (tofr);
}
