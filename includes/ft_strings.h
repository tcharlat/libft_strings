/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strings.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharlat <tcharlat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/01 19:12:38 by tcharlat          #+#    #+#             */
/*   Updated: 2014/01/01 19:12:43 by tcharlat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRINGS_H
# define FT_STRINGS_H
# include <unistd.h>
# include <stdlib.h>

typedef struct	s_istr
{
	char		c;
}				t_istr;

t_istr		*ft_newistr(int size);
t_istr		*ft_strtoistr(char *str, char del);
void		ft_freeistr(t_istr *istr);
void		ft_putistr(t_istr *istr, int fd, char end, char del);

#endif	/* !FT_STRINGS_H */
