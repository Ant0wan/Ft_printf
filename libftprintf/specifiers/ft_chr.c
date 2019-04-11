/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:39:26 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/11 16:54:52 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "prs_struct.h"
#include "ft_expand_ret.h"
#include "prefix.h"
#include "ft_wchar.h"
#include "utf8.h"

extern t_options	g_options;
extern t_modifier	g_modifier;
extern t_prefix		g_prefix;

static inline void	ret_wc(wchar_t wc)
{
	if (g_modifier.l)
		utf8_encoder(&wc);
	if ((char)(wc >> 24))
		g_ret.ret[++g_ret.i] = (char)(wc >> 24);
	if ((char)(wc >> 16))
		g_ret.ret[++g_ret.i] = (char)(wc >> 16);
	if ((char)(wc >> 8))
		g_ret.ret[++g_ret.i] = (char)(wc >> 8);
	if ((char)wc || g_prefix.len == 1)
		g_ret.ret[++g_ret.i] = (char)wc;
	g_options.width -= g_prefix.len;
}

void				ft_chr(wchar_t wc)
{
	int	size;

	reset_prefix();
	if (g_modifier.l)
		g_prefix.len = ft_ewcwidth(wc);
	else
		g_prefix.len = sizeof(char);
	size = g_options.width < g_prefix.len ? g_prefix.len : g_options.width;
	while (g_ret.i + size >= g_ret.max)
		ft_expand_ret(size); // check return value again with errno
	while (!(g_flags.minus) && g_options.width - g_prefix.len > 0)
	{
		--g_options.width;
		g_ret.ret[++g_ret.i] = ' ';
	}
	if (g_modifier.l)
		ret_wc(wc);
	else
		ret_wc((unsigned char)wc);
	while (g_flags.minus && g_options.width > 0)
	{
		--g_options.width;
		g_ret.ret[++g_ret.i] = ' ';
	}
}

void				ft_wchr(wchar_t wc)
{
	g_modifier.l = 1;
	ft_chr(wc);
}