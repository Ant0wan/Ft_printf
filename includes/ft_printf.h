/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 14:27:04 by abarthel          #+#    #+#             */
/*   Updated: 2019/01/24 12:37:10 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>

# include <stdio.h> // DEBUGGING

typedef struct	s_typeop
{
	char	*type;
	void	*(*f)();
}				t_typeop;

extern t_typeop	g_typeoptab[]; // =
//{
//	{ "\0", (void*)0}
//};

int				ft_printf(const char *restrict format, ...);

#endif
