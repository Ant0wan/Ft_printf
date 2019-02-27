/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   passivewrap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 10:38:50 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/27 17:03:43 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

#include "prs_struct.h"

extern t_ret		g_ret;
extern t_options	g_options;

void	passivewrap(void *(*f)(), va_list ap)
{
	int	i;
	int	rubbish;

	i = 0;
	while (++i < g_options.val_dol)
		rubbish = va_arg(ap, int);
	f(va_arg(ap, typeof(ap)));
	++g_options.i_ap;
}
