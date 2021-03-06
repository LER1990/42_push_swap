/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strplen.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lravier <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/02 17:21:18 by lravier       #+#    #+#                 */
/*   Updated: 2019/04/02 17:32:48 by lravier       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strplen(char *s, char *f)
{
	int i;

	i = 0;
	while (&s[i] != f && s[i])
		i++;
	return (i);
}
