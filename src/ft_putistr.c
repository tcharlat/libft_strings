/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putistr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharlat <tcharlat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/01 23:58:06 by tcharlat          #+#    #+#             */
/*   Updated: 2014/01/01 23:58:08 by tcharlat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strings.h"

void		ft_putistr(t_istr *istr, int fd, char end, char del)
{
	int		size;

	size = *(((int *)(void *)istr) - 1);
	write(fd, (char *)istr, (size_t)size);
	if (end)
		write(fd, &end, 1);
	if (del)
		ft_freeistr(istr);
}
