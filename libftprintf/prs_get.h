/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prs_get.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 12:24:17 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/17 10:51:07 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRS_GET_H
# define PRS_GET_H

# include <stdarg.h>

void	get_precision(const char *restrict format, va_list ap) __attribute__
		((always_inline));

void	get_flags(const char *restrict format
		, _Bool *restrict specifier) __attribute__((always_inline));

_Bool	get_modifier(const char *restrict format) __attribute__
		((always_inline));

void	ft_get_width_or_dollar(const char *restrict str
		, _Bool dot) __attribute__((always_inline));

#endif
