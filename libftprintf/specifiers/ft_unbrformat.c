/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unbrformat.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 18:06:34 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/21 17:53:40 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

#include "prs_struct.h"
#include "specifiers.h"
#include "retwriter.h"
#include "libft.h"

#ifndef G_ERROR
# define G_ERROR 1
#endif

extern t_modifier	g_modifier;
extern _Bool		g_error;

/* PUT ON TOP OF EACH FILE THE LOGIC OF THE ALGORITHMS  */

//          FOR NON MINUS FLAGGED
//    |------------------------------- while: width ----------|
//                                                  |   --size;
//                                                  |-- nbr --|
//                                                  |    --len;
//                                               |-- preci ---|
//                                               |       --pre;
//                                             |- sign -------|
//                                             |      nil sign;
//    |                                  fill space           |
//    |-------------------------------------------------------|


//          FOR MINUS FLAGGED
//    |--------------------- while: width > precision --------|
//    --width;                                                |
//    --size;                                                 |
//    |space------ nbr -----------|
//    --len;                 |
//    --precision;           |
//    |----precision --|
//    -- precision;    |
//    |-|
//    sign;
//    |-------------------------------------------------------|

#include <stdio.h> // DEBUGGING
extern inline void	ft_unbrformat(uintmax_t nb, char *str, int size, int len)
{
	uintmax_t	rest;

	rest = nb;
	if (g_options.precision >= 0)
		g_flags.zero = 0;
	// STILL APOSTROPHES TO HANDLE
	if (g_flags.minus)
	{
		if (g_options.precision <= 0)
			g_options.precision = len;
		if (g_flags.space)
		{
			++len;
			++g_options.precision;
		}
		while (size > 0)
		{
			--size;
			if (g_options.width > g_options.precision && size >= len)
			{
				--g_options.width;
				str[size] = ' ';
			}
			else if (len > 0 && rest)
			{
				if (nb == 0)
					--len;
				--len;
				--g_options.precision;
				--g_options.width;
				str[size] = (rest % 10) ^ 0x30;
				rest = (rest - (rest % 10)) / 10;
			}
			else if (len > 0 && nb == 0 && !(g_options.precision))
			{
				len -= 2;
				str[size] = '0';
				--g_options.precision;
				--g_options.width;
			}
			else if (g_options.precision > 0)
			{
				--g_options.precision;
				--g_options.width;
				if (g_flags.space && !(size))
					str[size] = ' ';
				else
					str[size] = '0';
			}
			else if (g_flags.space)
				str[size] = ' ';
		}
	}
	else
	{
		while (size > 0)
		{
			--size;
			if (len > 0 && (rest || nb == 0))
			{
				--len;
				--g_options.precision;
				str[size] = (rest % 10) ^ 0x30;
				rest = (rest - (rest % 10)) / 10;
			}
			else if (g_options.precision > 0)
			{
				--g_options.precision;
				--g_options.width;
				str[size] = '0';
			}
			else if (g_flags.zero)
			{
				if (size == 0)
				{
					g_flags.zero = 0;
					++size;
				}
				else
					str[size] = '0';
			}
			else
				str[size] = ' ';
			--g_options.width;
		}
	}
}