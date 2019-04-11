/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_y.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 17:38:39 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/11 19:06:42 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prs_struct.h"
#include "ft_expand_ret.h"
#include "specifiers.h"

extern t_flags		g_flags;
extern t_modifier	g_modifier;
extern t_options	g_options;

static inline void	set_globals(void)
{
	g_options.width = -1;
	g_options.precision = -1;
	g_flags.hash = 0;
	g_flags.zero = 0;
	g_flags.minus = 0;
	g_flags.space = 0;
	g_flags.plus = 0;
	g_flags.apost = 0;
	g_modifier.hh = 0;
	g_modifier.h = 1;
	g_modifier.l = 0;
	g_modifier.ll = 0;
	g_modifier.j = 0;
	g_modifier.t = 0;
	g_modifier.z = 0;
	g_modifier.upl = 0;
}

static inline void	ffff_coloring(unsigned short value)
{
	if (g_flags.hash)
	{
		g_ret.ret[++g_ret.i] = '4';
		g_ret.ret[++g_ret.i] = '8';
		g_ret.ret[++g_ret.i] = ';';
		g_ret.ret[++g_ret.i] = '5';
		g_ret.ret[++g_ret.i] = ';';
		set_globals();
		ft_unbr(value);
	}
	else
	{
		g_ret.ret[++g_ret.i] = '3';
		g_ret.ret[++g_ret.i] = '8';
		g_ret.ret[++g_ret.i] = ';';
		g_ret.ret[++g_ret.i] = '5';
		g_ret.ret[++g_ret.i] = ';';
		set_globals();
		ft_unbr(value);
	}
}

void				ft_y(unsigned short value)
{
	while (g_ret.i + 14 >= g_ret.max)
		ft_expand_ret(14); // protect with errno
	g_ret.ret[++g_ret.i] = '\e';
	g_ret.ret[++g_ret.i] = '[';
	if (g_flags.plus)
		ffff_coloring(value);
	else if (!(g_flags.zero))
	{
		set_globals();
		ft_unbr(value);
	}
	else
		g_ret.ret[++g_ret.i] = '0';
	g_ret.ret[++g_ret.i] = 'm';
}
