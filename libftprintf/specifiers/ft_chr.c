/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 18:19:57 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/21 16:08:24 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>

#include "prs_struct.h"
#include "retwriter.h"
#include "libft.h"
#include "ft_wchar.h"
#include "utf8.h"
#include "specifiers.h"

#ifndef G_ERROR
# define G_ERROR 1
#endif

extern t_options	g_options;
extern t_modifier	g_modifier;

static inline int	ft_get_str_object_size(void)
{
	int size;

	size = 1;
	if (g_options.precision != -1)
		if (g_options.precision < 1)
			size = g_options.precision;
	if (g_options.width > size)
		size = g_options.width;
	return (size);
}

static inline void	ft_fill_object(char *obj, char c, int size)
{
	int	i;

	i = 0;
	if (g_flags.minus)
	{
		obj[i] = c;
		++i;
		--size;
		while (size >= 0)
		{
			obj[i] = ' ';
			++i;
			--size;
		}
	}
	else
	{
		while (size - 1)
		{
			obj[i] = ' ';
			++i;
			--size;
		}
		obj[i] = c;
		++i;
		--size;
	}
}

void				ft_chr(wchar_t wc)
{
	char	*object;
	int		size;

	if (g_modifier.l)
	{
		ft_wchr(wc);
		return ;
	}
	else if (g_options.width >= INT_MAX - g_ret.i)
	{
		g_error = G_ERROR;
		return ;
	}
	size = ft_get_str_object_size();
	if (!(object = (char*)ft_memalloc(sizeof(char) * size)))
	{
		g_error = G_ERROR;
		return ;
	}
	ft_fill_object(object, (unsigned char)wc, size);
	retwriter(object, size);
	free(object);
}