/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoistr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharlat <tcharlat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/02 00:16:49 by tcharlat          #+#    #+#             */
/*   Updated: 2014/01/02 00:16:51 by tcharlat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strings.h"

t_istr		*ft_strtoistr(char *str, char del)
{
	int		index;
	int		size;
	char	*ret;

	if (!str)
		return (NULL);
	index = 0;
	while (str[index])
		index++;
	size = index;
	ret = (char *)ft_newistr(size);
	index = 0;
	while (str[index])
	{
		ret[index] = str[index];
		index++;
	}
	ret[index] = 0;
	if (del)
		free(str);
	return ((t_istr *)ret);
}
