/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newistr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharlat <tcharlat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/01 19:13:59 by tcharlat          #+#    #+#             */
/*   Updated: 2014/01/02 02:11:37 by tcharlat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strings.h"

t_istr		*ft_newistr(int size)
{
	void	*tmp;
	int		*intptr;
	t_istr	*istrptr;

	if (!(tmp = malloc(sizeof(t_istr) * (unsigned long)size + 5)))
		return (NULL);
	intptr = (int *)tmp;
	*intptr = size;
	istrptr = (t_istr *)tmp;
	istrptr = istrptr + 4;
	return (istrptr);
}
