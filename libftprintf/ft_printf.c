/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 14:27:49 by abarthel          #+#    #+#             */
/*   Updated: 2019/01/29 16:39:27 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_wchar.h"

#include <stdarg.h>
#include <unistd.h>

int		ft_printf(const char *restrict format, ...)
{
	va_list ap;
	int		ret;

	va_start(ap, format);
	ret = ft_fwprintf(STDOUT_FILENO, format, ap);
	va_end(ap);
	return (ret);
}
